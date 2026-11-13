
#include <cstdint>
#include <cstring>
#include <iostream>
#include <utility>
#include <initializer_list>

// This provides something that behaves rather like
// unordered_map<const char*, uint32_t> but has the special feature
// that I can initialise it as a constexpr and have a static map
// of this form with everything set up statically as part of my
// executable. Furthermore checking if a C-style string is present
// and retrieving the associated integer is done with at most 3
// string comparisons even in the worst case. 

// I will also want a multimap from uint32_t back to a list or any or
// all strings that would return the given integer when fed into
// this table. I.e. I really want this to be a map from strings to
// integers and a multimap forming an inverse of that.
//
// The map is implemented using Cuckoo Hashing.

template<size_t N>
class CuckooMap
{
public:
// A cuckoo hash table can usually work well when its load-factor is
// up to almost 90%. Here I require the template parameter N to be
// about the number of entries that will be inserted into the table.
// Internally the table will use 3 vectors each of size M, so I
// want N to be around (9/10)*(2*M). I will also like M to be prime
// even though I do not believe that is vital here. Doing so makes
// taking the remainder by M a bit more liable to leave uniform
// distributions maybe.

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

    std::uint64_t hash_multiplier = 0x9e3779b97f4a7c13;
    bool OK = true;
    size_t count = 0;        // Number of items stored in the table.
    size_t maxprobes = 0;    // Max probes used in any insertion.

// Construct a map from an initialiser list.

    constexpr CuckooMap(std::initializer_list<
                            std::pair<std::uint32_t, const char*>> ss)
    {   for (int n=0; n<10; n++)
// I will first initialise the table to be empty.
        {   count = 0;
            maxprobes = 0;
            OK = true;
            for (size_t i=0; i<3; i++)
            for (size_t j=0; j<M; j++)
            {   key[i][j] = nullptr;
                val[i][j] = -1;
            }
// Then insert all the data from the initializer_list.
            for (auto s : ss)
            {   if (OK)
                {   insert(s.second, s.first);
                    count++;
                }
            }
            if (OK) break;
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
            if (probes > maxprobes) maxprobes = probes;
            const size_t limit = 1000;
// If I find myself using limit probes I will assume that the table is
// too full or the hash function is unsatisfactory and give up on this
// pass of table building..
            if (probes > limit)
            {   OK = false;
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

    constexpr uint64_t hash(const char* s) const
    {   uint64_t r = 1;
        while (*s != 0)
        {   r = 257*r + *s++;
        }
        return r;
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

#define ADOBE(a, b, c) {a, b} /* c */

#ifndef SIZE
#define SIZE 700
#endif

constexpr CuckooMap<SIZE> adobe =
{
    ADOBE(0x0041, "A",                      "LATIN CAPITAL LETTER A"),
    ADOBE(0x00C6, "AE",                     "LATIN CAPITAL LETTER AE"),
    ADOBE(0x01FC, "AEacute",                "LATIN CAPITAL LETTER AE WITH ACUTE"),
    ADOBE(0x00C1, "Aacute",                 "LATIN CAPITAL LETTER AWITH ACUTE"),
    ADOBE(0x0102, "Abreve",                 "LATIN CAPITAL LETTER AWITH BREVE"),
    ADOBE(0x00C2, "Acircumflex",            "LATIN CAPITAL LETTER AWITH CIRCUMFLEX"),
    ADOBE(0x00C4, "Adieresis",              "LATIN CAPITAL LETTER AWITH DIAERESIS"),
    ADOBE(0x00C0, "Agrave",                 "LATIN CAPITAL LETTER AWITH GRAVE"),
    ADOBE(0x0391, "Alpha",                  "GREEK CAPITAL LETTER ALPHA"),
    ADOBE(0x0386, "Alphatonos",             "GREEK CAPITAL LETTER ALPHA WITH TONOS"),
    ADOBE(0x0100, "Amacron",                "LATIN CAPITAL LETTER AWITH MACRON"),
    ADOBE(0x0104, "Aogonek",                "LATIN CAPITAL LETTER AWITH OGONEK"),
    ADOBE(0x00C5, "Aring",                  "LATIN CAPITAL LETTER AWITH RING ABOVE"),
    ADOBE(0x01FA, "Aringacute",             "LATIN CAPITAL LETTER AWITH RING ABOVE AND ACUTE"),
    ADOBE(0x00C3, "Atilde",                 "LATIN CAPITAL LETTER AWITH TILDE"),
    ADOBE(0x0042, "B",                      "LATIN CAPITAL LETTER B"),
    ADOBE(0x0392, "Beta",                   "GREEK CAPITAL LETTER BETA"),
    ADOBE(0x0043, "C",                      "LATIN CAPITAL LETTER C"),
    ADOBE(0x0106, "Cacute",                 "LATIN CAPITAL LETTER C WITH ACUTE"),
    ADOBE(0x010C, "Ccaron",                 "LATIN CAPITAL LETTER C WITH CARON"),
    ADOBE(0x00C7, "Ccedilla",               "LATIN CAPITAL LETTER C WITH CEDILLA"),
    ADOBE(0x0108, "Ccircumflex",            "LATIN CAPITAL LETTER C WITH CIRCUMFLEX"),
    ADOBE(0x010A, "Cdotaccent",             "LATIN CAPITAL LETTER C WITH DOT ABOVE"),
    ADOBE(0x03A7, "Chi",                    "GREEK CAPITAL LETTER CHI"),
    ADOBE(0x0044, "D",                      "LATIN CAPITAL LETTER D"),
    ADOBE(0x010E, "Dcaron",                 "LATIN CAPITAL LETTER D WITH CARON"),
    ADOBE(0x0110, "Dcroat",                 "LATIN CAPITAL LETTER D WITH STROKE"),
    ADOBE(0x2206, "Delta",                  "INCREMENT"),
    ADOBE(0x0045, "E",                      "LATIN CAPITAL LETTER E"),
    ADOBE(0x00C9, "Eacute",                 "LATIN CAPITAL LETTER E WITH ACUTE"),
    ADOBE(0x0114, "Ebreve",                 "LATIN CAPITAL LETTER E WITH BREVE"),
    ADOBE(0x011A, "Ecaron",                 "LATIN CAPITAL LETTER E WITH CARON"),
    ADOBE(0x00CA, "Ecircumflex",            "LATIN CAPITAL LETTER E WITH CIRCUMFLEX"),
    ADOBE(0x00CB, "Edieresis",              "LATIN CAPITAL LETTER E WITH DIAERESIS"),
    ADOBE(0x0116, "Edotaccent",             "LATIN CAPITAL LETTER E WITH DOT ABOVE"),
    ADOBE(0x00C8, "Egrave",                 "LATIN CAPITAL LETTER E WITH GRAVE"),
    ADOBE(0x0112, "Emacron",                "LATIN CAPITAL LETTER E WITH MACRON"),
    ADOBE(0x014A, "Eng",                    "LATIN CAPITAL LETTER ENG"),
    ADOBE(0x0118, "Eogonek",                "LATIN CAPITAL LETTER E WITH OGONEK"),
    ADOBE(0x0395, "Epsilon",                "GREEK CAPITAL LETTER EPSILON"),
    ADOBE(0x0388, "Epsilontonos",           "GREEK CAPITAL LETTER EPSILON WITH TONOS"),
    ADOBE(0x0397, "Eta",                    "GREEK CAPITAL LETTER ETA"),
    ADOBE(0x0389, "Etatonos",               "GREEK CAPITAL LETTER ETA WITH TONOS"),
    ADOBE(0x00D0, "Eth",                    "LATIN CAPITAL LETTER ETH"),
    ADOBE(0x20AC, "Euro",                   "EURO SIGN"),
    ADOBE(0x0046, "F",                      "LATIN CAPITAL LETTER F"),
    ADOBE(0x0047, "G",                      "LATIN CAPITAL LETTER G"),
    ADOBE(0x0393, "Gamma",                  "GREEK CAPITAL LETTER GAMMA"),
    ADOBE(0x011E, "Gbreve",                 "LATIN CAPITAL LETTER G WITH BREVE"),
    ADOBE(0x01E6, "Gcaron",                 "LATIN CAPITAL LETTER G WITH CARON"),
    ADOBE(0x011C, "Gcircumflex",            "LATIN CAPITAL LETTER G WITH CIRCUMFLEX"),
    ADOBE(0x0120, "Gdotaccent",             "LATIN CAPITAL LETTER G WITH DOT ABOVE"),
    ADOBE(0x0048, "H",                      "LATIN CAPITAL LETTER H"),
    ADOBE(0x25CF, "H18533",                 "BLACK CIRCLE"),
    ADOBE(0x25AA, "H18543",                 "BLACK SMALL SQUARE"),
    ADOBE(0x25AB, "H18551",                 "WHITE SMALL SQUARE"),
    ADOBE(0x25A1, "H22073",                 "WHITE SQUARE"),
    ADOBE(0x0126, "Hbar",                   "LATIN CAPITAL LETTER H WITH STROKE"),
    ADOBE(0x0124, "Hcircumflex",            "LATIN CAPITAL LETTER H WITH CIRCUMFLEX"),
    ADOBE(0x0049, "I",                      "LATIN CAPITAL LETTER I"),
    ADOBE(0x0132, "IJ",                     "LATIN CAPITAL LIGATURE IJ"),
    ADOBE(0x00CD, "Iacute",                 "LATIN CAPITAL LETTER I WITH ACUTE"),
    ADOBE(0x012C, "Ibreve",                 "LATIN CAPITAL LETTER I WITH BREVE"),
    ADOBE(0x00CE, "Icircumflex",            "LATIN CAPITAL LETTER I WITH CIRCUMFLEX"),
    ADOBE(0x00CF, "Idieresis",              "LATIN CAPITAL LETTER I WITH DIAERESIS"),
    ADOBE(0x0130, "Idotaccent",             "LATIN CAPITAL LETTER I WITH DOT ABOVE"),
    ADOBE(0x2111, "Ifraktur",               "BLACK-LETTER CAPITAL I"),
    ADOBE(0x00CC, "Igrave",                 "LATIN CAPITAL LETTER I WITH GRAVE"),
    ADOBE(0x012A, "Imacron",                "LATIN CAPITAL LETTER I WITH MACRON"),
    ADOBE(0x012E, "Iogonek",                "LATIN CAPITAL LETTER I WITH OGONEK"),
    ADOBE(0x0399, "Iota",                   "GREEK CAPITAL LETTER IOTA"),
    ADOBE(0x03AA, "Iotadieresis",           "GREEK CAPITAL LETTER IOTA WITH DIALYTIKA"),
    ADOBE(0x038A, "Iotatonos",              "GREEK CAPITAL LETTER IOTA WITH TONOS"),
    ADOBE(0x0128, "Itilde",                 "LATIN CAPITAL LETTER I WITH TILDE"),
    ADOBE(0x004A, "J",                      "LATIN CAPITAL LETTER J"),
    ADOBE(0x0134, "Jcircumflex",            "LATIN CAPITAL LETTER J WITH CIRCUMFLEX"),
    ADOBE(0x004B, "K",                      "LATIN CAPITAL LETTER K"),
    ADOBE(0x039A, "Kappa",                  "GREEK CAPITAL LETTER KAPPA"),
    ADOBE(0x004C, "",                       "LATIN CAPITAL LETTER "),
    ADOBE(0x0139, "Lacute",                 "LATIN CAPITAL LETTER L WITH ACUTE"),
    ADOBE(0x039B, "Lambda",                 "GREEK CAPITAL LETTER LAMDA"),
    ADOBE(0x013D, "Lcaron",                 "LATIN CAPITAL LETTER L WITH CARON"),
    ADOBE(0x013F, "Ldot",                   "LATIN CAPITAL LETTER L WITH MIDDLE DOT"),
    ADOBE(0x0141, "Lslash",                 "LATIN CAPITAL LETTER L WITH STROKE"),
    ADOBE(0x004D, "M",                      "LATIN CAPITAL LETTER M"),
    ADOBE(0x039C, "Mu",                     "GREEK CAPITAL LETTER MU"),
    ADOBE(0x004E, "N",                      "LATIN CAPITAL LETTER N"),
    ADOBE(0x0143, "Nacute",                 "LATIN CAPITAL LETTER N WITH ACUTE"),
    ADOBE(0x0147, "Ncaron",                 "LATIN CAPITAL LETTER N WITH CARON"),
    ADOBE(0x00D1, "Ntilde",                 "LATIN CAPITAL LETTER N WITH TILDE"),
    ADOBE(0x039D, "Nu",                     "GREEK CAPITAL LETTER NU"),
    ADOBE(0x004F, "O",                      "LATIN CAPITAL LETTER O"),
    ADOBE(0x0152, "OE",                     "LATIN CAPITAL LIGATURE OE"),
    ADOBE(0x00D3, "Oacute",                 "LATIN CAPITAL LETTER O WITH ACUTE"),
    ADOBE(0x014E, "Obreve",                 "LATIN CAPITAL LETTER O WITH BREVE"),
    ADOBE(0x00D4, "Ocircumflex",            "LATIN CAPITAL LETTER O WITH CIRCUMFLEX"),
    ADOBE(0x00D6, "Odieresis",              "LATIN CAPITAL LETTER O WITH DIAERESIS"),
    ADOBE(0x00D2, "Ograve",                 "LATIN CAPITAL LETTER O WITH GRAVE"),
    ADOBE(0x01A0, "Ohorn",                  "LATIN CAPITAL LETTER O WITH HORN"),
    ADOBE(0x0150, "Ohungarumlaut",          "LATIN CAPITAL LETTER O WITH DOUBLE ACUTE"),
    ADOBE(0x014C, "Omacron",                "LATIN CAPITAL LETTER O WITH MACRON"),
    ADOBE(0x2126, "Omega",                  "OHM SIGN"),
    ADOBE(0x038F, "Omegatonos",             "GREEK CAPITAL LETTER OMEGA WITH TONOS"),
    ADOBE(0x039F, "Omicron",                "GREEK CAPITAL LETTER OMICRON"),
    ADOBE(0x038C, "Omicrontonos",           "GREEK CAPITAL LETTER OMICRON WITH TONOS"),
    ADOBE(0x00D8, "Oslash",                 "LATIN CAPITAL LETTER O WITH STROKE"),
    ADOBE(0x01FE, "Oslashacute",            "LATIN CAPITAL LETTER O WITH STROKE AND ACUTE"),
    ADOBE(0x00D5, "Otilde",                 "LATIN CAPITAL LETTER O WITH TILDE"),
    ADOBE(0x0050, "P",                      "LATIN CAPITAL LETTER P"),
    ADOBE(0x03A6, "Phi",                    "GREEK CAPITAL LETTER PHI"),
    ADOBE(0x03A0, "Pi",                     "GREEK CAPITAL LETTER PI"),
    ADOBE(0x03A8, "Psi",                    "GREEK CAPITAL LETTER PSI"),
    ADOBE(0x0051, "Q",                      "LATIN CAPITAL LETTER Q"),
    ADOBE(0x0052, "R",                      "LATIN CAPITAL LETTER R"),
    ADOBE(0x0154, "Racute",                 "LATIN CAPITAL LETTER R WITH ACUTE"),
    ADOBE(0x0158, "Rcaron",                 "LATIN CAPITAL LETTER R WITH CARON"),
    ADOBE(0x211C, "Rfraktur",               "BLACK-LETTER CAPITAL R"),
    ADOBE(0x03A1, "Rho",                    "GREEK CAPITAL LETTER RHO"),
    ADOBE(0x0053, "S",                      "LATIN CAPITAL LETTER S"),
    ADOBE(0x250C, "SF010000",               "BOX DRAWINGS LIGHT DOWN AND RIGHT"),
    ADOBE(0x2514, "SF020000",               "BOX DRAWINGS LIGHT UP AND RIGHT"),
    ADOBE(0x2510, "SF030000",               "BOX DRAWINGS LIGHT DOWN AND LEFT"),
    ADOBE(0x2518, "SF040000",               "BOX DRAWINGS LIGHT UP AND LEFT"),
    ADOBE(0x253C, "SF050000",               "BOX DRAWINGS LIGHT VERTICAL AND HORIZONTA"),
    ADOBE(0x252C, "SF060000",               "BOX DRAWINGS LIGHT DOWN AND HORIZONTA"),
    ADOBE(0x2534, "SF070000",               "BOX DRAWINGS LIGHT UP AND HORIZONTA"),
    ADOBE(0x251C, "SF080000",               "BOX DRAWINGS LIGHT VERTICAL AND RIGHT"),
    ADOBE(0x2524, "SF090000",               "BOX DRAWINGS LIGHT VERTICAL AND LEFT"),
    ADOBE(0x2500, "SF100000",               "BOX DRAWINGS LIGHT HORIZONTA"),
    ADOBE(0x2502, "SF110000",               "BOX DRAWINGS LIGHT VERTICA"),
    ADOBE(0x2561, "SF190000",               "BOX DRAWINGS VERTICAL SINGLE AND LEFT DOUBLE"),
    ADOBE(0x2562, "SF200000",               "BOX DRAWINGS VERTICAL DOUBLE AND LEFT SINGLE"),
    ADOBE(0x2556, "SF210000",               "BOX DRAWINGS DOWN DOUBLE AND LEFT SINGLE"),
    ADOBE(0x2555, "SF220000",               "BOX DRAWINGS DOWN SINGLE AND LEFT DOUBLE"),
    ADOBE(0x2563, "SF230000",               "BOX DRAWINGS DOUBLE VERTICAL AND LEFT"),
    ADOBE(0x2551, "SF240000",               "BOX DRAWINGS DOUBLE VERTICA"),
    ADOBE(0x2557, "SF250000",               "BOX DRAWINGS DOUBLE DOWN AND LEFT"),
    ADOBE(0x255D, "SF260000",               "BOX DRAWINGS DOUBLE UP AND LEFT"),
    ADOBE(0x255C, "SF270000",               "BOX DRAWINGS UP DOUBLE AND LEFT SINGLE"),
    ADOBE(0x255B, "SF280000",               "BOX DRAWINGS UP SINGLE AND LEFT DOUBLE"),
    ADOBE(0x255E, "SF360000",               "BOX DRAWINGS VERTICAL SINGLE AND RIGHT DOUBLE"),
    ADOBE(0x255F, "SF370000",               "BOX DRAWINGS VERTICAL DOUBLE AND RIGHT SINGLE"),
    ADOBE(0x255A, "SF380000",               "BOX DRAWINGS DOUBLE UP AND RIGHT"),
    ADOBE(0x2554, "SF390000",               "BOX DRAWINGS DOUBLE DOWN AND RIGHT"),
    ADOBE(0x2569, "SF400000",               "BOX DRAWINGS DOUBLE UP AND HORIZONTA"),
    ADOBE(0x2566, "SF410000",               "BOX DRAWINGS DOUBLE DOWN AND HORIZONTA"),
    ADOBE(0x2560, "SF420000",               "BOX DRAWINGS DOUBLE VERTICAL AND RIGHT"),
    ADOBE(0x2550, "SF430000",               "BOX DRAWINGS DOUBLE HORIZONTA"),
    ADOBE(0x256C, "SF440000",               "BOX DRAWINGS DOUBLE VERTICAL AND HORIZONTA"),
    ADOBE(0x2567, "SF450000",               "BOX DRAWINGS UP SINGLE AND HORIZONTAL DOUBLE"),
    ADOBE(0x2568, "SF460000",               "BOX DRAWINGS UP DOUBLE AND HORIZONTAL SINGLE"),
    ADOBE(0x2564, "SF470000",               "BOX DRAWINGS DOWN SINGLE AND HORIZONTAL DOUBLE"),
    ADOBE(0x2565, "SF480000",               "BOX DRAWINGS DOWN DOUBLE AND HORIZONTAL SINGLE"),
    ADOBE(0x2559, "SF490000",               "BOX DRAWINGS UP DOUBLE AND RIGHT SINGLE"),
    ADOBE(0x2558, "SF500000",               "BOX DRAWINGS UP SINGLE AND RIGHT DOUBLE"),
    ADOBE(0x2552, "SF510000",               "BOX DRAWINGS DOWN SINGLE AND RIGHT DOUBLE"),
    ADOBE(0x2553, "SF520000",               "BOX DRAWINGS DOWN DOUBLE AND RIGHT SINGLE"),
    ADOBE(0x256B, "SF530000",               "BOX DRAWINGS VERTICAL DOUBLE AND HORIZONTAL SINGLE"),
    ADOBE(0x256A, "SF540000",               "BOX DRAWINGS VERTICAL SINGLE AND HORIZONTAL DOUBLE"),
    ADOBE(0x015A, "Sacute",                 "LATIN CAPITAL LETTER S WITH ACUTE"),
    ADOBE(0x0160, "Scaron",                 "LATIN CAPITAL LETTER S WITH CARON"),
    ADOBE(0x015E, "Scedilla",               "LATIN CAPITAL LETTER S WITH CEDILLA"),
    ADOBE(0x015C, "Scircumflex",            "LATIN CAPITAL LETTER S WITH CIRCUMFLEX"),
    ADOBE(0x03A3, "Sigma",                  "GREEK CAPITAL LETTER SIGMA"),
    ADOBE(0x0054, "T",                      "LATIN CAPITAL LETTER T"),
    ADOBE(0x03A4, "Tau",                    "GREEK CAPITAL LETTER TAU"),
    ADOBE(0x0166, "Tbar",                   "LATIN CAPITAL LETTER T WITH STROKE"),
    ADOBE(0x0164, "Tcaron",                 "LATIN CAPITAL LETTER T WITH CARON"),
    ADOBE(0x0398, "Theta",                  "GREEK CAPITAL LETTER THETA"),
    ADOBE(0x00DE, "Thorn",                  "LATIN CAPITAL LETTER THORN"),
    ADOBE(0x0055, "U",                      "LATIN CAPITAL LETTER U"),
    ADOBE(0x00DA, "Uacute",                 "LATIN CAPITAL LETTER U WITH ACUTE"),
    ADOBE(0x016C, "Ubreve",                 "LATIN CAPITAL LETTER U WITH BREVE"),
    ADOBE(0x00DB, "Ucircumflex",            "LATIN CAPITAL LETTER U WITH CIRCUMFLEX"),
    ADOBE(0x00DC, "Udieresis",              "LATIN CAPITAL LETTER U WITH DIAERESIS"),
    ADOBE(0x00D9, "Ugrave",                 "LATIN CAPITAL LETTER U WITH GRAVE"),
    ADOBE(0x01AF, "Uhorn",                  "LATIN CAPITAL LETTER U WITH HORN"),
    ADOBE(0x0170, "Uhungarumlaut",          "LATIN CAPITAL LETTER U WITH DOUBLE ACUTE"),
    ADOBE(0x016A, "Umacron",                "LATIN CAPITAL LETTER U WITH MACRON"),
    ADOBE(0x0172, "Uogonek",                "LATIN CAPITAL LETTER U WITH OGONEK"),
    ADOBE(0x03A5, "Upsilon",                "GREEK CAPITAL LETTER UPSILON"),
    ADOBE(0x03D2, "Upsilon1",               "GREEK UPSILON WITH HOOK SYMBO"),
    ADOBE(0x03AB, "Upsilondieresis",        "GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA"),
    ADOBE(0x038E, "Upsilontonos",           "GREEK CAPITAL LETTER UPSILON WITH TONOS"),
    ADOBE(0x016E, "Uring",                  "LATIN CAPITAL LETTER U WITH RING ABOVE"),
    ADOBE(0x0168, "Utilde",                 "LATIN CAPITAL LETTER U WITH TILDE"),
    ADOBE(0x0056, "V",                      "LATIN CAPITAL LETTER V"),
    ADOBE(0x0057, "W",                      "LATIN CAPITAL LETTER W"),
    ADOBE(0x1E82, "Wacute",                 "LATIN CAPITAL LETTER W WITH ACUTE"),
    ADOBE(0x0174, "Wcircumflex",            "LATIN CAPITAL LETTER W WITH CIRCUMFLEX"),
    ADOBE(0x1E84, "Wdieresis",              "LATIN CAPITAL LETTER W WITH DIAERESIS"),
    ADOBE(0x1E80, "Wgrave",                 "LATIN CAPITAL LETTER W WITH GRAVE"),
    ADOBE(0x0058, "X",                      "LATIN CAPITAL LETTER X"),
    ADOBE(0x039E, "Xi",                     "GREEK CAPITAL LETTER XI"),
    ADOBE(0x0059, "Y",                      "LATIN CAPITAL LETTER Y"),
    ADOBE(0x00DD, "Yacute",                 "LATIN CAPITAL LETTER Y WITH ACUTE"),
    ADOBE(0x0176, "Ycircumflex",            "LATIN CAPITAL LETTER Y WITH CIRCUMFLEX"),
    ADOBE(0x0178, "Ydieresis",              "LATIN CAPITAL LETTER Y WITH DIAERESIS"),
    ADOBE(0x1EF2, "Ygrave",                 "LATIN CAPITAL LETTER Y WITH GRAVE"),
    ADOBE(0x005A, "Z",                      "LATIN CAPITAL LETTER Z"),
    ADOBE(0x0179, "Zacute",                 "LATIN CAPITAL LETTER Z WITH ACUTE"),
    ADOBE(0x017D, "Zcaron",                 "LATIN CAPITAL LETTER Z WITH CARON"),
    ADOBE(0x017B, "Zdotaccent",             "LATIN CAPITAL LETTER Z WITH DOT ABOVE"),
    ADOBE(0x0396, "Zeta",                   "GREEK CAPITAL LETTER ZETA"),
    ADOBE(0x0061, "a",                      "LATIN SMALL LETTER A"),
    ADOBE(0x00E1, "aacute",                 "LATIN SMALL LETTER AWITH ACUTE"),
    ADOBE(0x0103, "abreve",                 "LATIN SMALL LETTER AWITH BREVE"),
    ADOBE(0x00E2, "acircumflex",            "LATIN SMALL LETTER AWITH CIRCUMFLEX"),
    ADOBE(0x00B4, "acute",                  "ACUTE ACCENT"),
    ADOBE(0x0301, "acutecomb",              "COMBINING ACUTE ACCENT"),
    ADOBE(0x00E4, "adieresis",              "LATIN SMALL LETTER AWITH DIAERESIS"),
    ADOBE(0x00E6, "ae",                     "LATIN SMALL LETTER AE"),
    ADOBE(0x01FD, "aeacute",                "LATIN SMALL LETTER AE WITH ACUTE"),
    ADOBE(0x00E0, "agrave",                 "LATIN SMALL LETTER AWITH GRAVE"),
    ADOBE(0x2135, "aleph",                  "ALEF SYMBO"),
    ADOBE(0x03B1, "alpha",                  "GREEK SMALL LETTER ALPHA"),
    ADOBE(0x03AC, "alphatonos",             "GREEK SMALL LETTER ALPHA WITH TONOS"),
    ADOBE(0x0101, "amacron",                "LATIN SMALL LETTER AWITH MACRON"),
    ADOBE(0x0026, "ampersand",              "AMPERSAND"),
    ADOBE(0x2220, "angle",                  "ANGLE"),
    ADOBE(0x2329, "angleleft",              "LEFT-POINTING ANGLE BRACKET"),
    ADOBE(0x232A, "angleright",             "RIGHT-POINTING ANGLE BRACKET"),
    ADOBE(0x0387, "anoteleia",              "GREEK ANO TELEIA"),
    ADOBE(0x0105, "aogonek",                "LATIN SMALL LETTER AWITH OGONEK"),
    ADOBE(0x2248, "approxequal",            "ALMOST EQUAL TO"),
    ADOBE(0x00E5, "aring",                  "LATIN SMALL LETTER AWITH RING ABOVE"),
    ADOBE(0x01FB, "aringacute",             "LATIN SMALL LETTER AWITH RING ABOVE AND ACUTE"),
    ADOBE(0x2194, "arrowboth",              "LEFT RIGHT ARROW"),
    ADOBE(0x21D4, "arrowdblboth",           "LEFT RIGHT DOUBLE ARROW"),
    ADOBE(0x21D3, "arrowdbldown",           "DOWNWARDS DOUBLE ARROW"),
    ADOBE(0x21D0, "arrowdblleft",           "LEFTWARDS DOUBLE ARROW"),
    ADOBE(0x21D2, "arrowdblright",          "RIGHTWARDS DOUBLE ARROW"),
    ADOBE(0x21D1, "arrowdblup",             "UPWARDS DOUBLE ARROW"),
    ADOBE(0x2193, "arrowdown",              "DOWNWARDS ARROW"),
    ADOBE(0x2190, "arrowleft",              "LEFTWARDS ARROW"),
    ADOBE(0x2192, "arrowright",             "RIGHTWARDS ARROW"),
    ADOBE(0x2191, "arrowup",                "UPWARDS ARROW"),
    ADOBE(0x2195, "arrowupdn",              "UP DOWN ARROW"),
    ADOBE(0x21A8, "arrowupdnbse",           "UP DOWN ARROW WITH BASE"),
    ADOBE(0x005E, "asciicircum",            "CIRCUMFLEX ACCENT"),
    ADOBE(0x007E, "asciitilde",             "TILDE"),
    ADOBE(0x002A, "asterisk",               "ASTERISK"),
    ADOBE(0x2217, "asteriskmath",           "ASTERISK OPERATOR"),
    ADOBE(0x0040, "at",                     "COMMERCIAL AT"),
    ADOBE(0x00E3, "atilde",                 "LATIN SMALL LETTER AWITH TILDE"),
    ADOBE(0x0062, "b",                      "LATIN SMALL LETTER B"),
    ADOBE(0x005C, "backslash",              "REVERSE SOLIDUS"),
    ADOBE(0x007C, "bar",                    "VERTICAL LINE"),
    ADOBE(0x03B2, "beta",                   "GREEK SMALL LETTER BETA"),
    ADOBE(0x2588, "block",                  "FULL BLOCK"),
    ADOBE(0x007B, "braceleft",              "LEFT CURLY BRACKET"),
    ADOBE(0x007D, "braceright",             "RIGHT CURLY BRACKET"),
    ADOBE(0x005B, "bracketleft",            "LEFT SQUARE BRACKET"),
    ADOBE(0x005D, "bracketright",           "RIGHT SQUARE BRACKET"),
    ADOBE(0x02D8, "breve",                  "BREVE"),
    ADOBE(0x00A6, "brokenbar",              "BROKEN BAR"),
    ADOBE(0x2022, "bullet",                 "BULLET"),
    ADOBE(0x0063, "c",                      "LATIN SMALL LETTER C"),
    ADOBE(0x0107, "cacute",                 "LATIN SMALL LETTER C WITH ACUTE"),
    ADOBE(0x02C7, "caron",                  "CARON"),
    ADOBE(0x21B5, "carriagereturn",         "DOWNWARDS ARROW WITH CORNER LEFTWARDS"),
    ADOBE(0x010D, "ccaron",                 "LATIN SMALL LETTER C WITH CARON"),
    ADOBE(0x00E7, "ccedilla",               "LATIN SMALL LETTER C WITH CEDILLA"),
    ADOBE(0x0109, "ccircumflex",            "LATIN SMALL LETTER C WITH CIRCUMFLEX"),
    ADOBE(0x010B, "cdotaccent",             "LATIN SMALL LETTER C WITH DOT ABOVE"),
    ADOBE(0x00B8, "cedilla",                "CEDILLA"),
    ADOBE(0x00A2, "cent",                   "CENT SIGN"),
    ADOBE(0x03C7, "chi",                    "GREEK SMALL LETTER CHI"),
    ADOBE(0x25CB, "circle",                 "WHITE CIRCLE"),
    ADOBE(0x2297, "circlemultiply",         "CIRCLED TIMES"),
    ADOBE(0x2295, "circleplus",             "CIRCLED PLUS"),
    ADOBE(0x02C6, "circumflex",             "MODIFIER LETTER CIRCUMFLEX ACCENT"),
    ADOBE(0x2663, "club",                   "BLACK CLUB SUIT"),
    ADOBE(0x003A, "colon",                  "COLON"),
    ADOBE(0x20A1, "colonmonetary",          "COLON SIGN"),
    ADOBE(0x002C, "comma",                  "COMMA"),
    ADOBE(0x2245, "congruent",              "APPROXIMATELY EQUAL TO"),
    ADOBE(0x00A9, "copyright",              "COPYRIGHT SIGN"),
    ADOBE(0x00A4, "currency",               "CURRENCY SIGN"),
    ADOBE(0x0064, "d",                      "LATIN SMALL LETTER D"),
    ADOBE(0x2020, "dagger",                 "DAGGER"),
    ADOBE(0x2021, "daggerdbl",              "DOUBLE DAGGER"),
    ADOBE(0x010F, "dcaron",                 "LATIN SMALL LETTER D WITH CARON"),
    ADOBE(0x0111, "dcroat",                 "LATIN SMALL LETTER D WITH STROKE"),
    ADOBE(0x00B0, "degree",                 "DEGREE SIGN"),
    ADOBE(0x03B4, "delta",                  "GREEK SMALL LETTER DELTA"),
    ADOBE(0x2666, "diamond",                "BLACK DIAMOND SUIT"),
    ADOBE(0x00A8, "dieresis",               "DIAERESIS"),
    ADOBE(0x0385, "dieresistonos",          "GREEK DIALYTIKA TONOS"),
    ADOBE(0x00F7, "divide",                 "DIVISION SIGN"),
    ADOBE(0x2593, "dkshade",                "DARK SHADE"),
    ADOBE(0x2584, "dnblock",                "LOWER HALF BLOCK"),
    ADOBE(0x0024, "dollar",                 "DOLLAR SIGN"),
    ADOBE(0x20AB, "dong",                   "DONG SIGN"),
    ADOBE(0x02D9, "dotaccent",              "DOT ABOVE"),
    ADOBE(0x0323, "dotbelowcomb",           "COMBINING DOT BELOW"),
    ADOBE(0x0131, "dotlessi",               "LATIN SMALL LETTER DOTLESS I"),
    ADOBE(0x22C5, "dotmath",                "DOT OPERATOR"),
    ADOBE(0x0065, "e",                      "LATIN SMALL LETTER E"),
    ADOBE(0x00E9, "eacute",                 "LATIN SMALL LETTER E WITH ACUTE"),
    ADOBE(0x0115, "ebreve",                 "LATIN SMALL LETTER E WITH BREVE"),
    ADOBE(0x011B, "ecaron",                 "LATIN SMALL LETTER E WITH CARON"),
    ADOBE(0x00EA, "ecircumflex",            "LATIN SMALL LETTER E WITH CIRCUMFLEX"),
    ADOBE(0x00EB, "edieresis",              "LATIN SMALL LETTER E WITH DIAERESIS"),
    ADOBE(0x0117, "edotaccent",             "LATIN SMALL LETTER E WITH DOT ABOVE"),
    ADOBE(0x00E8, "egrave",                 "LATIN SMALL LETTER E WITH GRAVE"),
    ADOBE(0x0038, "eight",                  "DIGIT EIGHT"),
    ADOBE(0x2208, "element",                "ELEMENT OF"),
    ADOBE(0x2026, "ellipsis",               "HORIZONTAL ELLIPSIS"),
    ADOBE(0x0113, "emacron",                "LATIN SMALL LETTER E WITH MACRON"),
    ADOBE(0x2014, "emdash",                 "EM DASH"),
    ADOBE(0x2205, "emptyset",               "EMPTY SET"),
    ADOBE(0x2013, "endash",                 "EN DASH"),
    ADOBE(0x014B, "eng",                    "LATIN SMALL LETTER ENG"),
    ADOBE(0x0119, "eogonek",                "LATIN SMALL LETTER E WITH OGONEK"),
    ADOBE(0x03B5, "epsilon",                "GREEK SMALL LETTER EPSILON"),
    ADOBE(0x03AD, "epsilontonos",           "GREEK SMALL LETTER EPSILON WITH TONOS"),
    ADOBE(0x003D, "equal",                  "EQUALS SIGN"),
    ADOBE(0x2261, "equivalence",            "IDENTICAL TO"),
    ADOBE(0x212E, "estimated",              "ESTIMATED SYMBO"),
    ADOBE(0x03B7, "eta",                    "GREEK SMALL LETTER ETA"),
    ADOBE(0x03AE, "etatonos",               "GREEK SMALL LETTER ETA WITH TONOS"),
    ADOBE(0x00F0, "eth",                    "LATIN SMALL LETTER ETH"),
    ADOBE(0x0021, "exclam",                 "EXCLAMATION MARK"),
    ADOBE(0x203C, "exclamdbl",              "DOUBLE EXCLAMATION MARK"),
    ADOBE(0x00A1, "exclamdown",             "INVERTED EXCLAMATION MARK"),
    ADOBE(0x2203, "existential",            "THERE EXISTS"),
    ADOBE(0x0066, "f",                      "LATIN SMALL LETTER F"),
    ADOBE(0x2640, "female",                 "FEMALE SIGN"),
    ADOBE(0x2012, "figuredash",             "FIGURE DASH"),
    ADOBE(0x25A0, "filledbox",              "BLACK SQUARE"),
    ADOBE(0x25AC, "filledrect",             "BLACK RECTANGLE"),
    ADOBE(0x0035, "five",                   "DIGIT FIVE"),
    ADOBE(0x215D, "fiveeighths",            "VULGAR FRACTION FIVE EIGHTHS"),
    ADOBE(0x0192, "florin",                 "LATIN SMALL LETTER F WITH HOOK"),
    ADOBE(0x0034, "four",                   "DIGIT FOUR"),
    ADOBE(0x2044, "fraction",               "FRACTION SLASH"),
    ADOBE(0x20A3, "franc",                  "FRENCH FRANC SIGN"),
    ADOBE(0x0067, "g",                      "LATIN SMALL LETTER G"),
    ADOBE(0x03B3, "gamma",                  "GREEK SMALL LETTER GAMMA"),
    ADOBE(0x011F, "gbreve",                 "LATIN SMALL LETTER G WITH BREVE"),
    ADOBE(0x01E7, "gcaron",                 "LATIN SMALL LETTER G WITH CARON"),
    ADOBE(0x011D, "gcircumflex",            "LATIN SMALL LETTER G WITH CIRCUMFLEX"),
    ADOBE(0x0121, "gdotaccent",             "LATIN SMALL LETTER G WITH DOT ABOVE"),
    ADOBE(0x00DF, "germandbls",             "LATIN SMALL LETTER SHARP S"),
    ADOBE(0x2207, "gradient",               "NABLA"),
    ADOBE(0x0060, "grave",                  "GRAVE ACCENT"),
    ADOBE(0x0300, "gravecomb",              "COMBINING GRAVE ACCENT"),
    ADOBE(0x003E, "greater",                "GREATER-THAN SIGN"),
    ADOBE(0x2265, "greaterequal",           "GREATER-THAN OR EQUAL TO"),
    ADOBE(0x00AB, "guillemotleft",          "LEFT-POINTING DOUBLE ANGLE QUOTATION MARK"),
    ADOBE(0x00BB, "guillemotright",         "RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK"),
    ADOBE(0x2039, "guilsinglleft",          "SINGLE LEFT-POINTING ANGLE QUOTATION MARK"),
    ADOBE(0x203A, "guilsinglright",         "SINGLE RIGHT-POINTING ANGLE QUOTATION MARK"),
    ADOBE(0x0068, "h",                      "LATIN SMALL LETTER H"),
    ADOBE(0x0127, "hbar",                   "LATIN SMALL LETTER H WITH STROKE"),
    ADOBE(0x0125, "hcircumflex",            "LATIN SMALL LETTER H WITH CIRCUMFLEX"),
    ADOBE(0x2665, "heart",                  "BLACK HEART SUIT"),
    ADOBE(0x0309, "hookabovecomb",          "COMBINING HOOK ABOVE"),
    ADOBE(0x2302, "house",                  "HOUSE"),
    ADOBE(0x02DD, "hungarumlaut",           "DOUBLE ACUTE ACCENT"),
    ADOBE(0x002D, "hyphen",                 "HYPHEN-MINUS"),
    ADOBE(0x0069, "i",                      "LATIN SMALL LETTER I"),
    ADOBE(0x00ED, "iacute",                 "LATIN SMALL LETTER I WITH ACUTE"),
    ADOBE(0x012D, "ibreve",                 "LATIN SMALL LETTER I WITH BREVE"),
    ADOBE(0x00EE, "icircumflex",            "LATIN SMALL LETTER I WITH CIRCUMFLEX"),
    ADOBE(0x00EF, "idieresis",              "LATIN SMALL LETTER I WITH DIAERESIS"),
    ADOBE(0x00EC, "igrave",                 "LATIN SMALL LETTER I WITH GRAVE"),
    ADOBE(0x0133, "ij",                     "LATIN SMALL LIGATURE IJ"),
    ADOBE(0x012B, "imacron",                "LATIN SMALL LETTER I WITH MACRON"),
    ADOBE(0x221E, "infinity",               "INFINITY"),
    ADOBE(0x222B, "integral",               "INTEGRA"),
    ADOBE(0x2321, "integralbt",             "BOTTOM HALF INTEGRA"),
    ADOBE(0x2320, "integraltp",             "TOP HALF INTEGRA"),
    ADOBE(0x2229, "intersection",           "INTERSECTION"),
    ADOBE(0x25D8, "invbullet",              "INVERSE BULLET"),
    ADOBE(0x25D9, "invcircle",              "INVERSE WHITE CIRCLE"),
    ADOBE(0x263B, "invsmileface",           "BLACK SMILING FACE"),
    ADOBE(0x012F, "iogonek",                "LATIN SMALL LETTER I WITH OGONEK"),
    ADOBE(0x03B9, "iota",                   "GREEK SMALL LETTER IOTA"),
    ADOBE(0x03CA, "iotadieresis",           "GREEK SMALL LETTER IOTA WITH DIALYTIKA"),
    ADOBE(0x0390, "iotadieresistonos",      "GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS"),
    ADOBE(0x03AF, "iotatonos",              "GREEK SMALL LETTER IOTA WITH TONOS"),
    ADOBE(0x0129, "itilde",                 "LATIN SMALL LETTER I WITH TILDE"),
    ADOBE(0x006A, "j",                      "LATIN SMALL LETTER J"),
    ADOBE(0x0135, "jcircumflex",            "LATIN SMALL LETTER J WITH CIRCUMFLEX"),
    ADOBE(0x006B, "k",                      "LATIN SMALL LETTER K"),
    ADOBE(0x03BA, "kappa",                  "GREEK SMALL LETTER KAPPA"),
    ADOBE(0x0138, "kgreenlandic",           "LATIN SMALL LETTER KRA"),
    ADOBE(0x006C, "l",                      "LATIN SMALL LETTER "),
    ADOBE(0x013A, "lacute",                 "LATIN SMALL LETTER L WITH ACUTE"),
    ADOBE(0x03BB, "lambda",                 "GREEK SMALL LETTER LAMDA"),
    ADOBE(0x013E, "lcaron",                 "LATIN SMALL LETTER L WITH CARON"),
    ADOBE(0x0140, "ldot",                   "LATIN SMALL LETTER L WITH MIDDLE DOT"),
    ADOBE(0x003C, "less",                   "LESS-THAN SIGN"),
    ADOBE(0x2264, "lessequal",              "LESS-THAN OR EQUAL TO"),
    ADOBE(0x258C, "lfblock",                "LEFT HALF BLOCK"),
    ADOBE(0x20A4, "lira",                   "LIRA SIGN"),
    ADOBE(0x2227, "logicaland",             "LOGICAL AND"),
    ADOBE(0x00AC, "logicalnot",             "NOT SIGN"),
    ADOBE(0x2228, "logicalor",              "LOGICAL OR"),
    ADOBE(0x017F, "longs",                  "LATIN SMALL LETTER LONG S"),
    ADOBE(0x25CA, "lozenge",                "LOZENGE"),
    ADOBE(0x0142, "lslash",                 "LATIN SMALL LETTER L WITH STROKE"),
    ADOBE(0x2591, "ltshade",                "LIGHT SHADE"),
    ADOBE(0x006D, "m",                      "LATIN SMALL LETTER M"),
    ADOBE(0x00AF, "macron",                 "MACRON"),
    ADOBE(0x2642, "male",                   "MALE SIGN"),
    ADOBE(0x2212, "minus",                  "MINUS SIGN"),
    ADOBE(0x2032, "minute",                 "PRIME"),
    ADOBE(0x00B5, "mu",                     "MICRO SIGN"),
    ADOBE(0x00D7, "multiply",               "MULTIPLICATION SIGN"),
    ADOBE(0x266A, "musicalnote",            "EIGHTH NOTE"),
    ADOBE(0x266B, "musicalnotedbl",         "BEAMED EIGHTH NOTES"),
    ADOBE(0x006E, "n",                      "LATIN SMALL LETTER N"),
    ADOBE(0x0144, "nacute",                 "LATIN SMALL LETTER N WITH ACUTE"),
    ADOBE(0x0149, "napostrophe",            "LATIN SMALL LETTER N PRECEDED BY APOSTROPHE"),
    ADOBE(0x0148, "ncaron",                 "LATIN SMALL LETTER N WITH CARON"),
    ADOBE(0x0039, "nine",                   "DIGIT NINE"),
    ADOBE(0x2209, "notelement",             "NOT AN ELEMENT OF"),
    ADOBE(0x2260, "notequal",               "NOT EQUAL TO"),
    ADOBE(0x2284, "notsubset",              "NOT ASUBSET OF"),
    ADOBE(0x00F1, "ntilde",                 "LATIN SMALL LETTER N WITH TILDE"),
    ADOBE(0x03BD, "nu",                     "GREEK SMALL LETTER NU"),
    ADOBE(0x0023, "numbersign",             "NUMBER SIGN"),
    ADOBE(0x006F, "o",                      "LATIN SMALL LETTER O"),
    ADOBE(0x00F3, "oacute",                 "LATIN SMALL LETTER O WITH ACUTE"),
    ADOBE(0x014F, "obreve",                 "LATIN SMALL LETTER O WITH BREVE"),
    ADOBE(0x00F4, "ocircumflex",            "LATIN SMALL LETTER O WITH CIRCUMFLEX"),
    ADOBE(0x00F6, "odieresis",              "LATIN SMALL LETTER O WITH DIAERESIS"),
    ADOBE(0x0153, "oe",                     "LATIN SMALL LIGATURE OE"),
    ADOBE(0x02DB, "ogonek",                 "OGONEK"),
    ADOBE(0x00F2, "ograve",                 "LATIN SMALL LETTER O WITH GRAVE"),
    ADOBE(0x01A1, "ohorn",                  "LATIN SMALL LETTER O WITH HORN"),
    ADOBE(0x0151, "ohungarumlaut",          "LATIN SMALL LETTER O WITH DOUBLE ACUTE"),
    ADOBE(0x014D, "omacron",                "LATIN SMALL LETTER O WITH MACRON"),
    ADOBE(0x03C9, "omega",                  "GREEK SMALL LETTER OMEGA"),
    ADOBE(0x03D6, "omega1",                 "GREEK PI SYMBO"),
    ADOBE(0x03CE, "omegatonos",             "GREEK SMALL LETTER OMEGA WITH TONOS"),
    ADOBE(0x03BF, "omicron",                "GREEK SMALL LETTER OMICRON"),
    ADOBE(0x03CC, "omicrontonos",           "GREEK SMALL LETTER OMICRON WITH TONOS"),
    ADOBE(0x0031, "one",                    "DIGIT ONE"),
    ADOBE(0x2024, "onedotenleader",         "ONE DOT LEADER"),
    ADOBE(0x215B, "oneeighth",              "VULGAR FRACTION ONE EIGHTH"),
    ADOBE(0x00BD, "onehalf",                "VULGAR FRACTION ONE HALF"),
    ADOBE(0x00BC, "onequarter",             "VULGAR FRACTION ONE QUARTER"),
    ADOBE(0x2153, "onethird",               "VULGAR FRACTION ONE THIRD"),
    ADOBE(0x25E6, "openbullet",             "WHITE BULLET"),
    ADOBE(0x00AA, "ordfeminine",            "FEMININE ORDINAL INDICATOR"),
    ADOBE(0x00BA, "ordmasculine",           "MASCULINE ORDINAL INDICATOR"),
    ADOBE(0x221F, "orthogonal",             "RIGHT ANGLE"),
    ADOBE(0x00F8, "oslash",                 "LATIN SMALL LETTER O WITH STROKE"),
    ADOBE(0x01FF, "oslashacute",            "LATIN SMALL LETTER O WITH STROKE AND ACUTE"),
    ADOBE(0x00F5, "otilde",                 "LATIN SMALL LETTER O WITH TILDE"),
    ADOBE(0x0070, "p",                      "LATIN SMALL LETTER P"),
    ADOBE(0x00B6, "paragraph",              "PILCROW SIGN"),
    ADOBE(0x0028, "parenleft",              "LEFT PARENTHESIS"),
    ADOBE(0x0029, "parenright",             "RIGHT PARENTHESIS"),
    ADOBE(0x2202, "partialdiff",            "PARTIAL DIFFERENTIA"),
    ADOBE(0x0025, "percent",                "PERCENT SIGN"),
    ADOBE(0x002E, "period",                 "FULL STOP"),
    ADOBE(0x00B7, "periodcentered",         "MIDDLE DOT"),
    ADOBE(0x22A5, "perpendicular",          "UP TACK"),
    ADOBE(0x2030, "perthousand",            "PER MILLE SIGN"),
    ADOBE(0x20A7, "peseta",                 "PESETA SIGN"),
    ADOBE(0x03C6, "phi",                    "GREEK SMALL LETTER PHI"),
    ADOBE(0x03D5, "phi1",                   "GREEK PHI SYMBO"),
    ADOBE(0x03C0, "pi",                     "GREEK SMALL LETTER PI"),
    ADOBE(0x002B, "plus",                   "PLUS SIGN"),
    ADOBE(0x00B1, "plusminus",              "PLUS-MINUS SIGN"),
    ADOBE(0x211E, "prescription",           "PRESCRIPTION TAKE"),
    ADOBE(0x220F, "product",                "N-ARY PRODUCT"),
    ADOBE(0x2282, "propersubset",           "SUBSET OF"),
    ADOBE(0x2283, "propersuperset",         "SUPERSET OF"),
    ADOBE(0x221D, "proportional",           "PROPORTIONAL TO"),
    ADOBE(0x03C8, "psi",                    "GREEK SMALL LETTER PSI"),
    ADOBE(0x0071, "q",                      "LATIN SMALL LETTER Q"),
    ADOBE(0x003F, "question",               "QUESTION MARK"),
    ADOBE(0x00BF, "questiondown",           "INVERTED QUESTION MARK"),
    ADOBE(0x0022, "quotedbl",               "QUOTATION MARK"),
    ADOBE(0x201E, "quotedblbase",           "DOUBLE LOW-9 QUOTATION MARK"),
    ADOBE(0x201C, "quotedblleft",           "LEFT DOUBLE QUOTATION MARK"),
    ADOBE(0x201D, "quotedblright",          "RIGHT DOUBLE QUOTATION MARK"),
    ADOBE(0x2018, "quoteleft",              "LEFT SINGLE QUOTATION MARK"),
    ADOBE(0x201B, "quotereversed",          "SINGLE HIGH-REVERSED-9 QUOTATION MARK"),
    ADOBE(0x2019, "quoteright",             "RIGHT SINGLE QUOTATION MARK"),
    ADOBE(0x201A, "quotesinglbase",         "SINGLE LOW-9 QUOTATION MARK"),
    ADOBE(0x0027, "quotesingle",            "APOSTROPHE"),
    ADOBE(0x0072, "r",                      "LATIN SMALL LETTER R"),
    ADOBE(0x0155, "racute",                 "LATIN SMALL LETTER R WITH ACUTE"),
    ADOBE(0x221A, "radical",                "SQUARE ROOT"),
    ADOBE(0x0159, "rcaron",                 "LATIN SMALL LETTER R WITH CARON"),
    ADOBE(0x2286, "reflexsubset",           "SUBSET OF OR EQUAL TO"),
    ADOBE(0x2287, "reflexsuperset",         "SUPERSET OF OR EQUAL TO"),
    ADOBE(0x00AE, "registered",             "REGISTERED SIGN"),
    ADOBE(0x2310, "revlogicalnot",          "REVERSED NOT SIGN"),
    ADOBE(0x03C1, "rho",                    "GREEK SMALL LETTER RHO"),
    ADOBE(0x02DA, "ring",                   "RING ABOVE"),
    ADOBE(0x2590, "rtblock",                "RIGHT HALF BLOCK"),
    ADOBE(0x0073, "s",                      "LATIN SMALL LETTER S"),
    ADOBE(0x015B, "sacute",                 "LATIN SMALL LETTER S WITH ACUTE"),
    ADOBE(0x0161, "scaron",                 "LATIN SMALL LETTER S WITH CARON"),
    ADOBE(0x015F, "scedilla",               "LATIN SMALL LETTER S WITH CEDILLA"),
    ADOBE(0x015D, "scircumflex",            "LATIN SMALL LETTER S WITH CIRCUMFLEX"),
    ADOBE(0x2033, "second",                 "DOUBLE PRIME"),
    ADOBE(0x00A7, "section",                "SECTION SIGN"),
    ADOBE(0x003B, "semicolon",              "SEMICOLON"),
    ADOBE(0x0037, "seven",                  "DIGIT SEVEN"),
    ADOBE(0x215E, "seveneighths",           "VULGAR FRACTION SEVEN EIGHTHS"),
    ADOBE(0x2592, "shade",                  "MEDIUM SHADE"),
    ADOBE(0x03C3, "sigma",                  "GREEK SMALL LETTER SIGMA"),
    ADOBE(0x03C2, "sigma1",                 "GREEK SMALL LETTER FINAL SIGMA"),
    ADOBE(0x223C, "similar",                "TILDE OPERATOR"),
    ADOBE(0x0036, "six",                    "DIGIT SIX"),
    ADOBE(0x002F, "slash",                  "SOLIDUS"),
    ADOBE(0x263A, "smileface",              "WHITE SMILING FACE"),
    ADOBE(0x0020, "space",                  "SPACE"),
    ADOBE(0x2660, "spade",                  "BLACK SPADE SUIT"),
    ADOBE(0x00A3, "sterling",               "POUND SIGN"),
    ADOBE(0x220B, "suchthat",               "CONTAINS AS MEMBER"),
    ADOBE(0x2211, "summation",              "N-ARY SUMMATION"),
    ADOBE(0x263C, "sun",                    "WHITE SUN WITH RAYS"),
    ADOBE(0x0074, "t",                      "LATIN SMALL LETTER T"),
    ADOBE(0x03C4, "tau",                    "GREEK SMALL LETTER TAU"),
    ADOBE(0x0167, "tbar",                   "LATIN SMALL LETTER T WITH STROKE"),
    ADOBE(0x0165, "tcaron",                 "LATIN SMALL LETTER T WITH CARON"),
    ADOBE(0x2234, "therefore",              "THEREFORE"),
    ADOBE(0x03B8, "theta",                  "GREEK SMALL LETTER THETA"),
    ADOBE(0x03D1, "theta1",                 "GREEK THETA SYMBO"),
    ADOBE(0x00FE, "thorn",                  "LATIN SMALL LETTER THORN"),
    ADOBE(0x0033, "three",                  "DIGIT THREE"),
    ADOBE(0x215C, "threeeighths",           "VULGAR FRACTION THREE EIGHTHS"),
    ADOBE(0x00BE, "threequarters",          "VULGAR FRACTION THREE QUARTERS"),
    ADOBE(0x02DC, "tilde",                  "SMALL TILDE"),
    ADOBE(0x0303, "tildecomb",              "COMBINING TILDE"),
    ADOBE(0x0384, "tonos",                  "GREEK TONOS"),
    ADOBE(0x2122, "trademark",              "TRADE MARK SIGN"),
    ADOBE(0x25BC, "triagdn",                "BLACK DOWN-POINTING TRIANGLE"),
    ADOBE(0x25C4, "triaglf",                "BLACK LEFT-POINTING POINTER"),
    ADOBE(0x25BA, "triagrt",                "BLACK RIGHT-POINTING POINTER"),
    ADOBE(0x25B2, "triagup",                "BLACK UP-POINTING TRIANGLE"),
    ADOBE(0x0032, "two",                    "DIGIT TWO"),
    ADOBE(0x2025, "twodotenleader",         "TWO DOT LEADER"),
    ADOBE(0x2154, "twothirds",              "VULGAR FRACTION TWO THIRDS"),
    ADOBE(0x0075, "u",                      "LATIN SMALL LETTER U"),
    ADOBE(0x00FA, "uacute",                 "LATIN SMALL LETTER U WITH ACUTE"),
    ADOBE(0x016D, "ubreve",                 "LATIN SMALL LETTER U WITH BREVE"),
    ADOBE(0x00FB, "ucircumflex",            "LATIN SMALL LETTER U WITH CIRCUMFLEX"),
    ADOBE(0x00FC, "udieresis",              "LATIN SMALL LETTER U WITH DIAERESIS"),
    ADOBE(0x00F9, "ugrave",                 "LATIN SMALL LETTER U WITH GRAVE"),
    ADOBE(0x01B0, "uhorn",                  "LATIN SMALL LETTER U WITH HORN"),
    ADOBE(0x0171, "uhungarumlaut",          "LATIN SMALL LETTER U WITH DOUBLE ACUTE"),
    ADOBE(0x016B, "umacron",                "LATIN SMALL LETTER U WITH MACRON"),
    ADOBE(0x005F, "underscore",             "LOW LINE"),
    ADOBE(0x2017, "underscoredbl",          "DOUBLE LOW LINE"),
    ADOBE(0x222A, "union",                  "UNION"),
    ADOBE(0x2200, "universal",              "FOR AL"),
    ADOBE(0x0173, "uogonek",                "LATIN SMALL LETTER U WITH OGONEK"),
    ADOBE(0x2580, "upblock",                "UPPER HALF BLOCK"),
    ADOBE(0x03C5, "upsilon",                "GREEK SMALL LETTER UPSILON"),
    ADOBE(0x03CB, "upsilondieresis",        "GREEK SMALL LETTER UPSILON WITH DIALYTIKA"),
    ADOBE(0x03B0, "upsilondieresistonos",   "GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS"),
    ADOBE(0x03CD, "upsilontonos",           "GREEK SMALL LETTER UPSILON WITH TONOS"),
    ADOBE(0x016F, "uring",                  "LATIN SMALL LETTER U WITH RING ABOVE"),
    ADOBE(0x0169, "utilde",                 "LATIN SMALL LETTER U WITH TILDE"),
    ADOBE(0x0076, "v",                      "LATIN SMALL LETTER V"),
    ADOBE(0x0077, "w",                      "LATIN SMALL LETTER W"),
    ADOBE(0x1E83, "wacute",                 "LATIN SMALL LETTER W WITH ACUTE"),
    ADOBE(0x0175, "wcircumflex",            "LATIN SMALL LETTER W WITH CIRCUMFLEX"),
    ADOBE(0x1E85, "wdieresis",              "LATIN SMALL LETTER W WITH DIAERESIS"),
    ADOBE(0x2118, "weierstrass",            "SCRIPT CAPITAL P"),
    ADOBE(0x1E81, "wgrave",                 "LATIN SMALL LETTER W WITH GRAVE"),
    ADOBE(0x0078, "x",                      "LATIN SMALL LETTER X"),
    ADOBE(0x03BE, "xi",                     "GREEK SMALL LETTER XI"),
    ADOBE(0x0079, "y",                      "LATIN SMALL LETTER Y"),
    ADOBE(0x00FD, "yacute",                 "LATIN SMALL LETTER Y WITH ACUTE"),
    ADOBE(0x0177, "ycircumflex",            "LATIN SMALL LETTER Y WITH CIRCUMFLEX"),
    ADOBE(0x00FF, "ydieresis",              "LATIN SMALL LETTER Y WITH DIAERESIS"),
    ADOBE(0x00A5, "yen",                    "YEN SIGN"),
    ADOBE(0x1EF3, "ygrave",                 "LATIN SMALL LETTER Y WITH GRAVE"),
    ADOBE(0x007A, "z",                      "LATIN SMALL LETTER Z"),
    ADOBE(0x017A, "zacute",                 "LATIN SMALL LETTER Z WITH ACUTE"),
    ADOBE(0x017E, "zcaron",                 "LATIN SMALL LETTER Z WITH CARON"),
    ADOBE(0x017C, "zdotaccent",             "LATIN SMALL LETTER Z WITH DOT ABOVE"),
    ADOBE(0x0030, "zero",                   "DIGIT ZERO"),
    ADOBE(0x03B6, "zeta",                   "GREEK SMALL LETTER ZETA"),


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
//@#include "unicode.names"

// I want special treatment for combining marks (and I am including
// variant selectors here) because they need special treatment for
// transmission to ncurses. I map these character names onto a code
// with its top bit set. By making this list the last one loaded it
// can override the plain definition that "unicode,names" had provided
// for these cases! So this "#include" MUST come last.
#include "combining.names"

};

// end of adobenames.cpp
int main()
{   std::cout << "Size = " << 3*adobe.M
              << "  OK = " << adobe.OK
              << "  count = " << adobe.count
              << "  load = " << (100.0*adobe.count/(3*adobe.M))
              << "  maxprobes = " << adobe.maxprobes << "\n";
    return 0;
}



// end of cuckoo.cpp
