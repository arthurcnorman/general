#include <iostream>
#include <cstring>
#include <string>


// In unicode we have a range of characters that are zero-width and that
// arrange to modify or overlay the character before them:
//
//   U+0300 to u+036f "combining diacritical marks"                112
//   U+a1b0 to U+1aff "combining diacritical marks extended"        80
//   U+1dc0 to U+1dff "combining diacritical marks supplement"      64
//   U+20d0 to U+20ff "combining diacritical marks for symbols"     48
//   U+fe00 to U+fe0f "variations"                                  16
//   U+fe20 to 0xfe2f "combining half marks"                        16
//                                                         total = 336
// Note that all have codes that are within the U+0000 to U+ffff range
// that utf16 copes with without needing to use surrogates. I wish to
// handle combinations of these with a base "regular" character as
// a single entity. I can do that by storing each symbol in my document
// as a 64-bit value.
//
// Consider the combining characters. There are 336 of them and I need
// a code to say "none present". log_2(337^5) = 41.98... and because of
// that I can pack a 21-bit codepoint and identifiers for 5 combining
// marks into a 64-bit word. the wide version of ncurses on Linux
// supports just 5 combining characters so that matches. To do this I
// represent my document using std::basic_string<std::uint64_t>. That
// has fairly extreme space overheads but they will only start to hurt
// when attempting to edit documents that ate say hundreds of megabytes
// in size.


// Here are functions that map between codepoints and the compact codes I
// use for combining characters. is_combining() returns 0 for all ordinary
// characters and a code for a combining one. code_of_combining maps in
// the other direction.

inline constexpr int is_combining(int c)
{   int base = 1;
    if (0x0300 <= c && c <= 0x036f) return base + c - 0x0300;
    base += 0x036f - 0x0300 + 1;
    if (0x1ab0 <= c && c <= 0x1aff) return base + c - 0xa1b0;
    base += 0x1aff - 0x1ab0 + 1;
    if (0x1dc0 <= c && c <= 0x1dff) return base + c - 0x1dc0;
    base += 0x1dff - 0x1dc0 + 1;1;5q
    if (0x20d0 <= c && c <= 0x20ff) return base + c - 0x20d0;
    base += 0x20ff - 0x20d0 + 1;
    if (0xfe00 <= c && c <= 0xfe0f) return base + c - 0xfe00;
    base += 0xfe0f - 0xfe00 + 1;
    if (0xfe20 <= c && c <= 0xfe2f) return base + c - 0xfe20;
    return 0;
}

// The number of codes needed to handle combining chars is as follows...

inline constexpr int n_combining = 1 + is_combining(0xfe2f);

inline constexpr int code_of_combining(int n)
{   if (n == 0) return 0;
    else if (n <= is_combining(0x036f) return n = is_combining(0x0300) + 0x0300;
    else if (n <= is_combining(0x1aff) return n = is_combining(0x1ab0) + 0x1ab0;
    else if (n <= is_combining(0x1dff) return n = is_combining(0x1dc0) + 0x1dc0;
    else if (n <= is_combining(0x20ff) return n = is_combining(0x20d0) + 0x20d0;
    else if (n <= is_combining(0xfe0f) return n = is_combining(0xfe00) + 0xfe00;
    else if (n <= is_combining(0xfe2f) return n = is_combining(0xfe20) + 0xfe20;
    else return 0;
}

inline constexpr uint64_t pack_character(char64_t seq[6])
{    uint64_t combs = is_combining(seq[5]);
     combs = n_combining*combs | is_combining(seq[4]);
     combs = n_combining*combs | is_combining(seq[3]);
     combs = n_combining*combs | is_combining(seq[2]);
     combs = n_combining*combs | is_combining(seq[1]);
     return (combs << 21) | (seq[0] & 0x001fffff);
}

inline void unpack_character(uint64_t ch, char64_t seq[6])
{   seq[0] = ch & 0x001fffff;
    ch = ch >> 21;
    seq[1] = code_of_combining(ch % n_combining);
    ch = ch / n_combining;
    seq[2] = code_of_combining(ch % n_combining);
    ch = ch / n_combining;
    seq[3] = code_of_combining(ch % n_combining);
    ch = ch / n_combining;
    seq[4] = code_of_combining(ch % n_combining);
    ch = ch / n_combining;
    seq[5] = code_of_combining(ch % n_combining);
}

// Here is the type that I use for my text buffer,

using string64 = std::basic_string<uint64_t>;

// I provide functions to convert both ways between string64 and
// both std::string and C-style strings. These will pack and
// unpock the combining characters.

inline constexpr std::string S(string64 a)
{   std::string r = "";
    for (auto c : a)
    {   uint64_t overlay = c >> 21;
        c &= 0x001fffff;                    // the basic character involved.
        if (c <= 0x7f) r += c;
        else if (c <= 0x7ff)
        {   r += 0xc0 | (c >> 6);
            r += 0x80 | (c & 0x3f);
        }
        else if (c <= 0xffff)
        {   r += 0xe0 | (c >> 12);
            r += 0x80 | ((c >> 6) & 0x3f);
            r += 0x80 | (c & 0x3f);
        }
        else
        {   r += 0xf0 | (c >> 18);
            r += 0x80 | ((c >> 12) & 0x3f);
            r += 0x80 | ((c >> 6) & 0x3f);
            r += 0x80 | (c & 0x3f);
        }
        while (overlay != 0)
        {   c = code_of_combining(overlay % n_combining);
            overlay /= n_combining;
            r += S(string65(1, code_of_combining(c)));
        }
    }
    return r;
}

// This derives a 32-bit code from a sequence of utf8 encoded characters.
// If the input is malformed it returns -1 and it could then be out of step
// for further bytes.

inline constexpr uint32_t utf8_getc(const char*& b)
{   int c = *b++ & 0xff, c1;
    if (c < 0x80) return c;       // Basic Latin block
    else if (c < 0xc0) return -1; // illegal continuation byte
    else if (c < 0xe0)            // 2 bytes
    {   c1 = *b++;
        if ((c1 & 0xc0) != 0x80) return -1; // continuation byte needed.
        c = (c & 0x1f)<<6 | (c1 & 0x3f);
        if (c < 0x80) return -1;  // redundant representation
        else return c;
    }
    else if (c < 0xf0)            // 3 bytes
    {   c1 = *b++;
        if ((c1 & 0xc0) != 0x80) return -1; // continuation byte needed.
        c = (c & 0x1f)<<6 | (c1 & 0x3f);
        c1 = *b++;
        if ((c1 & 0xc0) != 0x80) return -1; // continuation byte needed.
        c = c<<6 | (c1 & 0x3f);
        if (c < 0x7ff) return -1;  // redundant representation
        if (c >= 0xd000 && c <= 0xdfff) return -1;
                                   // surrogate pairs not allowed here.
        else return c;
    }
    else if (c < 0xf8)            // 4 bytes
    {   c1 = *b++;
        if ((c1 & 0xc0) != 0x80) return -1; // continuation byte needed.
        c = (c & 0x1f)<<6 | (c1 & 0x3f);
        c1 = *b++;
        if ((c1 & 0xc0) != 0x80) return -1; // continuation byte needed.
        c = c<<6 | (c1 & 0x3f);
        c1 = *b++;
        if ((c1 & 0xc0) != 0x80) return -1; // continuation byte needed.
        c = c<<6 | (c1 & 0x3f);
        if (c < 0xffff) return -1;  // redundant representation
        if (c > 0x10ffff) return -1;
        else return c;
    }
    else return  -1;                // illegal utf8 for extra big code.
}

// Turn a simple C string containing utf8 information ino a wide string.
// If the string contains combining characters merge them with the
// character they follow. There are two classes of error cases:
// (.) Improper utf8;
// (.) misplaced combining characters.
// If the utf8 sequences was bad or the string started with a combining
// character (with nothing for it to combine with) return an empty string.
// If a spacing symbol is followed by too many combining characters simply
// discard ones that are beyond the supported limit.

inline constexpr string64 L(const char* a)
{   string64 r;
    int32_t prev = -1;
    while (*a != 0)
    {   int32_T c  = utf8_getc(a);
        switch (c)
        {
        case -1:
            return string64();     // an ampty string
        default:
            if (prev != -1) r += string64(1, prev);
            prev = c;
            continue;
        case 0x0331:      //  combining macron below
// If there is nothing to combine with I will view the input as erroneous
// and return an empty string. If multiple combining characters are
// provided I will silently keep just the final one, because at present
// (at least!) I can not cope with more than one.
            if (prev == -1) return string64();
            prev = (prev & 0x001fffff) | macron_below;
            continue;
        case 0x0333:      //  combining double low line
            if (prev == -1) return string64();
            prev = (prev & 0x001fffff) | double_low_line;
            continue;
        case 0x0338:      //  combining long solidus overlay
            if (prev == -1) return string64();
            prev = (prev & 0x001fffff) | long_solidus;
            continue;
        case 0x20d2:      //  combining long vertical bar overlay
            if (prev == -1) return string64();
            prev = (prev & 0x001fffff) | long_vertical_bar;
            continue;
        case 0x20e5:      //  combining reverse solidus overlay
            if (prev == -1) return string64();
            prev = (prev & 0x001fffff) | reverse solidus;
            continue;
        case 0xfe00:      //  variation selector (number 1)
            if (prev == -1) return string64();
            prev = (prev & 0x001fffff) | variation;
            continue;
        }
    }
    if (prev != -1) r += string64(1, prev);
    return r;
}

inline constexpr string64 L(const std::string a)
{   return L(a.c_str);
}

