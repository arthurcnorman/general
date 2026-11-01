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


#include "wvs.h"


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

// The table here is the set of names used in HTML to denote characters
// and so I hope that many of the names will be familiar to many people.
// They are sorted into a collating order based on their names so I
// can look up names using binary search. Note that the longest name
// seems to be of length 31 ("CounterClockwiseContourIntegral"), and the
// shortest are of length 2 ("mu", "pi" and the quite a few others).
//
// The data here is derived from the HTML Living Standard at
// http://whatwg.org which notes on its contents page
// "Copyright 2004-2011 Apple Computer, Inc., Mozilla Foundation,
//  and Opera Software ASA. You are granted a license to use, reproduce
//  and create derivative works of this document."
//
// Some of the character names are shown as mapping onto pairs of Unicode
// symbols (&acE; is the first such: I might try to render it here as
// "~=", an &ac; sign (alternating current?) followed by a lowered equals
// sign). I have commented out all such cases in that it seems bad enough
// feel like worrying about things like &Afr; (Capital letter A rendered
// in a Fractur font at codepoint U+1d504) but support for Unicode
// combining marks and composites is a step too far for me at present!
//
// I have added a special extra &hash; to stand for "#" just for the
// convenience of Reduce. There are also a few other additions that
// are to assist my conversions to and from HEX. E.g. there is a name
// &frac12; where the suffix "ac12" could be seen as 4 hex digits. For
// reasons that apply within my code it is useful to arrange that the
// name &ac12; will ba mapped onto U+ac12.
//
// Just so you know, there are somewhat over 2000 names here.

// I have four lists of character names:
//   entities.cpp    the HTML entity names intended for use as in &Alpha;
//   adobenames.cpp  names proposed by Adobe
//   texnames.cpp    as for use with \Alpha
//   names from .unicode.rc where the user specifies shortcuts or
//                          custom names. 


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
    {   if (ch >= 0x80) return -1;
        s1.push_back((char)ch);
    }
    if (html_names.count(s1) != 0)  return html_names[s1];
    if (tex_names.count(s1) != 0)   return tex_names[s1];
    if (adobe_names.count(s1) != 0) return adobe_names[s1];
    if (ishexnum(s1))
    {   int32_t val = std::stoi(s1, nullptr, 16);
// I will disallow numbers that are either too large or that are in the
// range of surrogates.
        if (val > 0x0010ffff ||
            (val >= 0xf800 && val <= 0xdfff)) return -1;
        return val;
    }
    return -1;
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
{   std::vector<std::string> v;
    for (auto kv : user_names)
        if (kv.second == c) vecinsert(v, kv.first);
    for (auto kv : html_names)
        if (kv.second == c) vecinsert(v, kv.first);
    for (auto kv : tex_names)
        if (kv.second == c) vecinsert(v, kv.first);
    for (auto kv : adobe_names)
        if (kv.second == c) vecinsert(v, kv.first);
    return v;
}

// 

static void term_replace_chars_backwards(
    string32& line, int& caretpos,
    int n, string32 s)
{
// Replace n characters that are before the caret with bytes from the
// string32 s. 
#ifdef DEBUG
    fprintf(logfile, "replace_back(%d)\n", n); 
#endif
    if (n > caretpos) return; // not enough chars to delete - should never happen.
    caretpos -= n;
    line.erase(caretpos, n);
    line.insert(caretpos, s);
    caretpos += s.size();
}


// This next function is a bit horrid. If sizeof(wchar_t)==2 I need to use
// utf16 packing with surrogate pairs for some things. If that
// happens the link between positions in the string and columns on the screen
// goes awry. For now I will ignore that since it only hits if I am on
// windows and I have characters beyond U+FFFF. But in due course I may
// want to adjust probably be having functions that I used to map
// index positions within the string to where full characters start.
 
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
    fprintf(logfile, "make_wchar %x\n", c);
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


// The design for how ALT-x converts between names and symbols has
// gone throgh a number of drafts. Here is where it ends up:
//
// When you press ALT-x it may modify characters before the cursor. If
// you press it again without any intervening key-strokes it can continue
// a sequence of transformations. So ALT-x ALT-x may do one thing and
// ALT-x left right ALT-x may give a different result in cases that I
// will note here.
//
// The simplest case is that word{ALT-x} will replace the word with a
// single character that it names. The names supported icnlude all the
// names that HTML-5 defines as entity names. In HTML one would say
// e.g. "&alpha;" but here you just enter "alpha" and then ALT-x. The
// second ALT-x will turn the greek letter (or other symbol) back into the
// name it was derived from. As well as the HTML names you may use names
// from an Adobe list of "glyph names intended for users" and a selection
// of TeX/LaTeX keywords. Because of these multiple sources some chatacters
// may be known by multiple names. The trasformation as above always returns
// top the one the user had originally used.
// There are two main extras to explain here:
// (1) If one symbol-name forms a suffix of another then the conversion
//     to a symbol will first use the longest name possible. The next ALT-x
//     will cycle through progressively shorter matches before returning
//     to the textual input. A concrete example will be "oline" which
//     can also be interporeted as oli"ne".
// (2) If the single character generated from an original name has several
//     possible names recorded then if the sequence of ALT-x keys are
//     uninterrupted then the one originally entered is returned to. But
//     if any other keystrokes intervene than the character will be converted
//     to a canonical name even if the user had started with something else,
//     but in that case further ALT-x input will cycle through alternate
//     names and only when those have all been shown will the system go
//     back to the sinle4 character.
//
// Implicit in the above is that if a single character before the cursor
// is outside the Basic Latin Block and it has one or more recorded names
// then ALT-x replaces it with one of its names and can cycle through any
// others.
//
// If there are hex digits before the cursor then the longest match would
// grab six of them and the next shorter will grab 4. And in each case
// use those as a codepoint provided it is in range and not a surrogate.
// If there are character names those also join in. So the input 0211ee
// will cycle through U+0211ee, 01U+11ee and 0211&ee; which is 0211U+2147
// the final part being a Double-Struck Italic Small E. This should be
// just treating sequences of digits as if they are names. It makes it
// possible for the user to enter any codepoint they want.
// Consistent with this, use of ALT-x following a single character can
// include a string of hex digits as one if its "names". A consequence
// is that eg if you wanted to know the codepoint for Omega you could
// key in OmageALT-x then the screed displays it as a character. Then say
// left and right using the arrow keys. Now Alt-x converts the symbol back
// into the text "Omega" but a second ALT-x turns it into 03a9 bacause the
// symbol is U+03a9.
//
// Now there is the issue of overlays and diacritical marks, They are
// stored combined with the spacing symbol that they decorate. I will
// use a notation Cabc for a base character C with combining marks a, b
// and c. If combining marke are poresent this is a "complex character".
// If you type ALT-x ahead of a complex character Cxyz the behaviour will
// be as follows:
// (.) If Cabc has a known name then the first choice conversion will
//     be to that name.
// (.) If Cabc is not named or as a second choice when ALT-x is used again
//     ie text buffer gets expanded to hold "Cab c" with the final combining
//     mark separated off. And then behaviour is as for just "c" which will
//     be replaces by a name or a hex value.   
// To fit in with this if you enter either a name or a hex code that turns
// into a combining mark then as it turns into a character it merges with
// the predecessor. I think this is behaving as if the conversion between
// names and characters treats Cabc as C a b c with the packing as a
// single token merely an aspect of how it is represented in the buffer.
// Well delete-backward must remove just the last combining mark, while
// delete-forward removes the entire symbol. INserting a combining character
// should never leave it by itself in the buffer - it must merge in with
// a prior character. Well MAYBE as a kindness if you insert a combining
// character at the start of a line things behave as if you had first
// inserted a blank.
//
// To make a number of the more common cases easier to use I will
// introduce names as follows:
//   All of the official Unicode names but rendered as eg #macron_above
//   Shorthands: #grave, #acute, #circumflex, and an uncertain number more.
//

void convert(string32& line, int& caretpos)
{
    string32 input_word;;
    string32 output_word;
// When this function is called (triggered by ALT-x) the cursor will be
// to the right of some text, and that text can be modified. The most
// important case is when the text is a word that names a character.
// on which case the word will be replaced by that character.
// To illustrate this the material that will appear will be described
// using HTML notation.
//
//     alpha       => &alpha;
//     Ascr        => &Ascr;      mathematical script capital A
//     oline       => &oline;     match longest recognised word
//                                and it may really be oli&ne;
//     frac12      => (1/2)       but note it could be fr&ac12;
//
//     &alpha;     => nnnn        4 digit codepoint, eg   03b1
//     &Ascr;      => nnnnnn      6 digit codepoint, eg 01d49c
//
// I then want to close the cycle with eg
//     03ba        => alpha
//     01d49c      => Ascr
//
// There are a collection of awkward cases with ambiguities due to prefixing
// and to start with I still want the "longest match" rule to apply, 
// To resolve those I may want transformations of the following form:
//     &oline;     => oli&ne;
//     oli&ne;     => oli2260     code for &ne;
//     oli2260     => 203e        code for &oline;
//     203e        => oline
// so that the cycle is close via a range of possibilities.
//
//     Ascr        => &Ascr;
//     &Ascr;      => 01&d496;
// (&d496; is a Mathematical Bold Italic Small U which does not
// have a neat textual name as an HTML entity, but could still be wanted).
// If it had an entity name MBIu then we woold next see
//     01&d496;    => 01MBIu
//     01MBIu      => 0xd496
// but since it does not we skip a step...
//     01&d496;    => 01d496
//
//     &0100ac;    => 01&00ac;  (that is 01&not;)
//     01&not;     => 0100&ac;  (0100 followed by "inverted lazy s")
//     0100&ac;    => <mathematical bold italic small u>
//                 => &0100ac;
// where the step in <> is only used if there is an entity name to use.
// Well if enough TeX symbols are supported there may be!
//
// So try to formulate the rules.
// (1) find the string ending at the cursor that is the first of these found:
//     1.1:   a "complex character"
//     1.2:   any single (spacing) unicode character with code > U+007f
//     1.3:   letter a-z, A-Z followed by letters/digits (ie a word) 
//     1.4:   6 hex digits starting with 01 to 10
//     1.4:   4 hex digits
//
// 1.1: Split off the final combining char of the complex and rewrite as
//      the simpler base and digits for the combing mark.
// 1.2: Replace the character with its numeric code as either 4 or 6 digits. 
// 1.3: if the name denotes a recognised entity replace it with the character.
//      if not try with the next shorter string.
//      If you would end up creating a combining character and there is
//      a previous character on the line merge it in, otherwise do not
//      make that coversion (ie go and try for a shorter name).
//      if no replacement is found treat final char as in 1.5.
// 1.4:
// 1.5: A numeric code is on the screen. I make this the complex case.
//
// 2.1: A six digit code ....

// HEY let's only do the really simple cases for this first cut, and come
// back to being clever later on...



// BUG REPORT FROM PREVIOUS VERSION:
//   epsilon -> {\epsilon} -> e{\psi} -> e03c8 -> 03b5 -> epsi -> {\epsilon}
// and the "lon" gets lost when the string "psi" is spotted.

#ifdef DEBUG
    fprintf(logfile, "unicodeConvert with cx=%d\n", caretpos);
#endif
    if (caretpos == 0)
    {   beep();
        return;
    }
#ifdef DEBUG
    for (auto c : line)
        fprintf(logfile, "[%c]", c < 0x80 ? c : '@');
    fprintf(logfile, "\n"); fflush(logfile);
#endif
// Among the names I see for Unicode combining characters I observe
// "#egyptian_hieroglyph_modifier_damaged_at_bottom_start_and_top_end"
// and I need to look at enough characters that I will pick up that! I
// "BOX DRAWINGS LIGHT DIAGONAL UPPER CENTRE TO MIDDLE RIGHT AND MIDDLE LEFT TO LOWER CENTRE"
// is not (yet?) a name that I recognize but is is 89 letters long.
    const int longest_name = 90;
    int i = caretpos - longest_name;
    if (i < 0) i = 0;   // only go back as far as the start of the line.
    uint32_t c;
    for (;;)
    {   input_word = line.substr(i, caretpos-i);
        c = lookup_name(input_word);
        if (c != -1u) break;
        i++;
        if (i == caretpos) break;
    }
    if (c != -1u)
    {   output_word = string32(1, c);
        term_replace_chars_backwards(line, caretpos, caretpos-i, output_word);
        return;
    }
// Do not change the buffer at all.
    beep();
}

void TextEditor::unicodeConvert()
{   convert(buffer[cy], cx);
#ifdef DEBUG
    fprintf(logfile, "after update cx = %d\n", cx);
    for (wchar_t c : buffer[cy]) fprintf(logfile, "[%x]", c);
    fprintf(logfile, "\n");
#endif
}

// end of uniconv.cpp
