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

// I make hash tables out of chunks each of which are vectors with
// (up to) 128K elements. This means that on a 64-bit machine each
// chunk occupies a megabyte. I can have two levels of structure, and
// by the time the index level is that size I will be have a table
// with 16G slots in it and occupying 256 Gbytes of memory. At present
// (2016) I view the limits there are such that they will not embarass
// me for some while.

#define VECTOR_CHUNK_WORDS  ((size_t)0x20000)

static LispObject get_large_vector(size_t n, LispObject initval)
{   LispObject v, nil = C_nil;
//
// A major ugliness here is that I need to support hash tables that are
// larger than the largest simple vector I view as reasonable.  To achieve
// this I will handle such huge tables using a vector of vectors, with
// the higher level vector tagged as a INDEXVEC and the lower level vectors
// each modestly sized. For hash tables this will only ever be used for
// vectors whose total size is a power of 2, but looking forward to uses
// elsewhere I will make this general.
// So:
//   A vector of size up to VECTOR_CHUNK_WORDS will be represented
//     naturally as a single block of memory.
//   Larger vectors will have an INDEXVEC most of whose contents are
//     vectors of size VECTOR_CHUNK_WORDS but where the final item
//     may be smaller.
//
// As coded here I can only only create "general" vectors that contain Lisp
// objects - so variants such as strings, bignums and vectors that hold
// bytes, various fixed width integers or floats would need this code
// replicated.
    if (n > VECTOR_CHUNK_WORDS)
    {
// If the number size is exactly a multiple of the chunk size I will not
// need a special shorter final vector.
        size_t chunks = (n + VECTOR_CHUNK_WORDS - 1)/VECTOR_CHUNK_WORDS;
        size_t i;
// The final chunk will be full size if I have a neat multiple of
// VECTOR_CHUNK_WORDS, oterwise smaller.
        size_t last_size = n % VECTOR_CHUNK_WORDS;
        if (last_size == 0) last_size = VECTOR_CHUNK_WORDS;
        v = getvector_init(CELL*(chunks+1), nil);
        errexit();
// The next line re-tags the top level vector as an index.
        vechdr(v) ^= (TYPE_SIMPLE_VEC ^ TYPE_INDEXVEC);
        for (i=0; i<chunks; i++)
        {   LispObject v1;
            int k = i==chunks-1 ? last_size : VECTOR_CHUNK_WORDS;
            push(v);
            v1 = getvector_init(CELL*(k+1), initval);
            pop(v);
            errexit();
            elt(v, i) = v1;
        }
    }
    else v = getvector_init(n, initval);
    return v;
}

static inline size_t words_in_large_vector(LispObject v)
{   if (type_of_header(vechdr(v)) == TYPE_INDEXVEC)
    {   size_t n = (length_of_header(vechdr(v))-CELL)/CELL;
// See that the final chunk has its length treated individually. This
// adds to the cost, but the extrs cost only arises when the vector is
// rather large to start with, and so I am not going to worry.
        return VECTOR_CHUNK_WORDS*(n-1) +
            (length_of_header(vechdr(elt(v, n-1))) - CELL)/CELL;
    }
    else return (length_of_header(vechdr(v)) - CELL)/CELL;
}

static inline LispObject getv_large_vector(LispObject v, size_t n)
{
    if (type_of_header(vechdr(v)) == TYPE_INDEXVEC)
        return elt(elt((v), (n)/VECTOR_CHUNK_WORDS), (n)%VECTOR_CHUNK_WORDS);
    else return elt(v, n);
}

static inline void putv_large_vector(LispObject v, size_t n, LispObject val)
{
    if (type_of_header(vechdr(v)) == TYPE_INDEXVEC)
        elt(elt((v), (n)/VECTOR_CHUNK_WORDS), (n)%VECTOR_CHUNK_WORDS) = val;
    else elt(v, n) = val;
}



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

//
// The following are the components that make up a hash table...
//

#define HASH_FLAVOUR    0
#define HASH_COUNT      1
#define HASH_SHIFT      2
#define HASH_KEYS       3
#define HASH_VALUES     4
#define HASH_MULTIPLIER 5
#define HASH_DEFAULT_MULTIPLIER UINT64_C(0x9e3779b99e3779bd)

// While performing operations on a table I will often load its components
// info some of the following static variables.

static LispObject h_table, v_table;
static int h_shift = 64-18;
static uint64_t h_multiplier = UINT64_C(0x9e3779b99e3779bd);

static size_t table_size = ((size_t)(1<<(64-h_shift)));
static size_t occupancy = 0;

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
    h_multiplier = UINT64_C(2862933555777941757)*h_multiplier +
                 (2*UINT64_C(3037000493)-UINT64_C(2862933555777941757)+1);
}

static uint64_t hashcount=0, comparecount=0;

typedef uint64_t hash_function_t(LispObject key);
typedef bool hash_compare_t(LispObject key, LispObject hashentry);

static hash_function_t *hash_function;
static hash_compare_t  *hash_compare; 

// The primary hash key is computed in a way that has to depend on the
// hashing regime in use. If hashing is based on the EQ test then it
// can be just (key*multiplier), while for EQUAL and other more elaborate
// cases it will need to descend into the representation of its key.

static inline uint64_t HASH(LispObject key)
{   return (*hash_function)(key);
}

// REHASH generated a second hash value from the initial one. If the initial
// hash was perfect I could use its top few bits from the primary hash and
// then merely use the next few bits for a second probe location. However
// the simple scheme (sometimes) used for the primary hash risks not paying
// enough attention to high bits in the original key. So to get my secondary
// hash I shift data right 32 bits before multiplying by the number that I
// use to scramble things.

static inline uint64_t REHASH(uint64_t h)
{   return ((h ^ (h>>32)) + 0x1234567) * h_multiplier;
}

// The third hash value that I use will be got by multiplying the
// second one by my magic multiplier.

static inline uint64_t REHASH2(uint64_t h)
{   return h*h_multiplier;
}

static inline bool COMPARE(LispObject k1, LispObject k2)
{
// Here neither k1 not k2 will be SPID_HASHEMPTY or SPID_HASHTOMB.
    return (*hash_compare)(k1, k2);
}

static inline LispObject ht(size_t n)
{
    return getv_large_vector(h_table, n);
}

static inline void setht(size_t n, LispObject v)
{
    putv_large_vector(h_table, n, v);
}

// dumptable() displays the contants of the hash table (for debugging
// purposes), optionally checking to confirm that it seems to be
// properly configured.



void dumptable(LispObject tt, const char *s, bool checkdups)
{
    size_t i;
    bool bad = false;
    printf("%s\n", s);
    for (i=0; i<table_size; i++)
    {   LispObject k = ht(i);
        uint64_t h = HASH(k);
        int h1 = h >> h_shift;
        uint64_t hx = REHASH(h);
        int h2 = hx >> h_shift;
        int h3 = REHASH2(hx) >> h_shift;
        if (k == SPID_HASHEMPTY) printf("%3"PRIuMAX": EMPTY\n", (uintmax_t)i);
        else if (k == SPID_HASHTOMB) printf("%3"PRIuMAX": TOMBSTONE\n", (uintmax_t)i);
        else
        {   const char *s1=" ", *s2 = " ", *s3 = " ", *s4 = "";
            if (h1 == i)
            {   s1 = "=";
                if (h2 != i && ht(h2) == k) { s2 = "?"; bad = true; }
                if (h3 != i && ht(h3) == k) { s3 = "?"; bad = true; }
            }
            if (h2 == i)
            {   s2 = "=";
                if (h1 != i && ht(h1) == k) { s1 = "?"; bad = true; }
                if (h3 != i && ht(h3) == k) { s3 = "?"; bad = true; }
                if (ht(h1) == SPID_HASHEMPTY) s4 = " @@@";
            }
            if (h3 == i)
            {   s3 = "=";
                if (h1 != i && ht(h1) == k) { s1 = "?"; bad = true; }
                if (h2 != i && ht(h2) == k) { s2 = "?"; bad = true; }
                if (ht(h1) == SPID_HASHEMPTY) s4 = " @@@";
                if (ht(h2) == SPID_HASHEMPTY) s4 = " @@@";
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
    {   LispObject k = ht(i);
        uint64_t h = HASH(k);
        int h1 = h >> h_shift;
        uint64_t hx = REHASH(h);
        int h2 = hx >> h_shift;
        int h3 = REHASH2(hx) >> h_shift;
        if (k != SPID_HASHEMPTY && k != SPID_HASHTOMB)
        {   if (h1 == i)
            {   if (h2 != i && ht(h2) == k) corrupted(tt);
                if (h3 != i && ht(h3) == k) corrupted(tt);
            }
            if (h2 == i)
            {   if (h1 != i && ht(h1) == k) corrupted(tt);
                if (h3 != i && ht(h3) == k) corrupted(tt);
                if (h1 != i && ht(h1) == SPID_HASHEMPTY) corrupted(tt);
            }
            if (h3 == i)
            {   if (h1 != i && ht(h1) == k) corrupted(tt);
                if (h2 != i && ht(h2) == k) corrupted(tt);
                if (h1 != i && h2 != i &&
                    (ht(h1) == SPID_HASHEMPTY || ht(h2) == SPID_HASHEMPTY)) corrupted(tt);
            }
            if (h1 != i && h2 != i && h3 != i) corrupted(tt);
        }
    }
}

// The main lookup function. In the worst case this can do three
// key comparisons. But it can be cheaper either on success if it
// finds a match on the first or second comparison, or on failure if
// it encounters an empty hash table slot in its probe sequence.
// Observe how very concise and fast this code is!

size_t hash_lookup(LispObject key)
{
    uint64_t h = HASH(key);
    LispObject v;
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
    if ((v = ht(n = (h>>h_shift))) == SPID_HASHEMPTY) return NOT_PRESENT;
    else if (v != SPID_HASHTOMB && COMPARE(v, key)) return n;
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
    h = REHASH(h);
    if ((v = ht(n = (h>>h_shift))) == SPID_HASHEMPTY) return NOT_PRESENT;
    else if (v != SPID_HASHTOMB && COMPARE(v, key)) return n;
// The third choice hash uses merely simple multiplication.
    h = REHASH2(h);
// Even in the worst case a lookup (sucessful or not) never takes more than
// three probes.
    if ((v = ht(n = (h>>h_shift))) == SPID_HASHEMPTY) return NOT_PRESENT;
    else if (v != SPID_HASHTOMB && COMPARE(v, key)) return n;
    else return NOT_PRESENT;
}

// I provide instrumented lookup and insert functions that count the
// number of hash evaluations and key comparisons used.

uint64_t found_n=0, found_h=0, found_c=0;
uint64_t notfound_n=0, notfound_h=0, notfound_c=0;

size_t instrumented_lookup(LispObject key)
{
    size_t r;
    hashcount = comparecount = 0;
    r = hash_lookup(key);
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

bool discard(LispObject key)
{
    size_t n = hash_lookup(key);
    if (n == NOT_PRESENT) return false; // Item had not been present.
    setht(n, SPID_HASHTOMB);
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
// As I scan the table if I find table[q[n]]==SPID_HASHEMPTY or SPID_HASHTOMB then I have
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

// The code for hash_insert() can shuffle existing items in the hash table.
// When it does so it will need to so a matcing rearrangement on the
// associated values. @@@ Not done yet @@@

size_t hash_insert(LispObject key)
{
    int Qn;
    uint64_t Qkey[QSIZE];
    int Q[QSIZE];
    uint64_t h = HASH(key);
    LispObject v1, v2, v3;
    size_t n, n1, n2, n3;
#ifdef TRACE
    uint64_t hx = REHASH(h);
    printf("Insert %"PRIx64" %d %d %d\n",
        key,
        (int)(h >> h_shift),
        (int)(hx >> h_shift),
        (int)(REHASH2(hx) >> h_shift));
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
    if ((v1 = ht(n1 = (h>>h_shift))) == SPID_HASHEMPTY)   // Gap found.
    {   setht(n1, key);
        occupancy++;
        return n1;
    }
    if (v1 != SPID_HASHTOMB && COMPARE(v1, key)) return n1;
    h = REHASH(h);
    if ((v2 = ht(n2 = (h>>h_shift))) == SPID_HASHEMPTY)
    {   setht(n2, key);
        occupancy++;
        return n2;
    }
    if (v2 != SPID_HASHTOMB && COMPARE(v2, key)) return n2;
    h = REHASH2(h);
    v3 = ht(n3 = (h>>h_shift));
    if (v3 != SPID_HASHEMPTY && v3 != SPID_HASHTOMB && COMPARE(v3, key)) return n3;
// Here I have checked all three possible locations and the key is not
// already present.
    occupancy++;
// If in the investigation to date I have seen a TOMBSTONE I may re-use that
// entry.
    if (v1 == SPID_HASHTOMB)
    {   setht(n1, key);
        return n1;
    }
    if (v2 == SPID_HASHTOMB)
    {   setht(n2, key);
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
    {   LispObject newkey;
        if (Qn > QSIZE-2) return NOT_PRESENT; // Nothing left in queue. Failed.
        n = Q[Qn/2];                // A currently occupied location.
// The queue may have some entries in it that are "not present" and those are to
// be ignored in the search.
        if (n == NOT_PRESENT)
        {   Q[Qn++] = n;
            Q[Qn++] = n;
            continue;
        }
        newkey = ht(n);          // The key stored there.
        h = HASH(newkey);
#ifdef TRACE
        printf("Consider moving %d [%"PRIx64"] to %d %d %d\n",
           n, (uint64_t)newkey,
           (int)(h>>h_shift),
           (int)(REHASH(h)>>h_shift),
           (int)((REHASH2(REHASH(h)))>>h_shift));
#endif
        if ((v1 = ht(n1 = (h>>h_shift))) == SPID_HASHEMPTY ||
            v1 == SPID_HASHTOMB)  // Success - have found a gap!
        {   setht(n1, newkey);
#ifdef TRACE
            printf("Put in %d\n", n1);
#endif
            break;
        }
        h = REHASH(h);
        if ((v2 = ht(n2 = (h>>h_shift))) == SPID_HASHEMPTY ||
            v2 == SPID_HASHTOMB)
        {   setht(n2, newkey);
#ifdef TRACE
            printf("Put in %d\n", n2);
#endif
            break;
        }
        h = REHASH2(h);
        if ((v3 = ht(n3 = (h>>h_shift))) == SPID_HASHEMPTY ||
            v3 == SPID_HASHTOMB)
        {   setht(n3, newkey);
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
       printf("move %"PRIx64" from %d to %d\n", ht(Q[j]), Q[j], Q[Qout]);
#endif
       setht(Q[Qn], ht(Q[j]));
       Qn = j;
    }
    setht(Q[Qn], key);   // Note that this is the key being inserted.
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

size_t instrumented_insert(LispObject key)
{
    size_t r;
    uint64_t old_occupancy = occupancy;
    hashcount = comparecount = 0;
    r = hash_insert(key);
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

// The rehashing that I do here does not trace the values associated with
// keys and so is not yet in a final complete state!

#define MAXPENDING 200
static LispObject pending_for_rehash[MAXPENDING+1];
static int npending = 0;

static bool restore_pending(LispObject key)
{   size_t i = 0;
// There will always be room for the pending items (because they came from
// the table in the first place!) so the search for an EMPTY location that
// looks potentially unbounded should in fact be safe.
    for (;;)
    {   while (ht(i) != SPID_HASHEMPTY) i++;
        setht(i, key);
        if (npending == 0) break;
        key = pending_for_rehash[--npending];
    }
// I return false here so that the call to restore_pendikng can (perhaps) be
// a tail call, and its result indicates that the table is not yet in neat
// order.
    return false;
}

// When rehashing I will take items in the table one at a time in order
// and remove them and then re-insert them. On the re-insert I am going to
// insist that when the first k locations in the table have been rehashed
// that on any insertion I only settle a key into a cell that is either its
// first choice or is a one where its first choice has been within the
// initial k table entried and it is in its second choice, or its
// first two choices were in the first k entries, or it gets inserted in the
// table at a location later than k. Actually I could place it ANYWHERE
// after k, and I am minded to give my shuffling code the flexibility to
// place items in more or less arbitrary locations towards the end of
// the table as I go.

bool hash_rehash(LispObject tab)
{   size_t k;
    npending = 0;
    for (k=0; k<table_size; k++)
    {   LispObject key = ht(k);
// TOMBSTONE values present at the start relate to the old hashing regime
// and so are now irrelevant.
        if (key == SPID_HASHTOMB)
        {   setht(key, SPID_HASHEMPTY);
            continue;
        }
// SPID_HASHEMPTY entries do not need anything done to them.
        else if (key == SPID_HASHEMPTY) continue;
// The first MAXPENDING keys that I encouter are lifted out and stored
// for processing at the end. For tables with up to MAXPENDING items in
// that is really good - it makes most re-inserts be into a rather empty
// table and that speeds things up.
        else if (npending < MAXPENDING)
        {   pending_for_rehash[npending++] = key;
            setht(k, SPID_HASHEMPTY);
            occupancy--;
            continue;
        }
        setht(k, SPID_HASHEMPTY);
// If the seqence of inserts that I try to do to re-hash things fails
// I can have a number of keys "pending" and thus not in the table.
// I will just dump them ANYWHERE in the table (ie not at locations
// especially related to their hash codes). To find gaps to put them
// in I will do a naive linear scan of the table. I will argue that the
// fact that an insert has failed is (a) pretty unusual and so cost here
// is overall not very important and (b) because an insert failed perhaps
// the table is reasonably full, so a linear scan will not wasts too much
/// time scanning blank bits of it and finally (c) that when I rehash
// the table will not be 100% full and so I will find space for the data
// concerned.
        if (hash_insert(key) == NOT_PRESENT) return restore_pending(key);
    }
    while (npending != 0)
    {   LispObject key = pending_for_rehash[--npending];
// In pathological cases this can fail to re-insert even the data that had been
// previously present, and in that case the left-over stuff will be left in the
// array pending_for_rehash.
        if (hash_insert(key) == NOT_PRESENT) return restore_pending(key);
    }
// Rehashing should only ever be started when the table is of type
// HASHX rather than HASH, so when it has succeeded I can turn it back into
// a plain HASH.
    vechdr(tab) ^= (TYPE_HASH ^ TYPE_HASHX);
    return true;
}

// Double the size of the hash table, placing items in the table in
// what amount to arbitratry locations. Thus the table will need to be
// rehashed before use, so I ensure it ends up as HASHX.

static void hash_double_size(LispObject tab)
{   LispObject nil = C_nil;
    LispObject ok = elt(tab, HASH_KEYS);
    LispObject ov = elt(tab, HASH_VALUES);
    LispObject nk, nv;
    size_t i, n = words_in_large_vector(ok), n2, p;
    push3(tab, ok, ov);
// If the table is already large then I can expand it by just doubling
// the size of the index vectors.
    if (type_of_header(vechdr(ok)) == TYPE_INDEXVEC)
    {   n = n/VECTOR_CHUNK_WORDS;
        n2 = 2*n;
        nk = getvector_init(CELL*(n2+1), nil);
        errexitn(3);
        vechdr(nk) ^= (TYPE_SIMPLE_VEC ^ TYPE_INDEXVEC);
        push(nk);
        nv = getvector_init(CELL*(n2+1), nil);
        pop4(nk, ov, ok, tab);
        errexit();
        vechdr(nv) ^= (TYPE_SIMPLE_VEC ^ TYPE_INDEXVEC);
        for (i=0; i<n; i++)
        {   LispObject w;
            elt(nk, i) = elt(ok, i);
            elt(nv, i) = elt(ov, i);
            push3(tab, nk, nv);
            w = getvector_init(CELL*(VECTOR_CHUNK_WORDS+1), SPID_HASHEMPTY);
            pop3(nv, nk, tab);
            errexit();
            elt(nk, n+i) = w;
            push3(tab, nk, nv);
            w = getvector_init(CELL*(VECTOR_CHUNK_WORDS+1), nil);
            pop3(nv, nk, tab);
            errexit();
            elt(nv, n+i) = w;
        }
    }
// Otherwise I need to allocate an entirely new set of tables and copy
// everything across to them.
    else
    {   n2 = 2*n;
        nk = get_large_vector(n2, SPID_HASHEMPTY);
        errexitn(3);
        push(nk);
        nv = get_large_vector(n2, nil);
        pop4(nk, ov, ok, tab);
        errexit();
        elt(tab, HASH_KEYS) = nk;
        elt(tab, HASH_VALUES) = nv;
        p = 0;
        for (i=0; i<n; i++)
        {   LispObject k = elt(ok, i);
            if (k == SPID_HASHEMPTY || k == SPID_HASHTOMB) continue;
            putv_large_vector(nk, p, k);
            putv_large_vector(nv, p, getv_large_vector(ov, i));
            p++;
        }
    }
    if (type_of_header(vechdr(tab)) == TYPE_HASH)
        vechdr(tab) ^= (TYPE_HASH ^ TYPE_HASHX);
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

#endif

// A version of Lmkhash with just 2 arguments so you to not supply the
// (unused and hence irrelevant) third argument.

LispObject Lmkhash2(LispObject nil, LispObject a, LispObject b)
{   return Lmkhash(nil, 3, a, b, nil);
}

// This fragment takes a 64-bit number that is a power of 2 and
// finds its logarithm, ie the number of bits that 1 needs to be shifted
// left to yield it. The function will return garbage if its input is
// not a power of 2.
//
// This table works because it is of length 67 and that is a prime, so
// the sequence 2^i mod 67 cycles through 1 .. 66 as I runs from 0 to 65,
// and 2^66 = 2^0 (mod 67). To help show this I have annotated the items at
// offsets 1, 2, 4, 8, 16, 32 and 64.

static unsigned char intlog2_table[] =
{
    0,      0,/*1*/ 1,/*2*/ 39,     2,/*4*/ 15,     40,     23,
    3,/*8*/ 12,     16,     59,     41,     19,     24,     54,
    4,/*16*/0,      13,     10,     17,     62,     60,     28,
    42,     30,     20,     51,     25,     44,     55,     47,
    5,/*32*/32,     0,      38,     14,     22,     11,     58,
    18,     53,     63,     9,      61,     27,     29,     50,
    43,     46,     31,     37,     21,     57,     52,     8,
    26,     49,     45,     36,     56,     7,      48,     35,
    6,/*64*/34,     33
};

static inline int intlog2(uint64_t n)
{
    return intlog2_table[n % (sizeof(intlog2_table)/sizeof(intlog2_table[0]))];
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
    v1 = get_large_vector(size2, SPID_HASHEMPTY);
    errexit();
    push(v1);
    v2 = get_large_vector(size2, nil);
    errexitn(1);
    push(v2);
    v = getvector_init(7*CELL, nil);
    pop2(v1, v2);
    errexit();
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

static void set_hash_operations(LispObject tab)
{
    switch (elt(tab, HASH_FLAVOUR))
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
    h_shift = int_of_fixnum(elt(tab, HASH_SHIFT));
    h_table = elt(tab, HASH_KEYS);
    v_table = elt(tab, HASH_VALUES);
    if (elt(tab, HASH_MULTIPLIER) == C_nil)
        h_multiplier = HASH_DEFAULT_MULTIPLIER;
    else h_multiplier = (uint64_t)sixty_four_bits(elt(tab, HASH_MULTIPLIER));
}

static uint64_t hash_eq(LispObject key)
{
    return h_multiplier*(uint64_t)key;
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
                if (single_float_val(key) == 0.0) return 1 + h_multiplier;
                else return 2 + h_multiplier*intfloat32_t_val(key);
                break;
            default:
            case TYPE_DOUBLE_FLOAT:
                if (double_float_val(key) == 0.0) return 3 + h_multiplier;
                else return 4 + h_multiplier*intfloat64_t_val(key);
            case TYPE_LONG_FLOAT:
// Here I will leave +0.0 and -0.0 hashing differently! That is just
// laziness and needs fixing.
                r = 5 + h_multiplier*intfloat128_t_val0(key);
                return 6 + h_multiplier*(r + intfloat128_t_val1(key));
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
                {   r = 7 + h_multiplier*(bignum_digits(key)[n] + r);
                    if (n == 0) break;
                    n--;
                }
                return r;
            case TYPE_RATNUM:
            case TYPE_COMPLEX_NUM:
                r = hash_eql(numerator(key));
                return 8 + h_multiplier*r + hash_eql(denominator(key));
            default:
                return 9 + h_multiplier;  // unknown type of number?
        }
    }
// For non-numbers I hash as for EQ.
    else return h_multiplier*(uint64_t)key;
}

static uint64_t hash_cl_equal(LispObject key, bool descend)
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

uint64_t hash_equal(LispObject key)
//
// This function is the one used hashing things under the Standard Lisp
// version of EQUAL, which descends vectors but is still sensitive to
// case and which views different types of numbers as different. I will
// make it view displaced or fill-pointered vectors as equivalent to the
// corresponding simple vectors: I am pretty well obliged to do that for
// strings and bitvectors so it seems polite to do the same for general
// vectors (which are the only other ones I support!).
//
{   uint64_t r = 1, c;
    LispObject nil = C_nil, w;
    int type;
    size_t len, offset = 0;
    unsigned char *data;
    Header ha;
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

static uint64_t hash_equalp(LispObject key)
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

LispObject Lget_hash(LispObject nil, int nargs, ...)
{   int flavour = -1;
    va_list a;
    LispObject v, key, tab, dflt;
    size_t pos;
    argcheck(nargs, 3, "gethash");
    va_start(a, nargs);
    key = va_arg(a, LispObject);
    tab = va_arg(a, LispObject);
    dflt = va_arg(a, LispObject);
    va_end(a);
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
    {   if (type_of_header(vechdr(tab)) != TYPE_HASHX)
            return aerror1("gethash", tab);
        push2(key, dflt);
        set_hash_operations(tab);
// Here I have a table that at some stage had all fitted into the table, and
// I am not adding new data. I need to rehash it because garbage collection
// may have shuffled memory and so hash values that are based on memory
// addresses can be out of date. But I really expect that I will be able
// to find a hash-multiplier that will let me fit all the data back in.
// Well I suppose that may not be 100% guaranteed possible! It could be
// that the table was just on the cusp of needing to be expanded and with
// previous memory layout it had been truly lucky in terms of all fitting in.
// Now garbage collection has messed things up it might be in a much nastier
// state and expansion may be the only realistic option. OK I will allow
// for that!
        for (;;)
        {   if (hash_rehash(tab)) break; // OK now
            update_multiplier();
            if (hash_rehash(tab)) break; // OK with new multiplier
            update_multiplier();
            if (hash_rehash(tab)) break; // One more try before I enlarge.
// Now I should double the table size. I make hash_double_size double the
// table size but leave the keys in incorrect locations, and so after it has
// been called I need to use rehash() to restore them. But note that the
// memory allocation might fail, and in that case I will have to give up.
            push(tab);
            hash_double_size(tab);
            pop(tab);
            errexitn(2);
        }
        pop2(dflt, key);
        errexit();
    }
// Extract details of the (possibly updated) hash table. This will leave
// hash calculation and value checking set up nicely.
    set_hash_operations(tab);
    pos = hash_lookup(key);
    if (pos == NOT_PRESENT)
    {   mv_2 = nil;
        return nvalues(dflt, 2);
    }
    mv_2 = lisp_true;
    return nvalues(getv_large_vector(elt(tab, HASH_VALUES), pos), 2);
}

LispObject Lmaphash(LispObject nil, LispObject fn, LispObject tab)
//
// I should consider what happens if there is a garbage collection while
// I am performing this scan of the hash table. Well the table contents are
// not rearranged by garnage collection - the main thing that happens is that
// the table is re-tagged from TYPE_HASH to TYPE_HASHX. So I believe that
// provided nobody tries either lookup or set operations on the table I
// will be OK.
//
{   int32_t size, i;
    LispObject v, v1;
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("maphash", tab);
    v = elt(tab, HASH_KEYS);
    v1 = elt(tab, HASH_VALUES);
    size = words_in_large_vector(v);
    for (i=0; i<size; i++)
    {   LispObject key = getv_large_vector(v, i),
                   val = getv_large_vector(v1, i);
        if (key == SPID_HASHEMPTY || key == SPID_HASHTOMB) continue;
        push3(v, v1, fn);
        Lapply2(nil, 3, fn, key, val);
        pop3(fn, v1, v);
        errexit();
    }
    return onevalue(nil);
}

LispObject Lhashcontents(LispObject nil, LispObject tab)
//
// As for maphash I believe that garbage collection is pretty benign here.
//
{   size_t size, i;
    LispObject v, v1, r;
    if (!is_vector(tab) ||
        (type_of_header(vechdr(tab)) != TYPE_HASH &&
         type_of_header(vechdr(tab)) != TYPE_HASHX))
        return aerror1("hashcontents", tab);
    v = elt(tab, HASH_KEYS);
    v1 = elt(tab, HASH_VALUES);
    size = words_in_large_vector(v);
    r = nil;
    for (i=0; i<size; i++)
    {   LispObject key = getv_large_vector(v, i),
                   val = getv_large_vector(v1, i);
        if (key == SPID_HASHEMPTY || key == SPID_HASHTOMB) continue;
        push2(v, v1);
        r = acons(key, val, r);
        pop2(v1, v);
        errexit();
    }
// The ordering of items in the result a-list is unpredictable.
// That is probably quite reasonable.
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
            isize = words_in_large_vector(v);
            for (i=0; i<isize; i+=2)
            {   LispObject key1 = ht_elt(v, i+1), val1 = ht_elt(v, i+2);
                if (key1 == SPID_HASHEMPTY || key1 == SPID_HASHTOMB) continue;
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
{   push2(key, tab);
    Lget_hash(nil, 3, key, tab, nil);
    pop2(tab, key);
    errexit();
    if (mv_2 == nil) return onevalue(nil);
    else
    {   ht_elt(work_0, hashoffset+1) = SPID_HASHTOMB;
        ht_elt(work_0, hashoffset+2) = SPID_HASHEMPTY;
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
    size_t size, i;
    if (!is_vector(tab) ||
        (type_of_header(vechdr(tab)) != TYPE_HASH &&
         type_of_header(vechdr(tab)) != TYPE_HASHX))
        return aerror1("clrhash", tab);
    elt(tab, 1) = fixnum_of_int(0);
    v = elt(tab, HASH_KEYS);
    size = words_in_large_vector(v);
    for (i=0; i<size; i++) putv_large_vector(v, i, SPID_HASHEMPTY);
    v = elt(tab, HASH_VALUES);
    size = words_in_large_vector(v);
    for (i=0; i<size; i++) putv_large_vector(v, i, C_nil);
    return tab;
}

LispObject Lclr_hash_0(LispObject nil, int nargs, ...)
{   argcheck(nargs, 0, "clrhash");
    return Lclr_hash(nil, sys_hash_table);
}

// (sxhash key) is supposed to return a positive fixnum such that any
// two items that are EQUAL in the Common Lisp sense will yield the same
// result. It has further constraints that seem to suggest that the
// values must be consistent from run to run and across a range of
// changes to the environment. I believe that I can get away with
// hashing numbers based on their values, strings on the characters that
// make them up, symbols on their print-name (but I am NOT allowed to
// pay attention to package information) and almost everything else can
// just return a code based on the type of the object. The result is
// obliged to be a positive fixnum. All this means that it is going to be
// only slightly related to the hash functions used with the main hashing
// scheme here -- where cooperation with the garbage collector can trigger
// rehashing when items move in memory.

LispObject Lsxhash(LispObject nil, LispObject key)
{
//
// Does not descend vectors
//
    uint64_t h = hash_cl_equal(key, true);
    errexit();
    h = h ^ (h >> 32);
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Leqlhash(LispObject nil, LispObject key)
{
//
// Only handles atoms
//
    uint64_t h = hash_cl_equal(key, false);
    errexit();
    h = h ^ (h >> 32);
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Lequalhash(LispObject nil, LispObject key)
{
//
// Descends vectors as the Standard Lisp EQUAL function does.
//
    uint64_t h = hash_equal(key);
    errexit();
    h = h ^ (h >> 32);
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Lhash_flavour(LispObject nil, LispObject tab)
{   LispObject v,flavour = fixnum_of_int(-1);

    if (!is_vector(tab) ||
        (type_of_header(vechdr(tab)) != TYPE_HASH &&
         type_of_header(vechdr(tab)) != TYPE_HASHX))
        return aerror1("hashtable-flavour", tab);
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
    {   if (ht(i) != SPID_HASHEMPTY && ht(i) != SPID_HASHTOMB)
        {   int j = instrumented_lookup(ht(i)); // should be there
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
