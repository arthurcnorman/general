// c3.cpp

#include <cstdint>
#include <cstring>
#include <iostream>
#include <utility>
#include <algorithm>
#include <initializer_list>



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


// Unicode has 2543 combining characters plus a number of variation
// selectors. I will have a list of all the ones that I am prepared to
// support, and that list will be less than 4096 entried long. The
// result is that I can use a 12-bit number to identify such a codepoint.
// The full range of Unicode goes up to U+10ffff but all the codes above
// U+fffff are "provate use" and so will not arise in any list of
// character names I have here. So I can pack a base character together
// with a possible combining mark into 12+20 bits, i.e. a 32-bit integer.
//
// I only use this packing when I am looking up names from my fixed
// tables, and when I find a combined mark I will need to convert from
// this 12+20 representation into the reference to a cchar_t that I use
// elsewhere. And in the way that the user is entitles to define their
// own abbreviations I will handle composite marks in a different way.
// That will allow the user to specify more than one dioacritical and
// use codepoints in the private use areas without limit.

// This provides something that behaves rather like
// unordered_map<const char*, uint32_t> but has the special feature
// that I can initialise it as a constexpr and have a static map
// of this form with everything set up statically as part of my
// executable. Furthermore checking if a C-style string is present
// and retrieving the associated integer is done with at most 3
// string comparisons even in the worst case.

// It also provides a multimap from uint32_t back to a list or any or
// all strings that would return the given integer when fed into
// this table. I.e. thus is really a map from (C) strings to integers
// and a multimap forming an inverse of that.
//
// The maps both ways are implemented using Cuckoo Hashing.

template<size_t N>
class CharNameMap
{
public:
// A cuckoo hash table can usually work well when its load-factor is
// up to almost 90%. Here I require the template parameter N to be
// such that table building succeeds, and this will require that it
// such that 3*N is somewhat greater than the number of items that are
// to be recorded.

// I will be finding roughly smallest values of N experimentally, because
// when I have build an instance here the OK member reports on whether the
// table was properly built (and maxprobes gives some indication about
// how close to failure I was - values of maxprobes over say 100 suggest I
// am pretty close to an optimum.

    static const constexpr size_t M =
        ([]()
        {   size_t p = N | 1;
            while (p%3 == 0 ||
                p%5 == 0 ||
                p%7 == 0 ||
                p%11 == 0 ||
                p%13 == 0 ||
                p%17 == 0) p += 2; 
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
// to short integers and size_t values, where the size_t items are indexes
// into a table of strings and the short integers are the sizes of blocks
// within that final table.

    uint32_t    intkey[3][M] = {-1U};
    uint32_t    intval[3][M] = {0};
    const char* names[3*M]   = {nullptr};

    std::uint64_t hash_multiplier = 0x9e3779b97f4a7c13;
    bool OK1 = true;
    bool OK2 = true;
    size_t count = 0;        // Number of items stored in the table.
    size_t icount = 0;
    size_t maxprobes = 0;    // Max probes used in any insertion.

// Construct a map from an initialiser list.

    constexpr CharNameMap(std::initializer_list<
                            std::pair<std::uint32_t, const char*>> ss)
    {   for (int n=0; n<10; n++)
// I will first initialise the table to be empty.
        {   count = icount = 0;
            maxprobes = 0;
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
                    names[count++] = s.second;
                }
            }
            if (OK1) break;
// It is possible that an unlucky hash function leads to early failure.
// If that happens scramble the hash multiplier a bit and try again.
            hash_multiplier = (hash_multiplier*hash_multiplier*1234567);
            hash_multiplier = (hash_multiplier<<32) + (hash_multiplier>>32);
        }
// I now have the hash table from names to codes set up and I can thus
// call lookup(). I also have all the strings I know about listed in
// names[]. I want to sort those based on the code they map onto:
        std::sort(std::begin(names), std::end(names),
            [this](const char* a, const char* b)
                  {   return a == nullptr ? false :
                             b == nullptr ? true :
                             lookup(a) < lookup(b); });
// Now I have a table or names sorted by the code, so that in particular
// if multiple names all correspond to the same code then they will be
// together. So I want to scan that table and identify each block. Suppose
// a block of k names starts at position p in the table and all those
// correspond to codepoint c. I will insert a record in the intkey/intval
// table that maps c onto a tuple {k, p}. Well I will pack this tuple in
// a single uint32_t using 12 bits for k and 20 for p. That allows for up to
// about a million names (way more that I have) and 4000 aliases (again
// extremely generous).
        size_t p = 0;
        while (p < 3*M && names[p] != nullptr && OK2)
        {   int32_t c = lookup(names[p]);
            int k = 1;
            while (names[p+k] != nullptr &&
                   lookup(names[p+k]) == c) k++;
            insert(c, (k<<20) | p);
            icount++;
            p += k;
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

    constexpr void insert(const char* k, uint32_t v)
    {   size_t probes = 0;
        for (size_t i=0;;i=(i+1)%3)
        {   uint64_t hv = hash1(k);
// I start with a 64-bit hash value (which is computed rather simply) then
// derive three smaller values from it. It would be good if they were all
// independent uniformly distributed. Or close enough to that to work
// for me.
            size_t h[3] = {  hv % M,
                             (hv/M) % M,
                             (hv/(M*M)) % M};
            probes++;
            if (probes > maxprobes) maxprobes = probes;
// If I find myself using 200 probes I will assume that the table is
// too full or the hash function is unsatisfactory and give up on this
// pass of table building..
            if (probes > 1000)
            {   OK1 = false;
                return;
            }
// If find either an empty space of one where the key I am inserting is
// in fact already present I will just use that slot. Well here I will
// check all three potential places that this key could go.
            for (int j=0; j<3; j++)
            {   if (key[j][h[j]] == nullptr ||
                   strequal(key[j][h[j]], k))
                {   key[j][h[j]] = k;
                    val[j][h[j]] = v;
                    return;
                }
            }
// Eject whatever was there before and I will then attempt to insert
// it using the next of its hash keys.
            std::swap(k, key[i][h[i]]);
            std::swap(v, val[i][h[i]]);
        }
    }

    constexpr uint64_t hash1(const char* s) const
    {   uint64_t r = 1;
        while (*s != 0)
            r = hash_multiplier*r + *s++;
        return r;
    }

    constexpr uint64_t hash2(uint32_t k)
    {   return hash_multiplier*k*(k+1);
    }

    constexpr void insert(uint32_t k, uint32_t v)
    {   size_t probes = 0;
        for (size_t i=0;;i=(i+1)%3)
        {   uint64_t hv = hash2(k);
            size_t h[3] = {  hv % M,
                             (hv/M) % M,
                             (hv/(M*M)) % M};
            probes++;
            if (probes > maxprobes) maxprobes = probes;
// If I find myself using 1000 probes I will assume that the table is
// too full or the hash function is unsatisfactory and give up on this
// pass of table building..
            if (probes > 1000)
            {   OK2 = false;
                return;
            }
// If find either an empty space of one where the key I am inserting is
// in fact already present I will just use that slot.
            if (intkey[i][h[i]] == -1U ||
                intkey[i][h[i]] == k)
            {   intkey[i][h[i]] = k;
                intval[i][h[i]] = v;
                return;
            }
// Eject whatever was there before and I will then attempt to insert
// it using the next of its hash keys.
            std::swap(k, intkey[i][h[i]]);
            std::swap(v, intval[i][h[i]]);
        }
    }

// lookup will return -1U if the string is not present, and as can be
// seen does on "expensive" hash calculation and at most 3 probes.
    constexpr uint32_t lookup(const char* k) const
    {   uint64_t hv = hash1(k);
        size_t h1 = hv % M;
        if (key[0][h1] != nullptr &&
            strequal(key[0][h1], k)) return val[0][h1];
        size_t h2 = (hv/M) % M;
        if (key[1][h2] != nullptr &&
            strequal(key[1][h2], k)) return val[1][h2];
        size_t h3 = (hv/(M*M)) % M;
        if (key[2][h3] != nullptr &&
            strequal(key[2][h3], k)) return val[2][h3];
        return -1;
    }

    constexpr uint32_t lookup(uint32_t k) const
    {   uint64_t hv = hash2(k);
        size_t h1 = hv % M;
        if (intkey[0][h1] == k) return val[0][h1];
        size_t h2 = (hv/M) % M;
        if (intkey[1][h2] == k) return val[1][h2];
        size_t h3 = (hv/(M*M)) % M;
        if (intkey[2][h3] == k) return val[2][h3];
        return -1;
    }

};

// The template parameter controls the size of the hash tables I used here
// and I have to set it manually based on experiment. That process can work
// by compiling with SIZE defined to some number and then a static_assert
// will give compilation failure if that number is too small. A good place
// to start would be with say 1.2 times the number of table entries that
// are to be used. The constexpr work involved here is significant and
// so compilation with either g++ or clang++ takes quite a long time,
// and it is necessary to set -fconstexpr-steps=0 for clang++ or
// -fconstexpr-ops-limit=100000000 for g++, but the memory use during
// compilation does not seem to be extreme.


#ifdef SIZE
constexpr CharNameMap<SIZE> codepoints =
#else
constexpr CharNameMap<23000> codepoints =
#endif
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

}; // end of the name-table, which contains over 40000 entries.

//static_assert(codepoints.OK1, "Configured table size is too small");

static_warn(codepoints.OK1, "Failed to build main character table");
static_warn(codepoints.OK2, "Failed to build secondary character table");

int main()
{   if (codepoints.OK1 && codepoints.OK2)
        std::cout << "*** Success ***\n";
    std::cout << "Prime = " << codepoints.M
              << " total table size = " << 3*codepoints.M << "\n"
              << "  count = " << codepoints.count
              << "  load = " << ((double)codepoints.count / (3*codepoints.M))
              << "  OK1 = " << codepoints.OK1 << "\n"
              << "  icount = " << codepoints.icount
              << "  iload = " << ((double)codepoints.icount / (3*codepoints.M))
              << "  OK2 = " << codepoints.OK2 << "\n"
              << "  maxprobes = " << codepoints.maxprobes << "\n";
    return 0;
}

// end of c3.cpp
