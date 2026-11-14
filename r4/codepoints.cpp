// codepoints.cpp                              Copyright 2026 Arthur Norman

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

// This file sets up maps from character names to codepoints and
// from codepoints both to an indication of the point denotes a
// combining character and to a multiset of banes associated with it.


#include "cuckoo.h"

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

static_warn(codepoints.OK1, "Main mapping from names to codepoints failed");
static_warn(codepoints.OK2, "Multimap from codepoints to names failed");

#if 0
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
#endif

// end of codepoints.cpp

