
// texnames.cpp                                Copyright 2026 Arthur Norman

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


// Here I have a table showing the names of TeX/LaTeX symbols. In TeX each
// would be presented with an initial "\" but I do not show that here.
// Each is paired with a Unicode codepoint.
//
// In case some symbols need combining-pairs of unicode glyphs I include
// the same scheme that I have for HTML marks.
//
//      0x200a   hair space. Used with a medium math space to make a
//               broad space. This does not make a lot of sense if
//               working with a fixed pitch font. I will use U+00A0
//               (non breaking space) instead and so noy use this.
//
//      0x0331   combining macron below
//      0x0333   combining double low line
//      0x0338   combining long solidus overlay
//      0x20d2   combining long vertical bar overlay
//      0x20e5   combining reverse solidus overlay
//      0xfe00   variation selector
// For these I put a 3-bit field at 0xe00000 and a non-zero value
// in there will indicate that the unicode entity in the 0x1fffff bits
// is to be modified on display by sending one of these after it.

enum combining_mark
{   macron_below      = 0x200000,
    double_low_line   = 0x400000,
    long_solidus      = 0x600000,
    long_vertical_bar = 0x800000,
    reverse_solidus   = 0xa00000,
    variation         = 0xc00000,
    combining_spare   = 0xe00000
};

// Right now this is a place-holder until I find a nice list of
// TeX symbols that is shorter than the huge comprehensivce one and that
// provides me with unicode equivalents.

name_to_code tex_names[] =
{
    {"Alpha",                                   0x391},
    {"alpha",                                   0x381}
};

// end of texnames.cpp
