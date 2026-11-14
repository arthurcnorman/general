
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
// When I map from a name to a codepoint the codepoint will use the low
// 21 bits of the uint32_t result I hand back. That is because the largest
// valid codepoint is 0x0010ffff. There are two extra bits of information
// I pack into the higher bits.
// If the character concerned is a combining one (or a variant selector)
// I will set the top bit 0x80000000. Knowing that classification is
// used so that when I get a simple character followed by a combining mark
// I pack the two together in an ncurses "complex character" cchar_t
// structure.
// The list of HTML entities defined a modest number of names where the
// Unicode equivalent is to be a character and a combining mark. Only a
// few distinct marks are used there, So I record thise cases with the
// base character in the low 21 bits and one of the following in some
// higher bits:
#define macron_below        0x01000000  // U+0331
#define double_low_line     0x02000000  // U+0333
#define long_solidus        0x03000000  // U+0338
#define long_vertical_bar   0x04000000  // U+20d2
#define reverse_solidus     0x05000000  // U+20e5
#define variation           0x06000000  // U+fe00

template<size_t N>
class CuckooMap
{
public:
// A cuckoo hash table can usually work well when its load-factor is
// up to around 90%. Here I require the template parameter N to be
// about the number of entries that will be inserted into the table.
// Internally the table will use 3 vectors each of size M, so if N is
// the number of entries I will set up a table with N/0.9 slots, and that
// would make M=N/2.7. There is of course uncertainty in all this
// and the value of N will need to be adjusted experimentally until the
// code manages to set up tables properly. Success is flagged by a boolean
// value OK1.
// I will also like M to be prime. Doing so makes taking the remainder
// by M a bit more liable to leave uniform distributions maybe, so the
// value as derived above is rounded up to the next prime.

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
// The integer values returned by hashing are treated as having 20 low bits
// that are an index into the tables of names (I will not have
// a million names), 1 high bits that are a count for when several different
// names are used for a single codepoint, and one bit that tags whether the
// code is for a combining mark. This all behaves like a multi-map.

    uint32_t    intkey[3][M] = {-1U};
    uint32_t    intval[3][M] = {0};
    const char* names[3*M]   = {nullptr};

    std::uint64_t hash_multiplier = 0x9e3779b97f4a7c13;
    bool OK1 = true, OK2 = true;
    size_t table_capacity = 3*M;
    size_t count_of_stored = 0; // Number of items stored in the table.
    size_t count_of_intstored = 0;
    size_t max_probes = 0;      // Max probes used in any insertion.
    size_t max_intprobes = 0;

// Construct a map from an initialiser list.

    constexpr CuckooMap(std::initializer_list<
                            std::pair<std::uint32_t, const char*>> ss)
    {
// I will first initialise the table to be empty.
        count_of_stored = 0;
        max_probes = max_intprobes = 0;
        OK1 = OK2 = true;
        for (size_t i=0; i<3; i++)
        for (size_t j=0; j<M; j++)
        {   key[i][j] = nullptr;
            val[i][j] = -1;
            intkey[i][j] = -1U;
            intval[i][j] = -1U;
        }
        for (size_t i=0; i<3*M; i++)
            names[i] = nullptr;
// Then insert all the data from the initializer_list.
        for (auto s : ss)
        {   if (OK1)
            {   insert(s.second, s.first);
                names[count_of_stored++] = s.second;
            }
        }
// It could be that with bad luck and the particular hash function in
// use that table construction would fail. For a general implementation of
// cuckoo hashing one responds to that my altering the hash function (ie by
// changing hash_multiplier) and re-trying. Here I will just expect that
// I handle such issues by using the next greater table size. Since I have
// fixed data that I am working with that seems OK.
//
// I sort the table of names using their codepoint as key. The exzact
// ordering here is uuunimportant. What matters is that when several names
// all refer to a single codepoint that they end up clustered together.
        std::sort(std::begin(names), std::end(names),
                  [this](const char* a, const char* b)
                  {   return a == nullptr ? false :
                             b == nullptr ? true :
                             lookup(a) < lookup(b);
                  });
// Now I have a table or names sorted by the code, so that in particular
// if multiple names all correspond to the same code then they will be
// together. So I want to scan that table and identify each block. Suppose
// a block of k names starts at position p in the table and all those
// correspond to codepoint c. I will insert a record in the intkey/intval
// table that maps c onto a tuple {k, p}. Well I will pack this tuple in
// a single uint32_t using 11 bits for k and 20 for p. That allows for up to
// about a million names (way more that I have) and 2048 aliases (again
// extremely generous). The top bit tags whether the code is a combining
// mark.
        size_t p = 0;
        while (p < 3*M && names[p] != nullptr && OK2)
        {   int32_t c = lookup(names[p]);     // Get codepoint
            int k = 1;
            while (names[p+k] != nullptr &&
                   lookup(names[p+k]) == c) k++;
// The codepoint c that I retrieve could be one witk the markers that
// indicate that the name was one of the HTML emity names calling for
// use of combining characters. And the top bit will be set if the
// code is itself combining. Assemble the value I want to record.
            uint32_t v = (c & 0x80000000) | (k<<20) | p;
            insert(c & 0x7fffffff, v);
// Note that with this I can check is a codepoint is combining by just
// doing a lookup in this table and inspecting the yop bit.
            count_of_intstored++;
            p += k;    // skip past the block of names with this codepoint.
        }
    }

    constexpr bool strequal(const char* a, const char* b) const
    {   int ca = 0, cb = 0;
        while ((ca = *a++) != 0)
        {   if (ca != *b++) return false;
        }
        return *b == 0;
    }

    constexpr uint64_t hash1(const char* s) const
    {   uint64_t r = 1;
        while (*s != 0)
        {   r = 257*r + *s++;
        }
        return r;
    }        

    constexpr void insert(const char* k, uint32_t v)
    {   size_t probes = 0;
        for (size_t i=0;;i=(i+1)%3)
        {   uint64_t hv = hash1(k);
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
// seen does at most 3 probes.
    constexpr uint32_t lookup(const char* k) const
    {   uint64_t hv = hash1(k);
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

// Almost exactly the same process is now here for use with integer
// rather than string keys.
    constexpr void insert(uint32_t k, uint32_t v)
    {   size_t probes = 0;
        for (size_t i=0;;i=(i+1)%3)
        {   uint64_t hv = k;
            hv = hv*hv*k;
            size_t h[3] = {  hv % M,
                             (hv/M) % M,
                             (hv/(M*M)) % M};
            probes++;
            if (probes > max_intprobes) max_intprobes = probes;
            const size_t limit = 1000;
            if (probes > limit)
            {   OK2 = false;
                return;
            }
            if (intkey[i][h[i]] == -1 ||
                intkey[i][h[i]] == k)
            {   intkey[i][h[i]] = k;
                intval[i][h[i]] = v;
                return;
            }
            std::swap(k, intkey[i][h[i]]);
            std::swap(v, intval[i][h[i]]);
        }
    }

    constexpr uint32_t lookup(uint32_t k) const
    {   uint64_t hv = k;
        hv=hv*hv*k;
        size_t h1 = hv % M;
        if (intkey[0][h1] == k) return intval[0][h1];
        size_t h2 = (hv/M) % M;
        if (intkey[1][h2] == k) return intval[1][h2];
        size_t h3 = (hv/(M*M)) % M;
        if (intkey[2][h3] == k) return intval[2][h3];
        return -1;
    }
};

// The template parameter here has to be selected so that the hashing
// succeeds. If it does not then compile-time warnings are issued.
// If any of the *.names files are changed the value here may need
// to be updated. And in extreme cases it could ne beneficial to alter
// the hash functions used...
//
// It can be expected that with the smallest viable value used here that
// the main hash table will have an occupancy of close to 90%.

#ifndef SIZE
#define SIZE 46990
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
{   if (codepoints.OK1) std::cout << "*** Forward table set up properly ***\n";
    if (codepoints.OK2) std::cout << "*** Backward able set up properly ***\n";
    std::cout << "Table capacity=" << codepoints.table_capacity
              << "  count_of_stored=" << codepoints.count_of_stored
              << "  load=" << (100.0*codepoints.count_of_stored/codepoints.table_capacity)
              << "  count_of_stored=" << codepoints.count_of_stored
              << "  load=" << (100.0*codepoints.count_of_stored/codepoints.table_capacity) << "\n"
              << "  max probes=" << codepoints.max_probes
              << "  count_of_intstored=" << codepoints.count_of_intstored
              << "  intload=" << (100.0*codepoints.count_of_intstored/codepoints.table_capacity)
              << "  max intprobes=" << codepoints.max_intprobes << "\n";
    return 0;
}

// end of cuckoo.cpp

