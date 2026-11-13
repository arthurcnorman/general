
#include <cstdint>
#include <cstring>
#include <iostream>
#include <utility>
#include <initializer_list>

// To advise me (at compile time) whether the hash tables I use here
// have been set up I want a "static_warn" that should behave in a
// way rather like "static_assert" save that it generates a warning
// not an error. C++ does not provide this. However [[deprecated]] provides
// a way of triggering a warning and gives greater certainty of that
// treatment than other dubious code styles, so here is something that
// shows a message in relevant cases. It also shows another couple
// of unwanted messages, but that is survivable. The slightly ugly layout
// in the macro definition is an attempt to make the disgnostics as
// tidy as I can with both g++ and clang++. 

template<bool condition>
struct warning{};
template<> struct [[deprecated]]
    warning<false>
        {constexpr warning() = default;};

#define preprocessor_concatenate(a, b) a ## b
#define preprocessor_concatenate1(a, b) preprocessor_concatenate(a, b)

#define static_warn(condition, ...) \
bool preprocessor_concatenate1(warfningbool_, __COUNTER__) = \
(warning \
<condition>(), false);


// This provides something that behaves rather like
// unordered_map<const char*, uint32_t> but has the special feature
// that I can initialise it as a constexpr and have a static map
// of this form with everything set up statically as part of my
// executable. Furthermore checking if a C-style string is present
// and retrieving the associated integer is done with at most 3
// string comparisons even in the worst case, and table occupancy is
// excellent so there is not too much wasted space.

// I will also want a multimap from uint32_t back to a list or any or
// all strings that would return the given integer when fed into
// this table. I.e. I really want this to be a map from strings to
// integers and a multimap forming an inverse of that. So that sort
// of thing is built in as part of the compile-time constructed static
// data I set up.
//
// The map is implemented using Cuckoo Hashing.

template<size_t N>
class CuckooMap
{
public:
// A cuckoo hash table can usually work well when its load-factor is
// up to almost 90%. Here I require the template parameter N to be
// about the number of entries that will be inserted into the table.
// Internally the table will use 3 vectors each of size M, so if N is
// the number of entries I will set up a table with N/0.9 slots, and that
// would make M=N/2.7. There is of course uncertainty in all this
// and the value of N will need to be adjusted experimentally until the
// code manages to set up tables properly. Success is flagged by a boolean
// value OK1.
// I will also like M to be prime. Doing so makes taking the remainder
// by M a bit more liable to leave uniform distributions maybe.

    static const constexpr size_t M =
        ([]()
        {   size_t p = ((10*N)/27) | 1;
            for (;;)                      // Find the next prime.
            {   size_t i = 3;
                while (i*i < p && p%i != 0) i++; 
                if (i*i > p) return p;
                p += 2;
            }
            return p;
        })();

// Any input string that hashed to h0, h1 and h2 (3 notionally independent
// hash values) will be places at key[0][h0], key[1][h1] or key[2][h2].
    const char* key[3][M] = {nullptr};
    uint32_t    val[3][M] = {-1U};

// I then have a similary structured cuckoo hash table from uint32 keys
// to unt32_t values. and also a simple table of strings.
// The integer values returned by hashing are treated as having 24 low bits
// that are an index into the tables of names, and 8 bits at the top
// that are a count. When several names all refer to the same codepoint
// (ag the names "alpha" and "greek_small_letter_alpha" both refer to the
// same codepoint) they will be present in adjacent locations in the
// name-table (that vector is sorted first by codepoint and then
// alphabetically) and given a codepoint the hash table retrieves the
// index of the first and the count of how many there are. So it is
// behaving like a multi-map.

    uint32_t    intkey[3][M] = {-1U};
    uint32_t    intval[3][M] = {0};
    const char* names[3*M]   = {nullptr};

    std::uint64_t hash_multiplier = 0x9e3779b97f4a7c13;
    bool OK1 = true, OK2 = true;
    size_t table_capacity = 3*M;
    size_t count_of_stored = 0; // Number of items stored in the table.
    size_t max_probes = 0;      // Max probes used in any insertion.

// Construct a map from an initialiser list.

    constexpr CuckooMap(std::initializer_list<
                            std::pair<std::uint32_t, const char*>> ss)
    {   for (int n=0; n<10; n++)
// I will first initialise the table to be empty.
        {   count_of_stored = 0;
            max_probes = 0;
            OK1 = true;
            for (size_t i=0; i<3; i++)
            for (size_t j=0; j<M; j++)
            {   key[i][j] = nullptr;
                val[i][j] = -1;
            }
// Then insert all the data from the initializer_list.
            for (auto s : ss)
            {   if (OK1)
                {   insert(s.second, s.first);
                    count_of_stored++;
                }
            }
            if (OK1) break;
// It is possible that an unlucky hash function leads to early failure.
// If that happens scramble the hash multiplier a bit and try again.
            hash_multiplier = (hash_multiplier*hash_multiplier*1234567);
            hash_multiplier = (hash_multiplier<<32) + (hash_multiplier>>32);
        }
    }

    constexpr bool strequal(const char* a, const char* b) const
    {   int ca = 0, cb = 0;
        while ((ca = *a++) != 0)
        {   if ((cb = *b++) == 0) return true;
            else if (ca != cb) return false;
        }
        return *b == 0;
    }

    constexpr uint64_t hash(const char* s) const
    {   uint64_t r = 1;
        while (*s != 0)
        {   r = 257*r + *s++;
        }
        return r;
    }        

    constexpr void insert(const char* k, uint32_t v)
    {   size_t probes = 0;
        for (size_t i=0;;i=(i+1)%3)
        {   uint64_t hv = hash(k);
// I start with a 64-bit hash value (which is computed rather simply) then
// derive three smaller values from it. It would be good if they were all
// independent uniformly distributed. Or close enough to that to work
// for me.
            size_t h[3] = {  hv % M,
                             ((hv<<20) | (hv>>44)) % M,
                             ((hv<<40) | (hv>>24)) % M};
            probes++;
            if (probes > max_probes) max_probes = probes;
            const size_t limit = 1000;
// If I find myself using limit probes I will assume that the table is
// too full or the hash function is unsatisfactory and give up on this
// pass of table building..
            if (probes > limit)
            {   OK1 = false;
                return;
            }
// If find either an empty space of one where the key I am inserting is
// in fact already present I will just use that slot.
            if (key[i][h[i]] == nullptr ||
                strequal(key[i][h[i]], k))
            {   key[i][h[i]] = k;
                val[i][h[i]] = v;
                return;
            }
// Eject whatever was there before and I will then attempt to insert
// it using the next of its hash keys.
            std::swap(k, key[i][h[i]]);
            std::swap(v, val[i][h[i]]);
        }
    }

// lookup will return -1U if the string is not present, and as can be
// seen does on "expensive" hash calculation and at most 3 probes.
    uint32_t lookup(const char* k) const
    {   uint64_t hv = hash(k);
        size_t h1 = hv % M;
        if (key[0][h1] != nullptr &&
            std::strcmp(key[0][h1], k) == 0) return val[0][h1];
        size_t h2 = ((hv<<20) | (hv>>44)) % M;
        if (key[1][h2] != nullptr &&
            std::strcmp(key[1][h2], k) == 0) return val[1][h2];
        size_t h3 = ((hv<<40) | (hv>>24)) % M;
        if (key[2][h3] != nullptr &&
            std::strcmp(key[2][h3], k) == 0) return val[2][h3];
        return -1;
    }
};

// The parameter for the templete here need to be a little larger
// than the number of items to be stored.

#ifndef SIZE
#define SIZE 45933   // found by experiment!
#endif

constexpr CuckooMap<SIZE> codepoints =
{

// I put various sections of the code table in separate files that
// reflect their sources, Each file contains lines that are of the
// form
//     {numeric-codepoint, "string that names the character"},


// Name for symbols that I introduce. Many of these are very short
// abbreviations including things like "c#," that translates into
// c-cedilla. ">=" for a single character greater-than-or-equal mark
// and "|R" for the double struck letter often used to denote the
// real numbers.
#include "my.names"

// There is an official list of html entities that are used as in
// "&omega;" within html documents. I list them all here. Note that
// a fairly modest number of them use combining characters in their
// transliteration to Unicode. A concrete example is &NotLessLess;
// which expands into &Lt; overprinter with a long vertical bar. I use
// a non-standard coding for such combinations in this table and sort
// things out when I retrieve the data. I put in the plain names here
// without leading "&" or trailing ";".
#include "html.names"

// TeX and LaTeX define a great ment symbols used as in "\beta". I am
// not putting in a full set of these bacause at present I do not have
// a sensible list of TeX names and their unicode equivalents to work
// from. So what is here for now is a short placeholder. The names I
// record do not have and initial "\".
#include "tex.names"

// Adobe offer a list of character name that they recommend for users.
// They have a longer list that includes names they perhaps think are
// historical or less frequently used, but I am only using their shorter
// one here.
#include "adobe.names"

// The Unicode Consortium publishes a list of character names and the
// codepoints they refer to. The names they give are spelt in capital
// letters as phrases with blanks between the words. For use here I render
// them in lower case with underscores. I probably do not thing any
// reasonable person will want to render characters by typing in the
// full long unicode name. but if one comes across a document that
// uses codes not rendered well by the font you are using it may be
// useful to be able to expand U+1f60e into "smiling_face_with_sunglasses"
// and thereby make some sense of it.
#include "unicode.names"

// I want special treatment for combining marks (and I am including
// variant selectors here) because they need special treatment for
// transmission to ncurses. I map these character names onto a code
// with its top bit set. By making this list the last one loaded it
// can override the plain definition that "unicode,names" had provided
// for these cases! So this "#include" MUST come last.
#include "combining.names"

};

static_warn(codepoints.OK1, "Main mapping from names to codempoints failed");
static_warn(codepoints.OK2, "Multimap from codepoints to names failed");

int main()
{   if (codepoints.OK1) std::cout << "*** Table set up properly ***\n";
    std::cout << "Table capacity=" << codepoints.table_capacity
              << "  count_of_stored=" << codepoints.count_of_stored
              << "  load=" << (100.0*codepoints.count_of_stored/codepoints.table_capacity)
              << "  max probes=" << codepoints.max_probes << "\n";
    return 0;
}

// end of cuckoo.cpp
