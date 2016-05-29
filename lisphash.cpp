// lisphash.cpp                                        A C Norman, May 2016

/**************************************************************************
 * Copyright (C) 2016, Codemist.                         A C Norman       *
 *                                                                        *
 * Redistribution and use in source and binary forms, with or without     *
 * modification, are permitted provided that the following conditions are *
 * met:                                                                   *
 *                                                                        *
 *     * Redistributions of source code must retain the relevant          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer.                                                      *
 *     * Redistributions in binary form must reproduce the above          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer in the documentation and/or other materials provided  *
 *       with the distribution.                                           *
 *                                                                        *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *
 * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE * POSSIBILITY OF SUCH *
 * DAMAGE.                                                                *
 *************************************************************************/

// $Id$

#include "headers.h"

//
// This is an implementation of hash tables intended to be used when the
// keys in the table are structures of some sort. It might be useful for
// strings or structures representing symbols, or for more general large
// objects. There are two points to the issue of what the hashed items will
// be. The first is that the table will contain references to objects not
// the objects themselves - and this means that checking objects will
// access memory in ways that could involve cache misses. This is a different
// scenario from the one where keys are integers or other immediate data.
// The second issue is that both computing hash values and comparing keys
// may have significant cost, and in particular the costs there may be
// higher than general administration activity on the table itself.
//
// The response I have to the above is to use a variety of Cuckoo hashing
// where each key can be places in one of only three locations. Thus the
// worst-case lookup cost involved 3 probes. I compute a single initial
// 64-bit hash function on a key and derive the three probe positions from
// it: for tables holding up to a couple of million entries those three
// positions could be independent (because in effect they pick out different
// subsets of the full 64-bit value).
// I arrange that if, as I inspect the table, I encounter an empty slot
// that means that the key I was looking for is not present. Thus in some
// cases I can verify that a key is not in the table by computing one hash
// function and inspecting the table but not performing any key comparisons
// at all. Similarly when I insert data into a fairly empty table I will
// (reasonably often) not need key comparison operations, because if
// when I probe in the seque3nce I would as for a lookup I happen on
// and EMPTY slot I know the key is not present and I have just found where
// I should insert it.
// Note that the decision just described means that deletion must
// insert tombstone values, and if too many of those are present it can
// degrade lookup time (but pretty well at worst to an average of two probes
// for a successful lookup and three for an unsuccessful one). Rehashing
// large tables can also leave behind tombstones and I have a trade off
// between time and space used during rehashing and the number of tombstones
// left. I will arrange that for most tables of reasonable size things are
// handled nicely!
//
// As with any general hash table implementation I occasionally need to
// expand or contract the table and re-hash. For cuckoo hashing I sometimes
// need to alter my hash function parameter and rehash to avoid a cluster
// of hash conflicts. While those two have significant cost they should
// both be uncommon and their amortised cost modest.
//
// I write HASH() for the code that will compute a hash function, and
// COMPARE() for key comparison. COMPARE should never be called with an
// EMPTY or TOMBSTONE value, and that may at times allow a minor optimisation
// in its implementation.

// Really ENTRY is liable to be LispObject and EMPTY and TOMBSTONE will
// be a couple of SPID values...

//
// The following are the components that make up a hash table...
//
ENTRY *table = NULL;
int shift_amount = 64-18;
size_t table_size = ((size_t)(1<<(64-shift_amount)));
size_t occupancy = 0;
uint64_t multiplier = UINT64_C(0x9e3779b99e3779bd);

static inline void update_multiplier()
{
// The constants (28...57) and (30..93) here yield a linear congruential
// generator with full period when used with 64-bit integers. Here I
// use them on 63-bits of the multiplier. I update in such as way that
// my least significant bit remains as a "1". I want that so that
// if I compute a hash value using "h=((multiplier*key)>>shift)" then
// high bits in the key do not get multiplied out from where they can
// influence the result. To see how bad things could be imagine if the
// multipiler somehow ended up as having the value 2^62... then only
// the very bottom bits of the key could contribute to the hash value!
    multiplier = UINT64_C(2862933555777941757)*multiplier +
                 (2*UINT64_C(3037000493)-UINT64_C(2862933555777941757)+1);
}

static uint64_t hashcount=0, comparecount=0;

#define HASH(key, multiplier) (hashcount++,((key)*multiplier))
#define REHASH(h, multiplier) ((((h) ^ ((h)>>32)) + 0x1234567)*(multiplier))
#define COMPARE(k1, k2)       (comparecount++,((k1) == (k2)))

// dumptable() displays the contants of the hash table (for debugging
// purposes), optionally checking to confirm that it seems to be
// properly configured.

void dumptable(LispObject tt, const char *s, bool checkdups)
{
    size_t i;
    bool bad = false;
    printf("%s\n", s);
    for (i=0; i<table_size; i++)
    {   ENTRY k = table[i];
        uint64_t h = HASH(k, multiplier);
        int h1 = h >> shift_amount;
        uint64_t hx = REHASH(h, multiplier);
        int h2 = hx >> shift_amount;
        int h3 = (multiplier*hx) >> shift_amount;
        if (k == EMPTY) printf("%3"PRIuMAX": EMPTY\n", (uintmax_t)i);
        else if (k == TOMBSTONE) printf("%3"PRIuMAX": TOMBSTONE\n", (uintmax_t)i);
        else
        {   const char *s1=" ", *s2 = " ", *s3 = " ", *s4 = "";
            if (h1 == i)
            {   s1 = "=";
                if (h2 != i && table[h2] == k) { s2 = "?"; bad = true; }
                if (h3 != i && table[h3] == k) { s3 = "?"; bad = true; }
            }
            if (h2 == i)
            {   s2 = "=";
                if (h1 != i && table[h1] == k) { s1 = "?"; bad = true; }
                if (h3 != i && table[h3] == k) { s3 = "?"; bad = true; }
                if (table[h1] == EMPTY) s4 = " @@@";
            }
            if (h3 == i)
            {   s3 = "=";
                if (h1 != i && table[h1] == k) { s1 = "?"; bad = true; }
                if (h2 != i && table[h2] == k) { s2 = "?"; bad = true; }
                if (table[h1] == EMPTY) s4 = " @@@";
                if (table[h2] == EMPTY) s4 = " @@@";
            }
            if (h1 != i && h2 != i && h3 != i) s4 = "@@@";
            printf("%3"PRIuMAX": [%"PRIx64"] %s%d %s%d %s%d%s\n",
                (uintmax_t)i, (uint64_t)k, s1, h1, s2, h2, s3, h3, s4);
        }
    }
    if (bad && checkdups)
    {   printf("Exiting (checkdups=%d)\n", checkdups);
        exit(0);
    }
}

static void corrupted(LispObject tt)
{
    printf("Table is corrupted\n");
    dumptable(tt, "Table is corrupted", true);
    fflush(stdout);
    abort();
}

void checktable(LispObject tt)
{
    size_t i;
    for (i=0; i<table_size; i++)
    {   ENTRY k = table[i];
        uint64_t h = HASH(k, multiplier);
        int h1 = h >> shift_amount;
        uint64_t hx = REHASH(h, multiplier);
        int h2 = hx >> shift_amount;
        int h3 = (multiplier*hx) >> shift_amount;
        if (k != EMPTY && k != TOMBSTONE)
        {   if (h1 == i)
            {   if (h2 != i && table[h2] == k) corrupted();
                if (h3 != i && table[h3] == k) corrupted();
            }
            if (h2 == i)
            {   if (h1 != i && table[h1] == k) corrupted();
                if (h3 != i && table[h3] == k) corrupted();
                if (h1 != i && table[h1] == EMPTY) corrupted();
            }
            if (h3 == i)
            {   if (h1 != i && table[h1] == k) corrupted();
                if (h2 != i && table[h2] == k) corrupted();
                if (h1 != i && h2 != i &&
                    (table[h1] == EMPTY || table[h2] == EMPTY)) corrupted();
            }
            if (h1 != i && h2 != i && h3 != i) corrupted();
        }
    }
}

// The main lookup function. In the worst case this can do three
// key comparisons. But it can be cheaper either on success if it
// finds a match on the first or second comparison, or on failure if
// it encounters an empty hash table slot in its probe sequence.
// Observe how very concise and fast this code is!

size_t lookup(ENTRY key)
{
    uint64_t h = HASH(key, multiplier);
    ENTRY v;
    size_t n;
// I probe the table. I will arrange that if I see an empty table slot then
// I can exit at once. The reason for making this extra test is that it
// may be that comparing keys is expensive (for instance it could be
// if they were long strings or complex structures) and this way I can
// report items not present in lightly loaded tables just a little bit
// sooner. A consequence of this is that when I wish to delete an item from
// the table I can not just mark its slot as empty, I will need to leave
// a "tombstone". I do not need to do anything special about tombstones
// during lookup (though the presence of large numbers of them will tend to
// hurt performance a little), but I will need to allow for them in the
// insertion code.
    if ((v = table[n = (h>>shift_amount)]) == EMPTY) return NOT_PRESENT;
    else if (v != TOMBSTONE && COMPARE(v, key)) return n;
// The second hash table is derived from the first by multiplication,
// but before that by mixing in the effect of shifting right be 32 bits.
// This is so that if a collection of keys all differ in just the top
// bits of the 64-bits they involve that those bits get a chance to impact
// on rather more bits of the second and third hash values. The use-case
// that led me to worry about this was if character strings are hashed
// doubleword-by-doubleword (on a big-endian machine) then one character
// strings could all use an initial key of the form 0xNN00000000000000 and
// simple multiplication only ever propagates information leftwards, so
// if first choice hashes collide there is too high a prospect of second
// choice ones doing so too. The same issue could perhaps arise with
// floating point numbers where I can imagine use-cases where many values
// that are hashed differ only in bits at one extreme end of the data.
    h = REHASH(h, multiplier);
    if ((v = table[n = (h>>shift_amount)]) == EMPTY) return NOT_PRESENT;
    else if (v != TOMBSTONE && COMPARE(v, key)) return n;
// The third choice hash uses merely simple multiplication.
    h = h*multiplier;
// Even in the worst case a lookup (sucessful or not) never takes more than
// three probes.
    if ((v = table[n = (h>>shift_amount)]) == EMPTY) return NOT_PRESENT;
    else if (v != TOMBSTONE && COMPARE(v, key)) return n;
    else return NOT_PRESENT;
}

// I provide instrumented lookup and insert functions that count the
// number of hash evaluations and key comparisons used.

uint64_t found_n=0, found_h=0, found_c=0;
uint64_t notfound_n=0, notfound_h=0, notfound_c=0;

size_t instrumented_lookup(ENTRY key)
{
    size_t r;
    hashcount = comparecount = 0;
    r = lookup(key);
    if (r == NOT_PRESENT)
    {   notfound_n++;
        notfound_h += hashcount;
        notfound_c += comparecount;
    }
    else
    {   found_n++;
        found_h += hashcount;
        found_c += comparecount;
    }
    return r;
}

// Deleting things from the table is really rather easy, apart from the
// fact that I should shrink the table it it has become too empty. However
// note that performing many deletions can leave the table cluttered with
// TOMBSTONE values and that can prevent the lookup code being able to exit
// early when a key is not present and it encouters an EMPTY slot.

// I need to track table occupancy and shrink the table if it becomes
// too empty. I have not implemented this yet and I will not want to be
// to quick to shrink things.

bool discard(ENTRY key)
{
    size_t n = lookup(key);
    if (n == NOT_PRESENT) return false; // Item had not been present.
    table[n] = TOMBSTONE;
    occupancy--;
    if (occupancy < table_size/5)
    {   //shrink_table();
    }
    return true;             // Item had been present. Now removed.
}


// When I insert an item I will always insert in one of the first two choice
// locations. If neither of them is empty I will need to move away a value
// presently stored, and it is these relocations that can move keys into
// their third-choice place.
// This scheme makes insertion just slightly more expensive but should tend
// to keep more items in first or second choice locations and so slightly
// speed up (successful) lookup.
//
// When I need to relocate items I will use a breadth-first search. this
// will use a queue that holds the locations where items could be stored.
//
// This queue can start off with two entries for the two locations that
// the key to be inserted might be placed:
//  2:  h1(k)
//  3:  h2(k)
// [remember I am not going to insert the new item in h3(k), its third choice
// location]. If h1(k)==h2(k) then I put a NOT_PRESENT in entry 2 rather
// then this duplicated value. That is to avoid wasteful repeated searches.
// When processing the queue let h=q[n] be the entry recovered. Then let
// k=table[h] - the item in the hash table that would need to be relocated
// to free up that location. So I evaluate h1(k), h2(k) and h3(k). At least
// one of these values must be h (because the key k was found at location h)
// so discard that value. Also discard duplicates. You are left with 0, 1 or
// hwo values. Pad that up to two values using NOT_PRESENT to fill in gaps
// and store what you have at locations 2n and 2n+1.
//
// Well the above is explained from a perspective of pre-actively searching
// alead. What I will actually do is to wait until I need an item from
// queue position 2n and use that to trigger the processing of the item at
// position n. I put my initial two seeds at queue locations 2 and 3 because
// that leads to the simple arithmetic where the two offspring of entry n
// are entries 2n and 2n+1.
//
// As I scan the table if I find table[q[n]]==EMPTY or TOMBSTONE then I have
// found a way to complete the insertion, and the data left in the queue
// is sufficient to let me perform the necessary rearrangement. This
// need to go
//      table[q[n]] = table[q[n/2]]
//      n = n/2
// to move the previously considered key to its new location. This step
// is repeated until n < 4. Because then n should be either 2 or 3 and
//      table[q[n]] = key_being_inserted;
// can put the original key in a good place.
//
// If while performing this search the queue is about to overflow it is
// necessary to report failure. When that happens no changes have been made
// to the table, and the item being inserted has not been inserted.
// The hashing scheme used here where each item has three potential homes
// has the property that for hash table occupancies up to around 90% there is
// a high probability that sufficiently exhaustive search will find a way to
// fit keys in the table, while for occupancies over that threshold it
// rapidly becomes very unlikely that insertion can succeed. If I set the
// maximum size of my search queue to modest values failure to insert will
// happen sooner. Depending on the precise interaction between the set of
// kets used and the hash function adopted it is possible for there to be
// an insert failure for even a very lightly loaded table.
// When an insert fails it makes sense to look at the table occupancy.
// My heuristic will be that if it is less than 60% I will first try
// changing my hash multiplier. I will mark the table to the effect that
// I have changed the multiplier so that if a subsequent insert also fails
// I will not try that adjustment again.
// If either the table was at least 60% full, or rehashing with a new
// multiplier failed, or if a later insertion following an earlier change
// of multiplier failed then I will double the table size. If on trying
// to hash into the double-size table I get a failure I will try several
// multiplier changes before failling back to re-doubling. When I have
// successfully enlarged the table I will reset the flag that permits me
// a multiplier change attempt again.
// Some experimentation suggests that with the parameters I have here the
// table will generally reach over 80% loading for tables of size up
// to around 50K entries, and that that decreases to around 70% when the
// table contains many million items. This decrease is reasonable since the
// limited search depth I allow myself might become more limiting both for
// larger search spaces of huge tables and the much larger number of times
// searching is performed.


// QSIZE is the size of the queue used in the breadth-first search. Higher
// values make a few insert oparations more expensive but lead to better
// ability to fit keys in. For most key inserts (even as you get towards
// the highest table occupancy I support) the amount of queue used will be
// trivial.

#define QSIZE 100

size_t insert(ENTRY key)
{
    int Qn;
    uint64_t Qkey[QSIZE];
    int Q[QSIZE];
    uint64_t h = HASH(key, multiplier);
    ENTRY v1, v2, v3;
    size_t n, n1, n2, n3;
#ifdef TRACE
    uint64_t hx = REHASH(h, multiplier);
    printf("Insert %"PRIx64" %d %d %d\n",
        key,
        (int)(h >> shift_amount),
        (int)(hx >> shift_amount),
        (int)((multiplier*hx) >> shift_amount));
#endif
// I have what seems a rather long-winded prelude to the general insert code.
// If the key presented hashed to h1, h2 and h3 then I first check if h1 is
// empty (if so the key is not present). Then I check if h1 contains the
// key already. Next I check h2 and h3 similarly. If none of these
// tests resolve the matter I check whether there are tombstones at h1 or h2
// and I can insert into the first space shown available that way.
// If this does not resolve matters then I know that the key I am inserting
// is not already present in the table, and so I will never need any more
// key comparisons. But I do have to perform a breadth-first search to seek
// a way to rearrange data to fit the new key in. This can fail, in which
// case I will return -1 leaving the table unchanged.
    if ((v1 = table[n1 = (h>>shift_amount)]) == EMPTY)   // Gap found.
    {   table[n1] = key;
        occupancy++;
        return n1;
    }
    if (v1 != TOMBSTONE && COMPARE(v1, key)) return n1;
    h = REHASH(h, multiplier);
    if ((v2 = table[n2 = (h>>shift_amount)]) == EMPTY)
    {   table[n2] = key;
        occupancy++;
        return n2;
    }
    if (v2 != TOMBSTONE && COMPARE(v2, key)) return n2;
    h *= multiplier;
    v3 = table[n3 = (h>>shift_amount)];
    if (v3 != EMPTY && v3 != TOMBSTONE && COMPARE(v3, key)) return n3;
// Here I have checked all three possible locations and the key is not
// already present.
    occupancy++;
// If in the investigation to date I have seen a TOMBSTONE I may re-use that
// entry.
    if (v1 == TOMBSTONE)
    {   table[n1] = key;
        return n1;
    }
    if (v2 == TOMBSTONE)
    {   table[n2] = key;
        return n1;
    }
// Now I have checked the first three locations. I hope that a significant
// proportion of cases will not get any further! But for when it does I
// will move on to a breadth-first search of ways to rearrange items currently
// in the table to make everything fit. At this stage since I KNOW that the
// item I am inserting is not in the table already I do not need to do any
// comparisons against key values - all I need to do is to watch out for
// EMPTY or TOMBSTONE values in the table.
    Q[2] = n1;
    Q[3] = (n1==n2) ? NOT_PRESENT : n2;
    Qn = 4;
    for (;;)
    {   ENTRY newkey;
        if (Qn > QSIZE-2) return NOT_PRESENT; // Nothing left in queue. Failed.
        n = Q[Qn/2];                // A currently occupied location.
// The queue may have some entries in it that are "not present" and those are to
// be ignored in the search.
        if (n == NOT_PRESENT)
        {   Q[Qn++] = n;
            Q[Qn++] = n;
            continue;
        }
        newkey = table[n];          // The key stored there.
        h = HASH(newkey, multiplier);
#ifdef TRACE
        printf("Consider moving %d [%"PRIx64"] to %d %d %d\n",
           n, (uint64_t)newkey,
           (int)(h>>shift_amount),
           (int)(REHASH(h, multiplier)>>shift_amount),
           (int)((multiplier*REHASH(h,multiplier))>>shift_amount));
#endif
        if ((v1 = table[n1 = (h>>shift_amount)]) == EMPTY ||
            v1 == TOMBSTONE)  // Success - have found a gap!
        {   table[n1] = newkey;
#ifdef TRACE
            printf("Put in %d\n", n1);
#endif
            break;
        }
        h = REHASH(h, multiplier);
        if ((v2 = table[n2 = (h>>shift_amount)]) == EMPTY ||
            v2 == TOMBSTONE)
        {   table[n2] = newkey;
#ifdef TRACE
            printf("Put in %d\n", n2);
#endif
            break;
        }
        h *= multiplier;
        if ((v3 = table[n3 = (h>>shift_amount)]) == EMPTY ||
            v3 == TOMBSTONE)
        {   table[n3] = newkey;
#ifdef TRACE
            printf("Put in %d\n", n3);
#endif
            break;
        }
// Now I have three probe locations n1, n2 and n3. One will be the same as
// n, and I want to discard that and then also discard any duplicates. This
// feels like a rather messy sequence of tests!
        if (n1 == n)
        {   n1 = n3;    // Now I have (n1,n2) to look at
            if (n1 == n) n1 == NOT_PRESENT;
            if (n2 == n || n2 == n1) n2 == NOT_PRESENT;
        }
        else
        {   if (n2 == n || n2 == n1) n2 = NOT_PRESENT;
            if (n3 == n || n3 == n1 || n3 == n2) n3 = NOT_PRESENT;
            if (n2 == NOT_PRESENT) n2 = n3;
        }
        Q[Qn++] = n1;
        Q[Qn++] = n2;
    }
#ifdef TRACE
    printf("Have found a gap and moved something to it (%"PRIx64")\n",
           (uint64_t)key);
    printf("before unwind Qn=%d\n", Qn);
    dumptable(tt, "Before", false);
    {   int j;
        for (j=0; j<Qn; j++) printf("%d: %d\n", j, Q[j]);
    }
#endif
// I have now just moved a key into a gap.
    Qn = Qn/2;
    while (Qn > 3)
    {  int j = Qn/2;   // parent
#ifdef TRACE
       printf("move %"PRIx64" from %d to %d\n", table[Q[j]], Q[j], Q[Qout]);
#endif
       table[Q[Qn]] = table[Q[j]];
       Qn = j;
    }
    table[Q[Qn]] = key;   // Note that this is the key being inserted.
#ifdef TRACE
    dumptable("After", true);
#endif
    return Q[Qn];
}

// table, separating figures as between cases that they key was already
// present and when it was new. The cost of an insert operation when the key
// is in fact already present should be the same as the cost of a lookup
// when they key is present, so reporting numbers about it is perhaps
// frivolous.

uint64_t already_n=0, already_h=0, already_c=0;
uint64_t inserted_n=0, inserted_h=0, inserted_c=0;

size_t instrumented_insert(ENTRY key)
{
    size_t r;
    uint64_t old_occupancy = occupancy;
    hashcount = comparecount = 0;
    r = insert(key);
    if (occupancy == old_occupancy)
    {   already_n++;
        already_h += hashcount;
        already_c += comparecount;
    }
    else
    {   inserted_n++;
        inserted_h += hashcount;
        inserted_c += comparecount;
    }
    return r;
}

#define MAXPENDING 200

static ENTRY pending_for_rehash[MAXPENDING+1];
static int npending = 0;

// When rehashing I will take items in the table one at a time in order
// and remove them and then re-insert them. On the re-insert I am going to
// insist that when the first k locations in the table have been rehashed
// that on any insertion I only settle a key into a cell that is either its
// first choice or is a one where its first choice has been within the
// initial k table entried and it is in its second choice, or its
// first two choices were in the first k entries, or it gets inserted in the
// table at a location later than k. @@@@@

bool rehash()
{
    size_t i;
    npending = 0;
    for (i=0; i<table_size; i++)
    {   ENTRY k = table[i];
// TOMBSTONE values present at the start relate to the old hashing regime
// and so are now irrelevant.
        if (k == TOMBSTONE)
        {   table[k] = EMPTY;
            continue;
        }
// EMPTY entries do not need anything done to them.
        else if (k == EMPTY) continue;
// The first MAXPENDING keys that I encouter are lifted out and stored
// for processing at the end. For tables with up to MAXPENDING items in
// that is really good - it makes most re-inserts be into a rather empty
// table and that sppedd things up.
        else if (npending < MAXPENDING)
        {   pending_for_rehash[npending++] = k;
            table[k] = EMPTY;
            occupancy--;
            continue;
        }
        table[i] = EMPTY;
        if (insert(k) == NOT_PRESENT)
        {   pending_for_rehash[npending++] = k;
            return false;
        }
    }
    while (npending != 0)
    {   ENTRY k = pending_for_rehash[--npending];
// In pathological cases this can fail to re-insert even the data that had been
// previously present, and in that case the left-over stuff will be left in the
// array pending_for_rehash.
        if (insert(k) == NOT_PRESENT)
        {   pending_for_rehash[npending++] = k;
            return false;
        }
    }
    return true;
}

/////////////////////////////////////////////////////////////////////

#ifdef DEBUG

static void simple_print(LispObject x)
{   LispObject nil = C_nil;
    if (x == nil)
    {   printf("nil");
        return;
    }
    if (is_cons(x))
    {   const char *sep = "(";
        while (consp(x))
        {   printf("%s", sep);
            sep = " ";
            simple_print(qcar(x));
            x = qcdr(x);
        }
        if (x != nil)
        {   printf(" . ");
            simple_print(x);
        }
        printf(")");
        return;
    }
    else if (is_fixnum(x))
    {   printf("%d", int_of_fixnum(x));
        return;
    }
    else if (is_symbol(x))
    {   int len;
        x = qpname(x);
        len = length_of_byteheader(vechdr(x)) - CELL;
        printf("%.*s", (int)len, &celt(x, 0));
    }
    else if (is_vector(x))
    {   size_t i;
        if (is_string(x))
        {   int len = length_of_byteheader(vechdr(x)) - CELL;
            printf("\"%.*s\"", (int)len, &celt(x, 0));
            return;
        }
        printf("[%" PRId64 ":", (int64_t)length_of_header(vechdr(x)) - CELL);
        for (i=0; i<(length_of_header(vechdr(x)) - CELL)/CELL; i++)
        {   printf(" ");
            simple_print(elt(x, i));
        }
        printf("]");
        return;
    }
    else
    {   printf("@%" PRIx64 "@", (int64_t)x);
        return;
    }
}

void simple_msg(const char *s, LispObject x)
{   return;   // Edit this when debugging!
    printf("%s", s);
    simple_print(x);
    printf("\n");
}

#else

void simple_msg(const char *s, LispObject x)
{   return;
}

#endif

// A version of Lmkhash with just 2 arguments so you to not supply the
// (unused and hence irrelevant) third argument.

LispObject Lmkhash2(LispObject nil, LispObject a, LispObject b)
{   return Lmkhash(nil, 3, a, b, nil);
}

LispObject Lmkhash(LispObject nil, int nargs, ...)
//
// (mkhash size flavour growth)
//
// size suggests how many items can be inserted before re-hashing
// occurs. flavour is 0, 1, 2, 3 or 4 corresponding to hash tables
// that use EQ, EQL, EQUAL, EQUALS or EQUALP.  growth is a floating point
// value suggesting how much to grow by when rehashing is needed. In
// this implementation the table size will be doubled when it needs
// to grow, and so the "growth" argument will be ignored!
//
// If flavour is not a number it might be a dotted pair (hashfn . eqfn)
// where hashfn is a user-provided function to compute hash values (which
// will actually be permitted to be anything at all, since I will then
// hash the output again as if hashing under EQL - but I expect that really
// I expect numeric hash values), and eqfn is a function used to compare
// items. [this facility may not be implemented at first]
//
{   va_list a;
    int32_t shift, size1, size2;
    LispObject v, v1, v2, size, flavour;
    argcheck(nargs, 3, "mkhash");
    va_start(a, nargs);
    size = va_arg(a, LispObject);
    flavour = va_arg(a, LispObject);
    va_end(a);
    simple_msg("mkhash: type=", flavour);
// I allow fixnums or bignums as size spacifiers.
    if (is_fixnum(size)) size1 = int_of_fixnum(size);
    else if (is_numbers(size) && is_bignum(size)) size1 = 1000000;
    else  return aerror1("mkhash", size);
// I treat clip the size range to [4 .. 1000000]. Table that end up larger
// can grow on need.
    if (size1 > 1000000) size = 1000000;
    else if (size1 < 4) size1 = 4;
    if (!is_fixnum(flavour) && !consp(flavour))
        return aerror1("mkhash", flavour);
// I will make the initial size a power of 2 such that wiith "size"
// entries present the table will be about between 30% and 60% full.
    size1 = 5*((size1+1)/3);
// The smallest hash table I will ever create will have 8 slots in the
// table. The space saving for anything smaller will be rather modest,
// especially given that there is a hash table header record. You will
// only get this tiny table if you indicate an target size of 4 or less.
    size2 = 8;
    shift = 64-3;
    while (size2 < size1)
    {   size2 *= 2;
        shift--;
    }
// Huge hash tables will be stored (internally) in chunks.
// get_hash_vector will allocate either a single vector of the
// indicated size or an index vector with a number of subsidiary data ones.
// The size is passed as a cell-count.
    v1 = get_hash_vector(size2);
    errexit();
    push(v1);
    v2 = get_hash_vector(size2);
    errexitn(1);
    push(v2);
    v = getvector_init(7*CELL, nil);
    pop2(v1, v2);
    errexit();
#define HASH_FLAVOUR    0
#define HASH_COUNT      1
#define HASH_SHIFT      2
#define HASH_KEYS       3
#define HASH_VALUES     4
#define HASH_MULTIPLIER 5
#define HASH_DEFAULT_MULTIPLIER UINT64_C(0x9e3779b99e3779bd)
    elt(v, 0) = flavour;             // comparison method for hash operations.
    elt(v, 1) = fixnum_of_int(0);    // current number of items stored.
    elt(v, 2) = fixnum_of_int(shift);// 64-log2(table size)
    elt(v, 3) = v1;                  // key table.
    elt(v, 4) = v2;                  // value table.
    elt(v, 5) = nil;                 // current multiplier
// If the "multiplier" is stored as NIL then a default value will be used.
// Otherwise there will be a 64-bit integer stored in this location, and
// extracting it for use will be an unwelcome extra cost.
    vechdr(v) ^= (TYPE_SIMPLE_VEC ^ TYPE_HASH);
    return onevalue(v);
}

typedef uint64_t hash_function_t(LispObject key);
typedef bool hash_compare_t(LispObject key, LispObject hashentry);

static uint64_t hash_multiplier;
static uint64_t hash_function_t *hash_function;
static bool hash_compare_t  *hash_compare; 

static uint64_t hash_eq(LispObject key);
static uint64_t hash_eql(LispObject key);
static uint64_t hash_cl_equal(LispObject key);
static uint64_t hash_equal(LispObject key);
static uint64_t hash_equalp(LispObject key);
static uint64_t hash_symtab(LispObject key);

static bool hash_compare_eq(LispObject key, LispObject hashentry);
static bool hash_compare_eql(LispObject key, LispObject hashentry);
static bool hash_compare_cl_equal(LispObject key, LispObject hashentry);
static bool hash_compare_equal(LispObject key, LispObject hashentry);
static bool hash_compare_equalp(LispObject key, LispObject hashentry);
static bool hash_compare_symtab(LispObject key, LispObject hashentry);

static void set_hash_operations(LispObject flavour)
{
    switch (flavour)
    {
    default:
    case fixnum_of_int(0):
        hash_function = hash_eq;
        hash_compare = hash_compare_eq;
        break;
    case fixnum_of_int(1):
        hash_function = hash_eql;
        hash_compare = hash_compare_eql;
        break;
    case fixnum_of_int(2):
        hash_function = hash_cl_equal;
        hash_compare = hash_compare_cl_equal;
        break;
    case fixnum_of_int(3):
        hash_function = hash_equal;
        hash_compare = hash_compare_equal;
        break;
    case fixnum_of_int(4):
        hash_function = hash_equalp;
        hash_compare = hash_compare_equalp;
        break;
    case fixnum_of_int(5):
        hash_function = hash_symtab;
        hash_compare = hash_compare_symtab;
        break;
    }
}

static uint64_t hash_eq(LispObject key)
{
    return hash_multiplier*(uint64_t)key;
}

static uint64_t hash_eql(LispObject key)
//
// Must return same code for two eql numbers.  This is remarkably
// painful! I would like the value to be insensitive to fine details
// of the machine I am running on.
//
{   uint64_t r;
    if (is_bfloat(key))
    {   int h = type_of_header(flthdr(key));
        switch (h)
        {   case TYPE_SINGLE_FLOAT:
// There is a nasty here. I want +0.0f and -0.0f to hash to the same
// value becase the two values will compare as equal.
                if (single_float_val(key) == 0.0) return 1 + hash_multiplier;
                else return 2 + hash_multiplier*intfloat32_t_val(key);
                break;
            default:
            case TYPE_DOUBLE_FLOAT:
                if (double_float_val(key) == 0.0) return 3 + hash_multiplier;
                else return 4 + hash_multiplier*intfloat64_t_val(key);
            case TYPE_LONG_FLOAT:
// Here I will leave +0.0 and -0.0 hashing differently! That is just
// laziness and needs fixing.
                r = 5 + hash_multiplier*intfloat64_t_val0(key);
                return 6 + hash_multiplier*(r + intfloat64_t_val1(key));
        }
    }
    else if (is_numbers(key))
    {   Header h = numhdr(key);
        size_t n;
        r = (uint64_t)h;
        switch (type_of_header(h))
        {   case TYPE_BIGNUM:
                n = length_of_header(h);
                n = (n-CELL-4)/4;  // last index into the data
                for (;;)
                {   r = 7 + hash_multiplier*(bignum_digits(key)[n] + r);
                    if (n == 0) break;
                    n--;
                }
                return r;
            case TYPE_RATNUM:
            case TYPE_COMPLEX_NUM:
                r = hash_eql(numerator(key)),
                return 8 + hash_multiplier*r + hash_eql(denominator(key));
            default:
                return 9 + hash_multiplier;  // unknown type of number?
        }
    }
// For non-numbers I hash as for EQ.
    else return hash_multiplier*(uint64_t)key;
}

static uint32_t hash_cl_equal(LispObject key, bool descend)
//
// This function is the one used hashing things under EQUAL, and note
// that Common Lisp expects that EQUAL will NOT descend vectors or
// structures, so this code had better not. But it is supposed to
// descend path-names and it must treat non-simple strings and bitvectors
// as if they were like ordinary strings and bitvectors.  If descend is
// false this will not descend through lists.
//
{   uint32_t r = 1, c;
    LispObject nil = C_nil, w;
    int32_t len;
    int32_t bitoff;
    unsigned char *data;
    Header ha;
    simple_msg("hash_cl_equal: ", key);
#ifdef CHECK_STACK
    if (check_stack("@" __FILE__,__LINE__))
    {   err_printf("Stack too deep in hash calculation\n");
        my_exit(EXIT_FAILURE);
    }
#endif
    for (;;)
    {   switch (TAG_BITS & (int32_t)key)
        {   case TAG_CONS:
                if (key == C_nil || !descend) return r;
                r = update_hash(r, hash_cl_equal(qcar(key), true));
                nil = C_nil;
                if (exception_pending()) return 0;
                key = qcdr(key);
                continue;
            case TAG_SYMBOL:
                if (key == C_nil) return r;
#ifdef OLD_HASH
                key = get_pname(key);
                nil = C_nil;
                if (exception_pending()) return 0;
                r = update_hash(r, 1); // makes name & string hash differently
                // Drop through, because the pname is a string
#else
                return update_hash(1, (uint32_t)key);
#endif
            case TAG_VECTOR:
            {   ha = vechdr(key);
                len = type_of_header(ha);
//
// I need to treat strings and bitvectors here specially since in those
// cases (and for pathnames) I must inspect the vector contents, while
// in other cases I must not.
//
                if (is_string_header(ha))
                {   len = length_of_byteheader(ha) - CELL;
                    data = &ucelt(key, 0);
                    goto hash_as_string;
                }
//
// I might need to re-check that Common Lisp EQUAL and hence this
// version of hashing inspects the bits in a bit-vector.
//
                else if (is_bitvec_header(ha))
                {   len = length_of_bitheader(ha) - 8*CELL;
                    bitoff = 0;
                    data = &ucelt(key, 0);
                    goto hash_as_bitvector;
                }
                else if (len == TYPE_ARRAY)
                {
//
// Arrays are fun here! I need to pick up the special case of character
// vectors and bit vectors and make them compute the same hash value as the
// simple case of the same thing.
//
                    w = elt(key, 0);
                    if (w == string_char_sym) ha = 0;
#ifdef COMMON
                    else if (w == bit_symbol) ha = 1;
#endif
                    else return update_hash(r, (uint32_t)key);
//
// The stuff here is just for "non-simple" strings and bit-vectors. This
// code will not have been tested much - if at all.
//
                    w = elt(key, 1);                 // List of dimensions
                    if (!consp(w) || consp(qcdr(w))) // 1 dim or more?
                        return update_hash(r, (uint32_t)key);
                    len = int_of_fixnum(qcar(w));    // This is the length
                    w = elt(key, 5);                 // Fill pointer
                    if (is_fixnum(w)) len = int_of_fixnum(w);
                    w = elt(key, 3);       // displace adjustment
                    key = elt(key, 2);     // vector holding the actual data
                    data = &ucelt(key, 0);
                    if (ha)
                    {   bitoff = int_of_fixnum(w);
                        goto hash_as_bitvector;
                    }
                    data += int_of_fixnum(w);
                    goto hash_as_string;
                }
#ifdef COMMON
//
// Common Lisp demands that pathname structures be compared and hashed in
// a way that is expected to look at their contents. Here I just descend
// all components of the pathname.
//
                else if (len == TYPE_STRUCTURE &&
                         elt(key, 0) == pathname_symbol &&
                         descend)
                {   len = doubleword_align_up(length_of_header(ha));
                    while ((len -= CELL) != 0)
                    {   LispObject ea =
                            *((LispObject *)((char *)key + len - TAG_VECTOR));
                        r = update_hash(r, hash_cl_equal(ea, true));
                        nil = C_nil;
                        if (exception_pending()) return 0;
                    }
                    return r;
                }
#endif
                else return update_hash(r, (uint32_t)key);
            }
            case TAG_HDR_IMMED:
                if (is_bps(key))
                {   data = (unsigned char *)data_of_bps(key);
                    // I treat bytecode things as strings here
                    len = length_of_byteheader(*(Header *)(data - CELL)) - CELL;
                    goto hash_as_string;
                }
                else return update_hash(r, (uint32_t)key);
            case TAG_BOXFLOAT:
//
// The "case TAG_BOXFLOAT:" above is not logically necessary, but at least
// one release of a Silicon Graphics C compiler seems to miscompile this
// function without it (when optimised). It is as if it seems the masking
// with TAG_BITS in the switch() and therefore knows that there is just a
// limited range of possibilities, so it omits the normal range-check one
// would use before a table-branch. But it then leaves the branch table
// that it generates NOT padded with the final case (TAG_BOXFLOAT) that is
// needed, so when a floating point values does arise the code goes into the
// yonder and usually crashes.
//
            default:
                return update_hash(r, hash_eql(key));
        }

    hash_as_string:
//
// Here len is the length of the string data structure, excluding header.
// I work character by character here both because the final word of a
// string will usually not be full and to avoid sensitivity to byte order.
// but that may be adding to by costs in an unhelpful way, so maybe
// I should work harder to do this word at a time?
//
        while (len > 0)
        {   c = data[--len];
            r = update_hash(r, c);
        }
        return r;
    hash_as_bitvector:
//
// here len is the number of bits to scan, and bitoff is a BIT offset.
// This really is clumsily inefficient but it is never used in Standard
// Lisp mode anyway, so I can test and enhance it if anybody not only
// uses Common Lisp but then relies on hashing bit-vectors.
//
        len += bitoff;
        while (len > bitoff)
        {   len--;
            c = data[len >> 5] & (1u << (len & 31));
            if (c != 0) c = 1;
            r = update_hash(r, c);
        }
        return r;
    }
}

uint32_t hash_equal(LispObject key)
//
// This function is the one used hashing things under the Standard Lisp
// version of EQUAL, which descends vectors but is still sensitive to
// case and which views different types of numbers as different. I will
// make it view displaced or fill-pointered vectors as equivalent to the
// corresponding simple vectors: I am pretty well obliged to do that for
// strings and bitvectors so it seems polite to do the same for general
// vectors (which are the only other ones I support!).
//
{   uint32_t r = 1, c;
    LispObject nil = C_nil, w;
    int32_t type;
    size_t len, offset = 0;
    unsigned char *data;
    Header ha;
    simple_msg("hash_equal: ", key);
#ifdef CHECK_STACK
    if (check_stack("@" __FILE__,__LINE__))
    {   err_printf("Stack too deep in hash calculation\n");
        my_exit(EXIT_FAILURE);
    }
#endif
    for (;;)
    {   switch (TAG_BITS & (int32_t)key)
        {   case TAG_CONS:
                if (key == C_nil) return r;
                r = update_hash(r, hash_equal(qcar(key)));
                nil = C_nil;
                if (exception_pending()) return 0;
                key = qcdr(key);
                continue;
            case TAG_SYMBOL:
                if (key == C_nil) return r;
#ifdef OLD_HASH
                key = get_pname(key);
                nil = C_nil;
                if (exception_pending()) return 0;
                r = update_hash(r, 1);
                // Drop through, because the pname is a string
#else
                return update_hash(1, (uint32_t)key);
#endif
            case TAG_VECTOR:
            {   ha = vechdr(key);
                type = type_of_header(ha);
                len = length_of_header(ha) - CELL; // counts in bytes here
//
// First I will separate off the two important cases of strings
// and bitvectors.
//
                if (is_string_header(ha))
                {   data = &ucelt(key, 0);
                    len = length_of_byteheader(ha) - CELL;
                    // and len is the length of the data in use
                    goto hash_as_string;
                }
                else if (is_bitvec_header(ha))
                {   len = (len - 1)*8 + ((ha & 0x380) >> 7) + 1;
                    offset = 0;
                    data = &ucelt(key, 0);
                    goto hash_as_bitvector;
                }
#ifdef COMMON
//
// Common Lisp demands that pathname structures be compared and hashed in
// a way that is expected to look at their contents. Here I just descend
// all components of the pathname. All other structures are hashed on
// the basis of EQ.
//
                if (type == TYPE_STRUCTURE &&
                    elt(key, 0) != pathname_symbol)
                    return update_hash(r, (uint32_t)key);
#endif
//
// Now I will look for an array that is in fact just a vector.
//
                if (type == TYPE_ARRAY)
                {   w = elt(key, 0);
                    if (w == string_char_sym) ha = 0;
#ifdef COMMON
                    else if (w == bit_symbol) ha = 1;
#endif
                    else ha = 2;
//
// All this mess really needs careful review and testing!
//
                    w = elt(key, 1);        // List of dimensions
                    if (consp(w) && !consp(qcdr(w)))   // 1 dim or not?
                    {   len = int_of_fixnum(qcar(w));  // This is the length
                        w = elt(key, 5);               // Fill pointer
                        if (is_fixnum(w)) len = int_of_fixnum(w);
                        w = elt(key, 3);       // displace adjustment
                        key = elt(key, 2);     // vector holding the data
                        switch (ha)
                        {   case 0: data = &ucelt(key, int_of_fixnum(w));
                                goto hash_as_string;
                            case 1:
                                data = &ucelt(key, 0);
                                offset = int_of_fixnum(w);
                                goto hash_as_bitvector;
                            default:
// /* The code here can CRASH if asked to hash a general array that
// has been represented in chunks because it has over 32K elements.
//
                                ha = vechdr(key);
                                offset = int_of_fixnum(w);
                                break;
                        }
                    }
                }
//
// Now in the case that I had a non-simple vector I have reset key to point
// to the vector containing the true data, ha to the header of same and
// len is the length that I want to use. offset is an offset into the vector.
// For simple vectors all the same variables are set up (and offset will be
// zero). All cases of strings and bitvectors should have been dealt with
// so the only vectors containing binary are things like "file" structures,
// and I do not expect them to hash portably: so I hash them in the basis of
// EQ.  Hmm did I implement vectors of unboxed 8, 16 and 32-bit ints and of
// floats? If so they might need to be treated above in the sort of way that
// strings are.
//
                if (vector_holds_binary(ha))
                    return update_hash(r, (uint32_t)key);
                offset = CELL*offset;
//
// A "mixed" vector is something I use within CSL for various system
// purposes, and it has three list items at the front and then a load of
// binary data. I hash the binary data as raw 32-bit data.
//
                if (is_mixed_header(ha))
                {   while (len > 3*CELL)
                    {   uint32_t ea;
                        len -= 4;
                        ea = *(uint32_t *)((char *)key + CELL +
                                           offset + len - TAG_VECTOR);
//@@printf("Hashing binary item at offset %d in vector (o=%d)\n", offset+len, offset);
                        r = update_hash(r, ea);
                    }
                }
                while ((len -= CELL) >= 0)
                {   LispObject ea =
                        *((LispObject *)((char *)key + CELL +
                                         offset + len - TAG_VECTOR));
//@@printf("Hashing item at offset %d in vector (o=%d)\n", offset+len, offset);
                    r = update_hash(r, hash_equal(ea));
                    nil = C_nil;
                    if (exception_pending()) return 0;
                }
//@@printf("Hash = %.8x\n", r);
                return r;
            }
            case TAG_HDR_IMMED:
                if (is_bps(key))
                {   data = (unsigned char *)data_of_bps(key);
                    // I treat bytecode things as strings here
                    len = length_of_byteheader(*(Header *)(data - CELL)) - CELL;
                    goto hash_as_string;
                }
                else return update_hash(r, (uint32_t)key);
            case TAG_BOXFLOAT:
            default:// The default case here mainly covers numbers
                return update_hash(r, hash_eql(key));
        }

    hash_as_string:
// Here len is the length of the string data structure, excluding header
        {   int32_t w = 0;
            while (len > 0)
            {   c = data[--len];
                w = (w << 8) | c;
                if (w & 0xff000000)
                {   r = update_hash(r, w);
                    w = 0;
                }
            }
            if (w != 0) r = update_hash(r, w);
        }
        return r;
    hash_as_bitvector:
// here len is the number of bits to scan, and offset is a BIT offset
        len += offset;
        while (len > offset)
        {   len--;
            c = data[len >> 3] & (1 << (len & 7));
            if (c != 0) c = 1;
            r = update_hash(r, c);
        }
        return r;
    }
}

static uint32_t hash_equalp(LispObject key)
//
// This function is the one used hashing things under the Common Lisp
// version of EQUALP, which descends vectors but not structs (except
// pathnames), which is case-insensitive and which views numbers of
// different types but similar values (eg 1 and 1.0) as EQUALP).
//
{   uint32_t r = 1, c;
    LispObject nil=C_nil, w;
    int32_t type;
    size_t len, offset = 0;
    unsigned char *data;
    Header ha;
    simple_msg("hash_equalp: ", key);
#ifdef CHECK_STACK
    if (check_stack("@" __FILE__,__LINE__))
    {   err_printf("Stack too deep in hash calculation\n");
        my_exit(EXIT_FAILURE);
    }
#endif
    for (;;)
    {   switch (TAG_BITS & (int32_t)key)
        {   case TAG_CONS:
                if (key == C_nil) return r;
                r = update_hash(r, hash_equalp(qcar(key)));
                nil = C_nil;
                if (exception_pending()) return 0;
                key = qcdr(key);
                continue;
            case TAG_SYMBOL:
                if (key == C_nil) return r;
#ifdef OLD_HASH
                key = get_pname(key);
                nil = C_nil;
                if (exception_pending()) return 0;
                r = update_hash(r, 1);
                // Drop through, because the pname is a string
#else
                return update_hash(1, (uint32_t)key);
#endif
            case TAG_VECTOR:
            {   ha = vechdr(key);
                type = type_of_header(ha);
                len = length_of_header(ha) - CELL;  // counts in bytes here
//
// First I will separate off the two important cases of strings and bitvectors
//
                if (is_string_header(ha))
                {   data = &ucelt(key, 0);
                    len = length_of_byteheader(ha) - CELL;
                    goto hash_as_string;
                }
                else if (is_bitvec_header(ha))
                {   len = (len - 1)*8 + ((ha & 0x380) >> 7) + 1;
                    offset = 0;
                    data = &ucelt(key, 0);
                    goto hash_as_bitvector;
                }
#ifdef COMMON
//
// Common Lisp demands that pathname structures be compared and hashed in
// a way that is expected to look at their contents. Here I just descend
// all components of the pathname. Other structs are not descended.
//
                if (len == TYPE_STRUCTURE &&
                    elt(key, 0) != pathname_symbol)
                    return update_hash(r, (uint32_t)key);
#endif
//
// Now I will look for an array that is in fact just a vector.
//
                if (type == TYPE_ARRAY)
                {   w = elt(key, 0);
                    if (w == string_char_sym) ha = 0;
#ifdef COMMON
                    else if (w == bit_symbol) ha = 1;
#endif
                    else ha = 2;
                    w = elt(key, 1);        // List of dimensions
                    if (consp(w) && !consp(qcdr(w)))   // 1 dim or not?
                    {   len = int_of_fixnum(qcar(w));  // This is the length
                        w = elt(key, 5);               // Fill pointer
                        if (is_fixnum(w)) len = int_of_fixnum(w);
                        w = elt(key, 3);       // displace adjustment
                        key = elt(key, 2);     // vector holding the data
                        switch (ha)
                        {   case 0: data = &ucelt(key, int_of_fixnum(w));
                                goto hash_nearly_as_string;
                            case 1:
                                data = &ucelt(key, 0);
                                offset = int_of_fixnum(w);
                                goto hash_as_bitvector;
                            default:
// /* Trouble if a general array with over 32K elements gets to here
                                ha = vechdr(key);
                                offset = int_of_fixnum(w);
                                break;
                        }
                    }
                }
//
// Now in the case that I had a non-simple vector I have reset key to point
// to the vector containing the true data, ha to the header of same and
// len is the length that I want to use. offset is an offset into the vector.
// For simple vectors all the same variables are set up (and offset will be
// zero). All cases of strings and bitvectors should have been dealt with
// so the only vectors containing binary are things like "file" structures,
// and I do not expect them to hash portably.
//
                if (vector_holds_binary(ha))
                    return update_hash(r, (uint32_t)key);
                offset = 8*offset;
                if (is_mixed_header(ha))
                {   while (len > 4*CELL)
                    {   uint32_t ea;
                        len -= 4;
                        ea = *(uint32_t *)((char *)key +
                                           offset + len - TAG_VECTOR);
                        r = update_hash(r, ea);
                    }
                }
                while ((len -= CELL) != 0)
                {   LispObject ea =
                        *((LispObject *)((char *)key +
                                         offset + len - TAG_VECTOR));
                    r = update_hash(r, hash_equalp(ea));
                    nil = C_nil;
                    if (exception_pending()) return 0;
                }
                return r;
            }
            case TAG_HDR_IMMED:
                if (is_bps(key))
                {   data = (unsigned char *)data_of_bps(key);
                    // I treat bytecode things as strings here
                    // Oops - what about the fact that strings get case-folded?
                    len = length_of_header(*(Header *)(data - CELL)) - CELL;
                    goto hash_nearly_as_string;
                }
                else if (is_char(key))
                    key = pack_char(0, tolower(code_of_char(key)));
                return update_hash(r, (uint32_t)key);
            case TAG_BOXFLOAT:
            default:// The default case here mainly covers numbers
                if (is_float(key))
                {   key = rational(key);  // painful expense
                    nil = C_nil;
                    if (exception_pending()) return 0;
                }
                if (is_numbers(key))
                {   switch (type_of_header(numhdr(key)))
                    {   case TYPE_RATNUM:
                        case TYPE_COMPLEX_NUM:
                            return update_hash(r,
                                               update_hash(hash_equalp(numerator(key)),
                                                           hash_equalp(denominator(key))));
                        default:
                            break;
                    }
                }
                return update_hash(r, hash_eql(key));
        }
//
// Note that I scan the elements of a string or bitvector in the same order
// that I would process a general vector of the same length, and I adjust the
// vector contents to its generic representation before updating the hash
// value. For strings I fold to lower case.
//
    hash_as_string:
// Here len is the length of the string data structure, excluding header
        {   int32_t w = 0;
            while (len > 0)
            {   c = data[--len];
                c = tolower(c);
                w = (w << 8) | c;
                if (w & 0xff000000)
                {   r = update_hash(r, w);
                    w = 0;
                }
            }
            if (w != 0) r = update_hash(r, w);
        }
        return r;
    hash_nearly_as_string:
// Here len is the length of the string data structure, excluding header
        {   int32_t w = 0;
            while (len > 0)
            {   c = data[--len];
                w = (w << 8) | c;
                if (w & 0xff000000)
                {   r = update_hash(r, w);
                    w = 0;
                }
            }
            if (w != 0) r = update_hash(r, w);
        }
        return r;
    hash_as_bitvector:
// here len is the number of bits to scan, and offset is a BIT offset
        len += offset;
        while (len > offset)
        {   len--;
            c = data[len >> 3] & (1 << (len & 7));
            if (c != 0) c = 1;
            r = update_hash(r, update_hash(1, fixnum_of_int(c)));
        }
        return r;
    }
}

// I make hash tables out of chunks each of which are vectors with
// (up to) 128K elements. This means that on a 64-bit machine each
// chunk occupies a megabyte. I can have two levels of structure, and
// by the time the index level is that size I will be have a table
// with 16G slots in it and occupying 256 Gbytes of memory. At present
// (2016) I view the limits there are such that they will not embarass
// me for some while.

#define HASH_CHUNK_WORDS  ((size_t)0x20000)
#define HASH_CHUNK_SIZE   (HASH_CHUNK_WORDS*CELL)

// For this function I will expect n to be a power of 2.

static LispObject get_hash_vector(size_t n)
{   LispObject v, nil = C_nil;
//
// A major ugliness here is that I need to support hash tables that are
// larger than the largest simple vector I can use (as limited by
// CSL_PAGE_SIZE). To achieve this I will handle such huge tables using
// a vector of vectors, with the higher level vector tagged as a INDEXVEC,
// and the lower level vectors each reasonably sized. Note that I could
// use the same sort of INDEXVEC hack to support all sorts of large
// vectors...
//
    if (n > HASH_CHUNK_WORDS)
    {   size_t chunks = n/HASH_CHUNK_WORDS;
        size_t i;
        v = getvector_init(CELL*(chunks+1), nil);
        errexit();
// The next line tags the top level vector as a struct
        vechdr(v) ^= (TYPE_SIMPLE_VEC ^ TYPE_INDEXVEC);
        for (i=0; i<chunks; i++)
        {   LispObject v1;
            push(v);
            v1 = getvector_init(HASH_CHUNK_SIZE+CELL, SPID_HASH0);
            pop(v);
            errexit();
            elt(v, i) = v1;
        }
    }
    else v = getvector_init(n, SPID_HASH0);
    return v;
}

// Number of slots in the table.

#define words_in_hash_table(v)                                       \
    (type_of_header(vechdr(v)) == TYPE_INDEXVEC ?                    \
       HASH_CHUNK_WORDS*((length_of_header(vechdr(v))-CELL)/CELL) :  \
       (length_of_header(vechdr(v)) - CELL)/CELL)

// an lvalue for the nth item in the table.

#define ht_elt(v, n)                                                 \
    (*(type_of_header(vechdr(v)) == TYPE_INDEXVEC ?                  \
      &elt(elt((v), (n)/HASH_CHUNK_WORDS), (n)%HASH_CHUNK_WORDS) :   \
      &elt((v), (n))))

LispObject Lget_hash(LispObject nil, int nargs, ...)
{   int flavour = -1;
    va_list a;
    LispObject v, key, tab, dflt;
    argcheck(nargs, 3, "gethash");
    va_start(a, nargs);
    key = va_arg(a, LispObject);
    tab = va_arg(a, LispObject);
    dflt = va_arg(a, LispObject);
    va_end(a);
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
    {   if (type_of_header(vechdr(tab)) == TYPE_HASHX) // must rehashing first
        {   push2(key, dflt);
            tab = rehash(tab);
            pop2(dflt, key);
            errexit();
        }
        else return aerror1("gethash", tab);
    }
    v = elt(tab, HASH_FLAVOUR);
    simple_msg("get_hash: ", key);
// /* The code here needs to allow for user-specified hash functions
    if (is_fixnum(v)) flavour = int_of_fixnum(v);

    switch (flavour)
    {   default:
            return aerror1("gethash", cons(v, tab));
        case 0:
            hashcode = update_hash(1, (uint32_t)key);
            break;
        case 1:
            hashcode = hash_eql(key);  // can never fail
            break;
        case 2:
            push3(key, tab, dflt);
            hashcode = hash_cl_equal(key, true);
            pop3(dflt, tab, key);
            errexit();
            break;
        case 3:
            push3(key, tab, dflt);
            hashcode = hash_equal(key);
            pop3(dflt, tab, key);
            errexit();
            break;
        case 4:
            push3(key, tab, dflt);
            hashcode = hash_equalp(key);
            pop3(dflt, tab, key);
            errexit();
            break;
    }
    v = elt(tab, 4);
    hashsize = size = words_in_hash_table(v);
    p = (hashcode % (uint32_t)(size >> 1))*2;
//
// I want to take my single 32-bit hash value and produce a secondary
// hash value that is a stride for the search. I can just take the
// remainder by 1 less than the hash table size (and add 1 so I get
// a non-zero stride).
//
    hashstride = (1 + (hashcode % (uint32_t)((size >> 1)-1)))*2;
    hashgap = -1;
//
// I now know how to do better than this!
//
    for (nprobes=0; nprobes<size; nprobes++)
    {   LispObject q = ht_elt(v, p+1);
        bool cf;
//@@    printf("probe %d at %d\n", nprobes, p);
        if (q == SPID_HASH0)
        {   mv_2 = nil;
            work_0 = v;
            hashoffset = p;
#ifdef HASH_STATISTICS
            Nhget++;              // item not present
#endif
            return nvalues(dflt, 2);
        }
        if (q == SPID_HASH1)
        {   hashgap = p;
            cf = false;  // vacated slot
        }
// /* again user-specified hash functions need insertion here
        else switch (flavour)
        {       default: // case 0:
                    cf = (q == key);
                    break;
                case 1: cf = eql(q, key);
                    break;
                case 2: push4(key, tab, dflt, v);
                    if (q == key) cf = true;
                    else cf = cl_equal(q, key);
                    pop4(v, dflt, tab, key);
                    errexit();
                    break;
                case 3: push4(key, tab, dflt, v);
                    if (q == key) cf = true;
                    else cf = equal(q, key);
                    pop4(v, dflt, tab, key);
                    errexit();
                    break;
                case 4: push4(key, tab, dflt, v);
                    if (q == key) cf = true;
                    else cf = equalp(q, key);
                    pop4(v, dflt, tab, key);
                    errexit();
                    break;
            }
#ifdef HASH_STATISTICS
        Nhgetp++;
#endif
        if (cf)
        {   mv_2 = lisp_true;
            work_0 = v;
            hashoffset = p;
#ifdef HASH_STATISTICS
            Nhget++;              // item found
#endif
            return nvalues(ht_elt(v, p+2), 2);
        }
        p = p + hashstride;
        if (p >= size) p = p - size;
    }
    return aerror("too many probes in hash look-up");
}

static void reinsert_hash(LispObject v, int32_t size, int32_t flavour,
                          LispObject key, LispObject val)
{   int32_t p;
    uint32_t hcode, hstride;
    LispObject nil = C_nil;
//@@printf("hash_reinsert\n");
    switch (flavour)
{       default: // case 0:
            hcode = update_hash(1, (uint32_t)key);
            break;
        case 1:
            hcode = hash_eql(key);  // can never fail
            break;
        case 2:
            push3(key, v, val);
            hcode = hash_cl_equal(key, true);
            pop3(val, v, key);
            errexitv();
            break;
        case 3:
            push3(key, v, val);
            hcode = hash_equal(key);
            pop3(val, v, key);
            errexitv();
            break;
        case 4:
            push3(key, v, val);
            hcode = hash_equalp(key);
            pop3(val, v, key);
            errexitv();
            break;
    }
    p = (hcode % (uint32_t)(size >> 1))*2;
    hstride = (1 + (hcode % (uint32_t)((size >> 1)-1)))*2;
//
// When I re-insert the item into the table life is especially easy -
// I know it is not there already and I know I will be able to find a
// gap to put it in!  So I just have to look for a gap - no comparisons
// are needed.
//
    type_of_header(vechdr(v)) == TYPE_INDEXVEC = type_of_header(vechdr(v)) == TYPE_INDEXVEC;
    for (;;)
    {   LispObject q = ht_elt(v, p+1);
        if (q == SPID_HASH0 || q == SPID_HASH1)
        {   ht_elt(v, p+1) = key;
            ht_elt(v, p+2) = val;
            return;
        }
        p = p + hstride;
        if (p >= size) p = p - size;
    }
}

#define REHASH_CYCLES    2
#define REHASH_AT_ONE_GO 64

void rehash_this_table(LispObject v)
//
// Hash tables where the hash function depends on absolute memory addresses
// will sometimes need rehashing - I do this by removing items from the
// table one at a time and re-inserting them. This does not guarantee that
// the table is left in a perfect state, but for modest loading will be
// adequate.  I reason that if I extract 64 (say) items at a time and
// then re-insert them then (especially for smallish tables) I have a
// better chance of things ending up in the ideal place. The problem is that
// items that have not yet been moved may be sitting in places where a
// re-hashed item ought to go. The effect will be that the newly re-inserted
// item sees a clash and moves to a second-choice position. When the other
// item is (later on) processed it will then vacate the place I would have
// liked to use, leaving a "tombstone" marker behind.  If at the end of all
// re-hashing there are too many tombstones left around lookup performance
// in the table will degrade. I attempt to counter this effect by performing
// the whole re-hashing procedure several times. But I have neither analysed
// nore measured what happens! I will do so if practical applications show
// up serious trouble here.
//
{   int32_t size, i, j, flavour, many;
    LispObject pendkey[REHASH_AT_ONE_GO], pendval[REHASH_AT_ONE_GO];
    flavour = int_of_fixnum(elt(v, 0)); // Done this way always

    size = words_in_hash_table(v);
//
// The cycle count here is something I may want to experiment with.
//
    for (i=0; i<REHASH_CYCLES; i++)
    {
//
// Change all slots in the table that are empty just because something has
// been deleted to indicate that they are truly not in use. This makes some
// items inaccessible by normal hash searches (because a void will be placed
// earlier than them on a search trajectory) but this does not matter because
// everything is about to be taken out of the table and reinserted properly.
//

        for (j=0; j<size; j+=2)
            if (ht_elt(v, j+1) == SPID_HASH1) ht_elt(v, j+1) = SPID_HASH0;
        many = 0;
        for (j=0; j<size; j+=2)
        {   LispObject key = ht_elt(v, j+1), val = ht_elt(v, j+2);
            if (key == SPID_HASH0 || key == SPID_HASH1) continue;
            pendkey[many] = key;      pendval[many++] = val;
            ht_elt(v, j+1) = SPID_HASH1; ht_elt(v, j+2) = SPID_HASH0;
            if (many >= REHASH_AT_ONE_GO)
            {   while (many > 0)
                {   many--;
                    reinsert_hash(v, size, flavour,
                                  pendkey[many], pendval[many]);
                }
            }
        }
        while (--many >= 0)
            reinsert_hash(v, size, flavour, pendkey[many], pendval[many]);
    }
}

LispObject Lmaphash(LispObject nil, LispObject fn, LispObject tab)
//
// There is a big worry here if the table is re-hashed because of
// a garbage collection while I am in the middle of things. To
// avoid utter shambles I will make a copy of the vector early
// on and work from that.
//
{   int32_t size, i;
    LispObject v, v1;
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("maphash", tab);
    v = elt(tab, 4);
    size = words_in_hash_table(v)*CELL+2*CELL;
    push2(fn, tab);
    v1 = get_hash_vector(size);
    pop2(tab, fn);
    v = elt(tab, 4);
    size = (size - CELL)/CELL;
    for (i=0; i<size; i++) ht_elt(v1, i) = ht_elt(v, i);
    for (i=1; i<size; i+=2)
    {   LispObject key = ht_elt(v1, i), val = ht_elt(v1, i+1);
        if (key == SPID_HASH0 || key == SPID_HASH1) continue;
        push2(v1, fn);
        Lapply2(nil, 3, fn, key, val);
        pop2(fn, v1);
        errexit();
    }
    return onevalue(nil);
}

LispObject Lhashcontents(LispObject nil, LispObject tab)
//
// There is a big worry here if the table is re-hashed because of
// a garbage collection while I am in the middle of things. To
// avoid utter shambles I will restart if a GC happens while I
// am unfolding the hash table. And fail if that happens twice
// in a row.
//
{   int32_t size, i, ogcnum;
    int n_gc = 0;
    LispObject v, r;
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("hashcontents", tab);
    v = elt(tab, 4);
    size = words_in_hash_table(v)*CELL+2*CELL;
    size = (size - CELL)/CELL;
restart:
    r = nil;
    if (++n_gc > 2) return aerror("hashcontents");
    ogcnum = gc_number;
    for (i=1; i<size; i+=2)
    {   LispObject k1 = ht_elt(v, i), v1 = ht_elt(v, i+1);
        if (k1 == SPID_HASH0 || k1 == SPID_HASH1) continue;
        push(v);
        r = acons(k1, v1, r);
        pop(v);
        errexit();
        if (gc_number != ogcnum) goto restart;
    }
    return onevalue(r);
}

LispObject Lget_hash_1(LispObject nil, LispObject key)
{
#ifdef COMMON
    return Lget_hash(nil, 3, key, sys_hash_table, nil);
#else
//
// The definition implemented here is as required by Reduce in
// the file matrix.red...  In the long term this is unsatisfactory.
//
    LispObject r;
    push(key);
    r = Lget_hash(nil, 3, key, sys_hash_table, nil);
    pop(key);
    errexit();
    if (mv_2 != nil)
    {   r = cons(key, r);
        errexit();
    }
    return onevalue(r);
#endif
}

LispObject Lget_hash_2(LispObject nil, LispObject key, LispObject tab)
{   return Lget_hash(nil, 3, key, tab, nil);
}

#ifdef DEBUG
static int biggest_hash = 0;
#endif

LispObject Lput_hash(LispObject nil, int nargs, ...)
{   va_list a;
    LispObject key, tab, val;
    va_start(a, nargs);
    key = va_arg(a, LispObject);
    tab = va_arg(a, LispObject);
    val = va_arg(a, LispObject);
    va_end(a);
    argcheck(nargs, 3, "puthash");
    simple_msg("put_hash: ", key);
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("puthash", tab);
    push3(key, tab, val);
// I call Lget_hash here and that updates the GET statistics. So I fiddle
// things a bit to arrange that the GET numbers do not end up changed after
// and and that I know how many probes were performed.
#ifdef HASH_STATISTICS
    Nhputtmp = Nhgetp;
#endif
    Lget_hash(nil, 3, key, tab, nil);
#ifdef HASH_STATISTICS
    Nhputtmp = Nhgetp - Nhputtmp;
    Nhgetp -= Nhputtmp;
    Nhget--;
#endif
    pop3(val, tab, key);
    errexit();
    if (mv_2 == nil)    // Not found, thus I point at an empty slot
    {   //@@printf("Item not already present %d %d\n", hashgap, hashoffset);
#ifdef HASH_STATISTICS
        Nhputp1 += Nhputtmp;
        Nhput1++;               // adding a NEW item
#endif
        if (hashgap >= 0) hashoffset = hashgap;
        ht_elt(work_0, hashoffset+1) = key;
        ht_elt(work_0, hashoffset+2) = val;
        elt(tab, 1) += 0x10;    // increment count of used entries
#ifdef DEBUG
        if (elt(tab, 1) > biggest_hash+10000)
        {   err_printf("Hash size now %d\n", (int)int_of_fixnum(elt(tab, 1)));
            biggest_hash = elt(tab, 1);
        }
#endif
        if (elt(tab, 1) > elt(tab, 2))
        {   LispObject size = elt(tab, 2),
                           growth = elt(tab, 3),
                           newhash, v;
            int32_t isize = int_of_fixnum(size), i;
            push2(tab, val);
            if (is_fixnum(growth))
            {   int32_t w1 = int_of_fixnum(growth);
                if (w1 > 0) isize = isize + w1;
                else isize = isize + (isize/2);
            }
            else if (is_float(growth))
            {   double w2 = float_of_number(growth);
                int32_t newsize = isize;
                if (1.0 < w2 && w2 < 10.0)
                    newsize = (int32_t)(w2 * (double)isize + 2.0);
                if (newsize > isize) isize = newsize;
                else isize = isize + (isize/2) + 2;
            }
            else isize = isize + (isize/2) + 2;
            newhash = Lmkhash(nil, 3, fixnum_of_int(isize),
                              elt(tab, 0), growth);
            pop2(val, tab);
            errexit();
            v = elt(tab, 4);
            for (i=0; i<=4; i++) elt(tab, i) = elt(newhash, i);
            isize = words_in_hash_table(v);
            for (i=0; i<isize; i+=2)
            {   LispObject key1 = ht_elt(v, i+1), val1 = ht_elt(v, i+2);
                if (key1 == SPID_HASH0 || key1 == SPID_HASH1) continue;
//
// NB the new hash table is big enough to hold all the data that was in the
// old one, so inserting stuff into it can not cause a (recursive)
// enlargement here....
//
                push3(v, tab, val);
// Re-inserting will add to the counts for hash PUT operations.
                Lput_hash(nil, 3, key1, tab, val1);
                pop3(val, tab, v);
            }
        }
        return onevalue(val);
    }
    else
    {
#ifdef HASH_STATISTICS
        Nhputp2 += Nhputtmp; // Count cases wheer an existing item is updated.
        Nhput2++;
#endif
        ht_elt(work_0, hashoffset+2) = val;
//@@    printf("hash entry updated\n");
        return onevalue(val);
    }
}


LispObject Lput_hash_2(LispObject nil, LispObject a, LispObject b)
{   return Lput_hash(nil, 3, a, sys_hash_table, b);
}

LispObject Lrem_hash(LispObject nil, LispObject key, LispObject tab)
{   simple_msg("rem_hash: ", key);
    push2(key, tab);
    Lget_hash(nil, 3, key, tab, nil);
    pop2(tab, key);
    errexit();
    if (mv_2 == nil) return onevalue(nil);
    else
    {   ht_elt(work_0, hashoffset+1) = SPID_HASH1;
        ht_elt(work_0, hashoffset+2) = SPID_HASH0;
        elt(tab, 1) -= 0x10;
//
// Some folk would believe that if the table shrank too much I should
// shrink it, or at the very least re-hash it.
//
        return onevalue(lisp_true);
    }
}

LispObject Lrem_hash_1(LispObject nil, LispObject a)
{   return Lrem_hash(nil, a, sys_hash_table);
}

LispObject Lclr_hash(LispObject, LispObject tab)
{   LispObject v;
    int32_t size, i;
    if (!is_vector(tab) ||
        type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("clrhash", tab);
    elt(tab, 1) = fixnum_of_int(0);
    v = elt(tab, 4);
    size = words_in_hash_table(v);
    for (i=1; i<size; i++) ht_elt(v, i) = SPID_HASH0;
    return tab;
}

LispObject Lclr_hash_0(LispObject nil, int nargs, ...)
{   argcheck(nargs, 0, "clrhash");
    return Lclr_hash(nil, sys_hash_table);
}

LispObject Lsxhash(LispObject nil, LispObject key)
{
//
// Does not descend vectors
//
    uint32_t h = hash_cl_equal(key, true);
//@@printf("raw hash_cl_equal = %.8x\n", h);
    errexit();
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Leqlhash(LispObject nil, LispObject key)
{
//
// Only handles atoms
//
    uint32_t h = hash_cl_equal(key, false);
//@@printf("raw hash_eql = %.8x\n", h);
    errexit();
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Lequalhash(LispObject nil, LispObject key)
{
//
// Descends vectors as the Standard Lisp EQUAL function does.
//
    uint32_t h = hash_equal(key);
//@@printf("raw hash_equal = %.8x\n", h);
    errexit();
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Lhash_flavour(LispObject nil, LispObject tab)
{   LispObject v,flavour = fixnum_of_int(-1);

    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("hash_flavour", tab);
    v = elt(tab, 0);
//  The code here needs to allow for user-specified hash functions
    if (is_fixnum(v)) flavour = v;
    return onevalue(flavour);
}

// Now some support code for displaying statistics.

void showstats(size_t n)
{
    size_t i;
    found_n=0, found_h=0, found_c=0;
    notfound_n=0, notfound_h=0, notfound_c=0;
// To get an idea of the status of the table at this level of fullness
// I will look up all the keys that are stored in it and an equal number
// of random keys (that are not liable to be present).
    for (i=0; i<table_size; i++)
    {   if (table[i] != EMPTY && table[i] != TOMBSTONE)
        {   int j = instrumented_lookup(table[i]); // should be there
            if (i != j) printf("??? i=%"PRIuMAX" j=%"PRIuMAX"(%"PRIxMAX")\n",
                               (uintmax_t)i, (uintmax_t)j, (uintmax_t)j);
            instrumented_lookup(lrand48());        // probably not there
        }
    }
    printf("Table occupancy %"PRIuMAX"/%"PRIuMAX" = %.2f\n",
        (uintmax_t)n, (uintmax_t)table_size, n/(double)table_size);
    if (found_n != 0)
    printf("lookup=yes %10" PRIu64 "  hash=%10" PRIu64 "  cmp=%10" PRIu64 " average cmp=%.2f\n",
        found_n, found_h, found_c, found_c/(double)found_n);
    if (notfound_n != 0)
    printf("lookup=no  %10" PRIu64 "  hash=%10" PRIu64 "  cmp=%10" PRIu64 " average cmp=%.2f\n",
        notfound_n, notfound_h, notfound_c, notfound_c/(double)notfound_n);
    if (already_n != 0)
    printf("insert=no  %10" PRIu64 "  hash=%10" PRIu64 "  cmp=%10" PRIu64 " average cmp=%.2f\n",
        already_n, already_h, already_c, already_c/(double)already_n);
    if (inserted_n != 0)
    printf("insert=yes %10" PRIu64 "  hash=%10" PRIu64 "  cmp=%10" PRIu64 " average cmp=%.2f\n",
        inserted_n, inserted_h, inserted_c, inserted_c/(double)inserted_n);
}

setup_type const lisphash_setup[] =
{
    {"mkhash",                  wrong_no_3a, Lmkhash2, Lmkhash},
    {"gethash",                 Lget_hash_1, Lget_hash_2, Lget_hash},
    {"puthash",                 wrong_no_3a, Lput_hash_2, Lput_hash},
    {"remhash",                 Lrem_hash_1, Lrem_hash, wrong_no_2},
    {"clrhash",                 Lclr_hash, too_many_1, Lclr_hash_0},
    {"sxhash",                  Lsxhash, too_many_1, wrong_no_1},
    {"eqlhash",                 Leqlhash, too_many_1, wrong_no_1},
    {"equalhash",               Lequalhash, too_many_1, wrong_no_1},
    {"maphash",                 too_few_2, Lmaphash, wrong_no_2},
    {"hashcontents",            Lhashcontents, too_many_1, wrong_no_1},
    {"hashtable-flavour",       Lhash_flavour, too_many_1, wrong_no_1},
    {NULL,                      0, 0, 0}
};

// end of lisphash.cpp
