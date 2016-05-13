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

#define __STDC_CONSTANT_MACROS__ 1
#define __STDC_FORMAT_MACROS__   1

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
// subsets of the full 64-bit value). I arrange that if, as I inspect the
// table, I encounter an empty slot that means that the key I was looking for
// is not present. Thus in some cases I can verify that a key is not in the
// table by computing one hash function and inspecting the table but not
// performing any key comparisons at all. Similarly when I insert data into
// a fairly empty table I will (reasonably often) not need key comparison
// operations.
//
// As with any general hash table implementation I occasionally need to
// expand or contract the table and re-hash. For cuckoo hashing I sometimes
// need to alter my hash function parameter and rehash to avoid a cluster
// of hash conflicts. While those two have significant cost they should
// both be uncommon and their amortised cost modest.
//
// I wtite HASH() for the code that will compute a hash function, and
// COMPARE() for key comparison. COMPARE should never be called with an
// EMPTY value, but might be with a TOMBSTONE.

typedef uint64_t ENTRY;
#define EMPTY     ((ENTRY)(-1))
#define TOMBSTONE ((ENTRY)(-2))


//
// The following are the component5s that make up a hash table...
//
ENTRY *table = NULL;
int shift_amount = 64-18;
int table_size = ((size_t)(1<<(64-shift_amount)));
uint64_t occupancy = 0;
uint64_t multiplier = UINT64_C(0x9e3779b99e3779bd);

static inline void update_multiplier()
{
// The constants here yield a linear congruential generator with full
// period for 64-bit integers.
    multiplier = UINT64_C(2862933555777941757)*multiplier +
                 UINT64_C(3037000493);
}

static uint64_t hashcount=0, comparecount=0;

#define HASH(key, multiplier) (hashcount++,((key)*multiplier))
#define COMPARE(k1, k2)       (comparecount++,((k1) == (k2)))

// dumptable() displys the contants of the hash table (for debugging
// purposes), optionally checking to confirm that it seems to be
// properly configured.

void dumptable(const char *s, bool checkdups)
{
    size_t i;
    bool bad = false;
    printf("%s\n", s);
    for (i=0; i<table_size; i++)
    {   ENTRY k = table[i];
        uint64_t h = HASH(k, multiplier);
        int h1 = h >> shift_amount;
        int h2 = (multiplier*h) >> shift_amount;
        int h3 = (multiplier*multiplier*h) >> shift_amount;
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

static void corrupted()
{
    printf("Table is corrupted\n");
    dumptable("Table is corrupted", true);
    fflush(stdout);
    abort();
}

void checktable()
{
    size_t i;
    for (i=0; i<table_size; i++)
    {   ENTRY k = table[i];
        uint64_t h = HASH(k, multiplier);
        int h1 = h >> shift_amount;
        int h2 = (multiplier*h) >> shift_amount;
        int h3 = (multiplier*multiplier*h) >> shift_amount;
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

int lookup(ENTRY key)
{
    uint64_t h = HASH(key, multiplier), v;
    int n;
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
    if ((v = table[n = (h>>shift_amount)]) == EMPTY) return -1;
    else if (v != TOMBSTONE && COMPARE(v, key)) return n;
// For the next second and third hash values I merely multiply the
// first 64-bit value by a value that is essentially arbitrary so that some
// of its lower bits come up to the top where they contribute to the
// address that will be probed. If I keep my table lightly loaded I will
// not need to do this terribly often.
    h *= multiplier;
    if ((v = table[n = (h>>shift_amount)]) == EMPTY) return -1;
    else if (v != TOMBSTONE && COMPARE(v, key)) return n;
    h *= multiplier;
// Even in the worst case a lookup (succesful or not) never takes more than
// three probes.
    if ((v = table[n = (h>>shift_amount)]) == EMPTY) return -1;
    else if (v != TOMBSTONE && COMPARE(v, key)) return n;
    else return -1;
}

// I provide instrumented lookup and insert functions that count the
// number of hash evaluations and key comparisons used.

uint64_t found_n=0, found_h=0, found_c=0;
uint64_t notfound_n=0, notfound_h=0, notfound_c=0;

int instrumented_lookup(ENTRY key)
{
    int r;
    hashcount = comparecount = 0;
    r = lookup(key);
    if (r == -1)
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
    int n = lookup(key);
    if (n < 0) return false; // Item had not been present.
    table[n] = TOMBSTONE;
    occupancy--;
    if (occupancy < table_size/5)
    {   //shrink_table();
    }
    return true;             // Item had been present. Now removed.
}


// I will search for a place to insert using a breadth-first search. For that
// purpose I will have a queue, where the items stored in it will be the
// addresses in the table where I wish to put something.
//
// This queue can start off with three entries for the three locations that
// the key to be inserted might be placed:
//  0:  h1(k)
//  1:  h2(k)
//  2:  h3(h)
// and I only get to this part of the search when each of those three
// locations is busy.  So now starting from i=0 I take item i out of this
// queue and can the value n. For instance the very first time i=0 and
// n=h1(k). This means that n is the location I might wish to clear. I
// let k=table[n] (ie the key that must be moved out of the way) and now
// I append three more values to the queue (they will fall at positions
// 3i+3, 3i+4 and 3i+5):
//  3i+3: h1(k)
//  3i+4: h2(k)
//  3i+5: h3(h)
// and as I do this I check that table[h1(k)] (etc) are not empty. If I
// find an empty slot I can move on to the "unwind" phase. If while I am
// doing this I fill up the limited space I allow for the queue then I
// declare that I have failed to insert this key. I will have two options
// to apply then. The first is to change the multiplier I use to create
// hash values and try rehashing everything. That works around the possibility
// that I am just unlucky with my hashing and too many keys have hash values
// that collide. The second fall-back is to increase the size of the table
// (eg to double it) and rehash. That will relieve pressure and greatly
// increase the chances of fitting everything in. For now I will just return
// a failure marker.
//
// QSIZE is the size of the queue used in the breadth-first search. Higher
// values make a few insert oparations more expensive but lead to better
// ability to fit keys in. For most key inserts (even as you get towards
// the highest table occupancy I support) the amount of queue used will be
// trivial.

#define QSIZE 100

int insert(ENTRY key)
{
    int Qin, Qout;
    uint64_t Qkey[QSIZE];
    int Q[QSIZE];
    uint64_t h = HASH(key, multiplier);
    ENTRY v1, v2, v3;
    int n, n1, n2, n3;
#ifdef TRACE
    printf("Insert %"PRIx64" %d %d %d\n",
        key,
        (int)(h >> shift_amount),
        (int)((multiplier*h) >> shift_amount),
        (int)((multiplier*multiplier*h) >> shift_amount));
#endif
// I have what seems a rather long-winded prelude to the general insert code.
// If the key presented hashed to h1, h2 and h3 then I first check if h1 is
// empty (if so the key is not preent). Then I check if h1 contains the
// key already. Next I check h2 and h3 similarly. If none of these
// tests resolve the matter I check whether theer are tombstones at h1, h2
// or h3 and I can insert into the first space shown available that way. So
// that is 9 cases I need to check for. In VERY many cases those tests will
// cover all I need. If they do not then I know that the key I am inserting
// is not already present in the table, and so I will never need any more
// key comparisons. But I do have to perform a breadth-first search to seek
// a way to rearrange data to fit the new key in. This can fail, in which
// case I will return -1 leaving the table unchanged.
    if ((v1 = table[n1 = (h>>shift_amount)]) == EMPTY)   // Gap found.
    {   table[n1] = key;
        occupancy++;
        return n1;
    }
    if (COMPARE(v1, key)) return n1;
    h *= multiplier;
    if ((v2 = table[n2 = (h>>shift_amount)]) == EMPTY)
    {   table[n2] = key;
        occupancy++;
        return n2;
    }
    if (COMPARE(v2, key)) return n2;
    h *= multiplier;
    if ((v3 = table[n3 = (h>>shift_amount)]) == EMPTY)
    {   table[n3] = key;
        occupancy++;
        return n3;
    }
    if (v3 == TOMBSTONE)
    {   if (v1 == TOMBSTONE) table[n1] = key;
        else if (v2 == TOMBSTONE) table[n2] = key;
        else table[n3] = key;
        occupancy++;
        return n3;
    }
    if (COMPARE(v3, key)) return n3;
    occupancy++;
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
    Q[0] = n1;
    Q[1] = n2;
    Q[2] = n3;
    Qin = 3;
    Qout = 0;
    for (;;)
    {   ENTRY newkey;
        if (Qout >= Qin) return -1; // Nothing left in queue. Failed.
        n = Q[Qout++];              // A currently occupied location.
        newkey = table[n];          // The key stored there.
        h = HASH(newkey, multiplier);
#ifdef TRACE
        printf("Consider moving %d [%"PRIx64"] to %d %d %d\n",
           n, (uint64_t)newkey,
           (int)(h>>shift_amount),
           (int)((multiplier*h)>>shift_amount),
           (int)((multiplier*multiplier*h)>>shift_amount));
#endif
        if ((v1 = table[n1 = (h>>shift_amount)]) == EMPTY ||
            v1 == TOMBSTONE)  // Success - have found a gap!
        {   table[n1] = newkey;
#ifdef TRACE
            printf("Put in %d\n", n1);
#endif
            break;
        }
        h *= multiplier;
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
        if (Qin <= QSIZE-3)
        {   Q[Qin++] = n1;
            Q[Qin++] = n2;
            Q[Qin++] = n3;
        }
    }
#ifdef TRACE
    printf("Have found a gap and moved something to it (%"PRIx64")\n",
           (uint64_t)key);
    printf("before unwind Qin=%d Qout=%d\n", Qin, Qout);
    dumptable("Before", false);
    {   int j;
        for (j=0; j<Qin; j++) printf("%d: %d\n", j, Q[j]);
    }
#endif
// I have now just moved a key into a gap. 
    Qout = Qout - 1;
    while (Qout >= 3)
    {  int j = Qout/3 - 1;   // parent
#ifdef TRACE
       printf("move %"PRIx64" from %d to %d\n", table[Q[j]], Q[j], Q[Qout]);
#endif
       table[Q[Qout]] = table[Q[j]];
       Qout = j;
    }
    table[Q[Qout]] = key;   // Note that this is the key being inserted.
#ifdef TRACE
    dumptable("After", true);
#endif
    return Q[Qout];
}

// I will have a special version of insert() for use when I KNOW that the
// item I am inserting is not already in the table. This can be used when
// I am rehashing. This can report failure and it doe snot alter the
// occupancy count.


int insert_new(ENTRY key)
{
    int Qin, Qout;
    uint64_t Qkey[QSIZE];
    int Q[QSIZE];
    uint64_t h = HASH(key, multiplier);
    ENTRY v1, v2, v3;
    int n, n1, n2, n3;
    if ((v1 = table[n1 = (h>>shift_amount)]) == EMPTY ||
         v1 == TOMBSTONE)
    {   table[n1] = key;
        return n1;
    }
    h *= multiplier;
    if ((v2 = table[n2 = (h>>shift_amount)]) == EMPTY ||
         v2 == TOMBSTONE)
    {   table[n2] = key;
        return n2;
    }
    h *= multiplier;
    if ((v3 = table[n3 = (h>>shift_amount)]) == EMPTY ||
         v3 == TOMBSTONE)
    {   table[n3] = key;
        return n3;
    }
    Q[0] = n1;
    Q[1] = n2;
    Q[2] = n3;
    Qin = 3;
    Qout = 0;
    for (;;)
    {   ENTRY newkey;
        if (Qout >= Qin) return -1; // Nothing left in queue. Failed.
        n = Q[Qout++];              // A currently occupied location.
        newkey = table[n];          // The key stored there.
        h = HASH(newkey, multiplier);
        if ((v1 = table[n1 = (h>>shift_amount)]) == EMPTY ||
            v1 == TOMBSTONE)  // Success - have found a gap!
        {   table[n1] = newkey;
            break;
        }
        h *= multiplier;
        if ((v2 = table[n2 = (h>>shift_amount)]) == EMPTY ||
            v2 == TOMBSTONE)
        {   table[n2] = newkey;
            break;
        }
        h *= multiplier;
        if ((v3 = table[n3 = (h>>shift_amount)]) == EMPTY ||
            v3 == TOMBSTONE)
        {   table[n3] = newkey;
            break;
        }
        if (Qin <= QSIZE-3)
        {   Q[Qin++] = n1;
            Q[Qin++] = n2;
            Q[Qin++] = n3;
        }
    }
// I have now just moved a key into a gap. 
    Qout = Qout - 1;
    while (Qout >= 3)
    {  int j = Qout/3 - 1;   // parent
       table[Q[Qout]] = table[Q[j]];
       Qout = j;
    }
    table[Q[Qout]] = key;   // Note that this is the key being inserted.
    return Q[Qout];
}


// table, separating figures as between cases that they key was already
// present and when it was new. The cost of an insert operation when the key
// is in fact already present should be the same as the cost of a lookup
// when they key is present, so reporting numbers about it is perhaps
// frivolous.

uint64_t already_n=0, already_h=0, already_c=0;
uint64_t inserted_n=0, inserted_h=0, inserted_c=0;

int instrumented_insert(ENTRY key)
{
    int r;
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

// The rehash code is something that concerns me because a simple
// implementation will leave almost all empty slots in the table
// holding a TOMBSTONE value, and then will tend to hurt subsequent
// lookups. I should explain the pain:
// Given a key k lookup will inspect up to three locations, h1, h2 and h3
// to seek the entry. If h1 is EMPTY it immediately reports that the key
// is not present in the table. If h1 contained TOMBSTONE and h2 and h3 held
// valid data then k would be compared against the items at h2 and h3 before
// lookup could declare the iten not present in the table. So if checking for
// items that are not present in tables happens frequently for lightly
// loaded tables you can see that the presence of TOMBSTONE values may hurt
// somewhat.
//
// A further pain here is that the nature of cuckoo hashing means that the
// rehash operation here could fail. This could happen in the (new) hash
// function being used led to a bad cluster of clashing keys. That is
// generally very improbable, but it has to be allowed for. So rehash returns
// a value that reports on its success. If it fails then some data will
// be in the hash but any leftovers will be in the array pending_for_rehash[].
//

#define MAXPENDING 10000

static ENTRY pending_for_rehash[MAXPENDING+1];
static int npending = 0;

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
// The first MAXPENDING keys that I encouter are liften out and stored
// for processing at the end. For tables with up to MAXPENDING items in
// that is really good - if ensures that there will be no TOMBSTONE values
// left after the rehash operation. It also means that most of the
// reinsert steps happen into a mostly empty table and so will be fast.
        else if (npending < MAXPENDING)
        {   pending_for_rehash[npending++] = k;
            table[k] = EMPTY;
            occupancy--;
            continue;
        }
// For BIG tables I need to leave a TOMBSTONE where a key used to be before
// being moved. 
        table[i] = TOMBSTONE;
        if (insert(k) == -1)
        {   pending_for_rehash[npending++] = k;
            return false;
        }
    }
    while (npending != 0)
    {   ENTRY k = pending_for_rehash[--npending];
        if (insert(k) == -1)
        {   pending_for_rehash[npending++] = k;
            return false;
        }
    }
    return true;
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
            if (i != j) printf("??? i=%"PRIuMAX" j=%"PRIuMAX"\n",
                               (uintmax_t)i, (uintmax_t)j);
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

#define NTRIALS 1
//#define LIMIT (64-4)
#define LIMIT (64-24)


int main(int argc, char *argv[])
{
    srand48((long)time(NULL));
    for (shift_amount=64-3; shift_amount>LIMIT; shift_amount--)
    {   table_size = ((size_t)1)<<(64-shift_amount);
        table = (ENTRY *)malloc(sizeof(ENTRY)*table_size);
        if (table == NULL)
        {   printf("malloc failed\n");
            exit(0);
        }
        for (int trials=0; trials<NTRIALS; trials++)
        {   size_t n, n0, n1, n2, n3, n4;
            already_n=0, already_h=0, already_c=0;
            inserted_n=0, inserted_h=0, inserted_c=0;
            for (n=0; n<table_size; n++) table[n] = EMPTY;
            n0 = (3*table_size)/10;
            n1 = (4*table_size)/10;
            n2 = (5*table_size)/10;
            n3 = (6*table_size)/10;
            n4 = (7*table_size)/10;
            for (n=0; n<table_size; n++)
            {   long key = lrand48();
                if (instrumented_insert(key) == -1)
                {
                    checktable();
#ifdef TRACE
                    dumptable("insert failed", true);
#endif
                    printf("Full at %"PRIuMAX"/%"PRIuMAX" (%.2f%%)\n",
                        (uintmax_t)n, (uintmax_t)table_size,
                        100.0*n/(double)table_size);
                    showstats(n+1);
                    break;
                }
#ifdef TRACE
                dumptable("keeping going", true);
#endif
                if (n+1==n0 ||
                    n+1==n1 ||
                    n+1==n2 ||
                    n+1==n3 ||
                    n+1==n4)
                {   showstats(n+1);
                    checktable();
                }
            }
            printf("Ended at %"PRIuMAX"/%"PRIuMAX" (%.2f%%)\n",
                (uintmax_t)n, (uintmax_t)table_size,
                100.0*n/(double)table_size);
            showstats(n+1);
            checktable();
        }
        free(table);
    }
    return 0;
}

// end of lisphash.cpp
