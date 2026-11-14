// uniconv.cpp                                 Copyright 2026 Arthur Norman

/**************************************************************************
 * Copyright (C) 2026, Arthur Norman                                      *
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
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
 * DAMAGE.                                                                *
 *************************************************************************/

// $Id$


#include "r4.h"

// If you have a "complex" character just before the cursor then
// denormalise will split it into its base and the last of its
// combining marks. Note that the ncurses type "cchar_t" holds an array
// of wchar_t, and on Windows that is in utf-16 while most of what I
// do here is in utf32 - so I need to be able to convert to and from
// that form because whatever machine I am on I keep my text buffer
// using 32-bit characters.

size_t wchar_to_utf32(uint32_t* dest, wchar_t* src, size_t len)
{   size_t r = 0;
    for (size_t i=0; i<len; i++)
    {   uint32_t c = *src++;
        if (c >= 0xd800 && c <= 0xdbff)
        {   c = 0x10000 +
                ((c & 0x3ff)<<10) |
                (*src++ & 0x3ff);
            i++;
        }
        *dest++ = c;
        r++;
    }
    return r;
}

size_t utf32_to_wchar(wchar_t* dest, uint32_t* src, size_t len)
{   size_t r = 0;
    for (size_t i=0; i<len; i++)
    {   uint32_t c = *src++;
        if (sizeof(wchar_t)==4 && c > 0xffff && r < CCHARW_MAX-1)
        {   *dest++ = 0xd800 | ((c-0x10000)>>10);
            r++;
            c = 0xdc00 | (c & 0x3ff);
        }
        if (r < CCHARW_MAX)
        {   *dest++ = c;
            r++;
        }
    }
    return r;
}

// Here if the character before the cursor is a combining one it should be
// merged in with whatever came befote it.

void R4::normalise(string32& line, int& x)
{   if (cx == 0) return;
    display("begin normalise: ", line, "x = ", x);
    uint32_t c = line[x-1];
#ifdef DEBUG
    fprintf(logfile(), "potential combining char = %x\n", c);
#endif
    if ((codepoints.lookup(c) & 0x80000000) == 0) return; // A simple character.
// Now remove the combining mark from the line.
    line.erase(x-1, 1);
    x--;
    display("combing char removed I hope: ", line, "x = ", x);
// As a special case if I try to normalise at the very start of a line
// and I have a combining mark I will forcibly insert a space before
// it so it has something to combine with.
    if (x == 0)
    {   line.insert(0, 1, ' ');
        x = 1;
    }
    display("need to merge char into: ", line, "x = ", x);
    uint32_t mergeWith = line[x-1];
    cchar_t newchar;
    std::memset(&newchar, 0, sizeof(newchar));
    uint32_t ww[CCHARW_MAX];
    memset(&ww, 0, sizeof(ww));
    size_t n;
#ifdef DEBUG
    fprintf(logfile(), "mergeWith = %x\n", mergeWith);
#endif
    if (mergeWith <= 0x0010ffff)
    {   ww[0] = mergeWith;
        n = 1;
    }
    else
    {   cchar_t cc = ccharmap[mergeWith];
#ifdef DEBUG
        fprintf(logfile(), "composite char is %x %x %x\n", cc.chars[0], cc.chars[1], cc.chars[2]);
#endif
        std::memcpy(&newchar, &cc, sizeof(cchar_t)); // copy any attributes
        n = wchar_to_utf32(ww, cc.chars, CCHARW_MAX);
#ifdef DEBUG
        fprintf(logfile(), "composite char expands as %x %x %x\n", ww[0], ww[1], ww[2]);
#endif
    }
// Now w is an array of 32-bit characters. Either just one if the preceeding
// character has been a simple one or the base plus any existing overlays
// if it had been complicated.
    int i = 0;
    while (i < CCHARW_MAX && ww[i] != 0) i++;
    if (i == CCHARW_MAX) beep();  // The cchar_t is already full
    else ww[i] = c;
    utf32_to_wchar(newchar.chars, ww, CCHARW_MAX);
    line[x-1] = lookup_composite(newchar);
    display("end normalise: ", line, "x = ", x);
    if (!dialog) marks_after_replace(x+1, x);
}

// If the character before the cursor is "complex", i.e. it involves
// one or more combining marke, the last of those should be stripped
// off and lest as a separate character. As it where "Cabc" -> "Cab  c".

void R4::denormalise(string32& line, int& x)
{   if (x == 0) return;         // Do nothing if at start of line.
    int oldx = x;
    display("start denormalise", line, "x = ", x);
    uint32_t c = line[x-1];
    if (c <= 0x0010ffff) return; // A simple character. 
    cchar_t w = ccharmap[c];
    uint32_t ww[CCHARW_MAX];
    memset(&ww, 0, sizeof(ww));
// In case I am on a machine where sizeof(wchar_t)==4 I expand to
// 32-bit characters.
    size_t n = wchar_to_utf32(ww, w.chars, CCHARW_MAX);
    int i;
    for (i=CCHARW_MAX-1; i!=0; i--)
        if (ww[i] != 0) break;  // find final character.
    uint32_t final = ww[i];     // a combining mark.
    if (i == 1) c = ww[0];      // Removing the only or final combiner
    else
    {   ww[i] = 0;
        cchar_t reduced;
        memset(&reduced, 0, sizeof(reduced));
        utf32_to_wchar(reduced.chars, ww, i-1);
        c = lookup_composite(reduced);
    }
//Now I need to replace the character just before the cursor with the
// pair {c, final}
    x--;
    line.erase(x, 1);
    line.insert(x, 1, c);
    x++;
    line.insert(x, 1, final);
    x++;
    if (!dialog) marks_after_replace(oldx, x);
    display("end denormalise", buffer[cy], "cx = ", cx);
}

static int digofhex(wchar_t ch)
{   switch (ch)
    {
    case L'0': return 0;
    case L'1': return 1;
    case L'2': return 2;
    case L'3': return 3;
    case L'4': return 4;
    case L'5': return 5;
    case L'6': return 6;
    case L'7': return 7;
    case L'8': return 8;
    case L'9': return 9;
    case L'a': case L'A': return 10;
    case L'b': case L'B': return 11;
    case L'c': case L'C': return 12;
    case L'd': case L'D': return 13;
    case L'e': case L'E': return 14;
    case L'f': case L'F': return 15;
    default:  return -1;
    }
}

// Encode into buffer b as up to 4 characters (plus a nul). Because I
// am only concerned with Unicode I only need encode values in the
// range 0 to 0x10ffff. Returns the number of chars packed (not counting
// the terminating '\0').

int utf_encode(unsigned char* b, int c)
{   unsigned char* p = b;
    c &= 0x1fffff;   // limit myself to 21-bit values here
    if (c <= 0x7f) *p++ = c;
    else if (c <= 0x7ff)
    {   *p++ = 0xc0 | (c >> 6);
        *p++ = 0x80 | (c & 0x3f);
    }
    else if (c <= 0xffff)
    {   *p++ = 0xe0 | (c >> 12);
        *p++ = 0x80 | ((c >> 6) & 0x3f);
        *p++ = 0x80 | (c & 0x3f);
    }
    else
    {   *p++ = 0xf0 | (c >> 18);
        *p++ = 0x80 | ((c >> 12) & 0x3f);
        *p++ = 0x80 | ((c >> 6) & 0x3f);
        *p++ = 0x80 | (c & 0x3f);
    }
    *p = 0;
    return static_cast<int>(p - b);
}

// decode the given byte-string to yield a codepoint. Set utf_bytes
// to be the number of bytes consumed. Return -1 in bad cases.

int utf_bytes = 0;

int utf_decode(const unsigned char* b)
{   int c = *b++, c1, c2, c3;
    utf_bytes = 1;
    switch (c & 0xf0)
    {
//  case 0x00:
//  case 0x10:
//  case 0x20:
//  case 0x30:
//  case 0x40:
//  case 0x50:
//  case 0x60:
//  case 0x70:
        default:
            return c;
        case 0x80:
        case 0x90:
        case 0xa0:
        case 0xb0:
            return -1;  // out of place continuation marker
        case 0xc0:
        case 0xd0:
            c1 = *b;
            if ((c1 & 0xc0) != 0x80) return -1; // not continuation
            utf_bytes += 1;
            c = ((c & 0x1f) << 6) | (c1 & 0x3f);
            if (c <= 0x7f) return 1;            // redundant representation
            return c;
        case 0xe0:
            c1 = *b++;
            if ((c1 & 0xc0) != 0x80) return -1; // not continuation
            c2 = *b;
            if ((c2 & 0xc0) != 0x80) return -1; // not continuation
            utf_bytes += 2;
            c = ((c & 0x0f) << 12) | ((c1 & 0x3f) << 6) | (c2 & 0x3f);
            if (c <= 0x7ff) return -1;
            return c;
        case 0xf0:
            if ((c & 0x08) != 0) return -1;
            c1 = *b++;
            if ((c1 & 0xc0) != 0x80) return -1; // not continuation
            c2 = *b++;
            if ((c2 & 0xc0) != 0x80) return -1; // not continuation
            c3 = *b;
            if ((c3 & 0xc0) != 0x80) return -1; // not continuation
            utf_bytes += 3;
            c = ((c & 0x07) << 18) | ((c1 & 0x3f) << 12) |
                   ((c2 & 0x3f) << 6) | (c3 & 0x3f);
            if (c <= 0xffff) return -1;
            return c;
    }
}

static int hexval(int c)
{
// Regardless of the fact that in general I am working in Unicode, here
// I am only interested in the digits 0-9 and the letters a-f and A-F and
// if I only accept characters up to 0x7f.
    if (c < 0 || c >= 0x7f) return -1;
    if (std::isdigit(static_cast<unsigned char>(c)))
        return c - '0';
// I will in fact allow for G->17, H=>18 and so on, and not fault
// input characters that are even beyond the range of letters!
    else if (std::isupper(static_cast<unsigned char>(c)))
        return c + (10 - 'A');
    else return c + (10 - 'a');
}

// User shortcusts need to be kept in a dynamic unordered_map because
// the table is set up at runtime.

glyphMap user_names;  // For user-defined shortcuts.

bool ishexnum(std::string s)
{   if (s.length() != 4 && s.length() != 6) return false;
    for (auto ch : s)
    {   if (!(('0' <= ch && ch <= '9') ||
              ('a' <= ch && ch <= 'f'))) return false;
    }
    return true;
}

// Given a string32 check if all characters in it are in the
// basic latin block, and if so whether they denote a textual
// representation of some Unicode character. I have some lists of
// character names and also allow 4 or 6-gigit hex values where
// digits beyong '9' must be given in lower case.

// I have lookup_user_name as a separate function because i want to
// do a complete search there before considering other options.

std::uint32_t lookup_user_name(string32 s)
{   std::string s1 = "";
    for (auto ch : s)
    {   if (ch >= 0x80) return -1;
        s1.push_back((char)ch);
    }
    if (user_names.count(s1) != 0)  return user_names[s1];
    return -1;
}

std::uint32_t lookup_name(string32 s)
{   std::string s1 = "";
    for (auto ch : s)
    {   if (ch >= 0x80) return -1U;
        s1.push_back((char)ch);
    }
    uint32_t val = codepoints.lookup(s1.c_str());
// Well: here if the 0x0f000000 field is non-zero I need to create and
// return a complex char. NOT DONE
    if (val != -1U) return val;
    if (ishexnum(s1))
    {   int32_t val = std::stoi(s1, nullptr, 16);
// I will disallow numbers that are either too large or that are in the
// range of surrogates.
        if (val > 0x0010ffff ||
            (val >= 0xf800 && val <= 0xdfff)) return -1U;
        return val;
    }
    return -1U;
}

// The converse search starts with a code and needs to recover the
// associated name. Well a single code can have several names, eg ones
// from HTMY, TeX and user shortcuts. So I return a vector of all that I
// manage to find.


// Add a string to the vector if it is not already present

void vecinsert(std::vector<std::string>& v, std::string s)
{   for (auto e : v)
        if (s.compare(e) == 0) return;  // already present
    v.push_back(s);
}

std::vector<std::string> lookup_code(std::uint32_t c)
{   uint32_t w = codepoints.lookup(c);
    size_t offset = w & 0xfffff;
    size_t len = (w>>20) & 0x7ff;
    std::vector<std::string> v;
    for (size_t i=0; i<len; i++)
        vecinsert(v, std::string(codepoints.names[offset+i]));
    return v;
}

void R4::replace_chars_backward(string32& line, int& x)
{
// I the text in line before the caret (x) is expected to match
// word_text, so I delete just the number of storage units that word_text
// uses without needing to worry about combining characters etc.
    int oldx = x;
    x -= word_text.length();
    line.erase(x, word_text.length());
// HOWEVER the replacemnt text may include combining marks including the
// case that all it is is a single isolated combining mark that must be
// merged into whatever glyph was already present...
    for (auto c : replacement_text)
    {   line.insert(x, 1, c);
        x++;
        normalise(line, x);
    }
// BUT WORRY. If there are marks (eg <B>) present on the line at positions
// beyond where I have just made changes they can have moved. An especially
// jolly case is if such a mark was present within the text that go replaced.
    if (!dialog) marks_after_replace(oldx, x);
}

static void make_wchar(wchar_t* s, int c)
{   c &= 0x001fffff;
    if (sizeof(wchar_t) == 4 || c <= 0xffff)
    {   s[0] = c;
        s[1] = 0;
    }
    else
    {   s[0] = 0xd800 + ((c >> 10) & 0x3ff);
        s[1] = 0xdc00 + (c & 0x3ff);
        s[2] = 0;
    }
#ifdef DEBUG
    fprintf(logfile(), "make_wchar %x\n", c);
#endif
}

// Surrogates are used with utf16, and so may appear in native
// Windows long strings. On Linux etc they should never arise.

bool is_high_surrogate(int c)
{   return c>=0xd800 && c <= 0xdbff;
}

bool is_low_surrogate(int c)
{   return c>=0xdc00 && c <- 0xdfff;
}


// The design for how ALT-x converts between names and symbols
// and numeric codes.
//
// When you press ALT-x it may modify characters before the cursor. If
// you press it again without any intervening key-strokes it can continue
// a sequence of transformations. So ALT-x ALT-x may do one thing and
// ALT-x left right ALT-x may give a different result in cases that I
// will note here.
//
// If the first ALT-x is to the right of a word or a hex number and
// that has a proper interpretation as a valid character then the
// character should appear. There can be ambiguity when one character name
// is a suffix or another and between 6 and 4 digit hex values (I only
// handle just those lengths) so subsequent ALT-x operations cycle through
// the possibilities and in due course return to the original word.
// The first character shown will be the one with the longest matching name
// in a user's ".unicode" file. Then any shorter matches from that file.
// Then in order of decreasing length known words and hex numbers.
//
// So VeryLongString => {C1} -> Very{C2} => VeryLong{C3} => VeryLongString
// if {C1}, {C2} and {C2} are characters corresponding to parts of the
// input. Similarly
//   xy102030 => {C1} => xy{C2} => xy10{C3} => xy102030
// where {C2} and {C3} are characters with the codepoints as given in hex.
//
// If on the first ALT-x the character before the cursor is U+003e or
// above there may be several names associated with that code (eg
// a user abbreviation, and HTML entity name and a TeX keyword}.
// The sequence is then
//  {C1} => name1 => name2 => hexcode => {C1}
//
// Now there is the issue of overlays and diacritical marks,
// These are treated for the purposes of these transformations as if
// just before the above transitions any final combining mark is extracted
// to stand as its own unit for transformation (so the item before it is
// left stripped of that mark), and at the end of any transformation a
// trailing combining mark is merged into the preceeding stmbol.

std::string hexify(uint32_t n)
{   if (n <= 0xffff) return std::format("{:04x}", n);
    else return std::format("{:06x}", n);
}

void R4::convert(string32& line, int& x)
{   display("start of convert ", line, "x = ", x);
    if (uniConvActive)
    {   if (startedAsName) continueName(line, x);
        else continueCode(line, x);
        return;
    }
    if (x == 0)
    {   beep();         // An empty line will not match anything.
        return;
    }
    uint32_t ch = line[x-1];
    if (ch >= 0x7e)
    {   converted_names = lookup_code(ch);
        std::string replacement;
        if (converted_names.size() != 0)
        {   replacement = converted_names[0];
            converted_names.erase(converted_names.begin());
            uniConvActive = true;
            startedAsName = false;
            inHex = false;
        }
        else
        {   replacement = hexify(ch);
            uniConvActive = true;
            startedAsName = false;
            inHex = true;
        }
        word_text = string32(1, ch);
        replacement_text = L(replacement);
        replace_chars_backward(line, x);
        return;
    }
// Among the names I see for Unicode combining characters I observe
// "#egyptian_hieroglyph_modifier_damaged_at_bottom_start_and_top_end"
// and I need to look at enough characters that I will pick up that! I
// "BOX DRAWINGS LIGHT DIAGONAL UPPER CENTRE TO MIDDLE RIGHT AND MIDDLE LEFT TO LOWER CENTRE"
// is not (yet?) a name that I recognize but is is 89 letters long.
    const int longest_name = 90;
    int i = x - longest_name;
    if (i < 0) i = 0;   // only go back as far as the start of the line.
    uint32_t c;
// I start by checking if a user custom name matches at any length. If
// it does that will be my first choice. I will not want to allow for
// matches of length 1 -- even though the Adobe list includes all
// the letters of the alphabet.
    word_text = line.substr(i, x-i);
    while (word_text.length() > 1)
    {   c = lookup_user_name(word_text);
        if (c != -1u)
        {   replacement_text = string32(1, c);
            uniConvActive = true;
            startedAsName = true;
            userNames = true;
            replace_chars_backward(line, x);
// I leave word_text as the word originally present when ALT-x was
// pressed and replacement_text as what has just been placed in the buffer.
// That will make it easy to undo the adjustment.
            return;
        }
        word_text.erase(0, 1);
    }
// If none of the custom names matched try my fixed database.
    i = x - longest_name;
    if (i < 0) i = 0;   // only go back as far as the start of the line.
    word_text = line.substr(i, x-i);
    while (word_text.length() > 1)
    {   c = lookup_name(word_text);
        if (c != -1u)
        {   replacement_text = string32(1, c);
            uniConvActive = true;
            startedAsName = true;
            userNames = false;
            replace_chars_backward(line, x);
            return;
        }
        word_text.erase(0, 1);
    }
// If the word before the mark does not match anything then beep and do
// not alter the text.
    beep();
}

void R4::continueName(string32& line, int& x)
{
// Here if userNames is true I need to search for a suffix of
// word_text that is alse a user-specified name. When I get here the
// item just before the cursor is a single character that had been
// named by the word originally used. Anyway what I do first is
// I restore the text buffer to where it was just before the last
// substitution.
    std::swap(word_text, replacement_text);
    replace_chars_backward(line, x);
    std::swap(word_text, replacement_text);
// Word_text was the match I had found, so lost its first char so I can
// look for another.
    word_text.erase(0, 1);
    uint32_t c = -1;
    std::string replacement;
    if (userNames)
    {   while (word_text.length() > 1)
        {   c = lookup_user_name(word_text);
            if (c != -1u)
            {   replacement_text = string32(1, c);
                uniConvActive = true;
                startedAsName = true;
                userNames = true;                 // still!!
                replace_chars_backward(line, x);
                return;
            }
            word_text.erase(0, 1);
        }
// Here there were no more user abbreviations to use... so try for
// system ones, starting again with the longest.
        const int longest_name = 90;
        int i = x - longest_name;
        if (i < 0) i = 0;   // only go back as far as the start of the line.
        word_text = line.substr(i, x-i);
        userNames = false;
    }
    while (word_text.length() > 1)
    {   c = lookup_name(word_text);
        if (c != -1u)
        {   replacement_text = string32(1, c);
            uniConvActive = true;
            startedAsName = true;
            userNames = false;
            replace_chars_backward(line, x);
            return;
        }
        word_text.erase(0, 1);
    }
// After all conversions to extended characters have been tried just
// leave back where things started.
    uniConvActive = false;
}

void R4::continueCode(string32& line, int& x)
{
// here I had started with a single character and I mapped it
// onto a name. There may be multiple names, so I set up a vector
// convertedNames and I will have used the first of those. When I
// run out of names I will convert to hex. inHex is true if that is
// what I have reached. First put the buffer back as it had
// been before I did anything.
    std::swap(word_text, replacement_text);
    replace_chars_backward(line, x);
    std::swap(word_text, replacement_text);
    if (inHex)
    {   uniConvActive = false;   // reached the end of the cycle.
        return;
    }
    std::string replacement;
    if (converted_names.size() != 0)
    {   replacement = converted_names[0];
        converted_names.erase(converted_names.begin());
        uniConvActive = true;
        startedAsName = false;
        inHex = false;
    }
    else
    {   replacement = hexify(line[x-1]);
        uniConvActive = true;
        startedAsName = false;
        inHex = true;
    }
    replacement_text = L(replacement);
    replace_chars_backward(line, x);
}

void R4::unicodeConvert()
{   convert(buffer[cy], cx);
    display("after update: ", buffer[cy], "cx = ", cx);
}

void R4::cmd_unicodeConvert()
{   convert(input_line, cmd_cx);
}

// end of uniconv.cpp
