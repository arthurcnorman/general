
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

// Right now this is a place-holder until I find a nice list of
// TeX symbols that is shorter than the huge comprehensive one and that
// provides me with unicode equivalents.

glyphMap tex_names =
{
    {"Alpha",                 0x0391},
    {"alpha",                 0x0381},
    {"neg",                   0x00AC},
    {"pm",                    0x00B1},
    {"cdot",                  0x00B7},
    {"to",                    0x2192},
    {"Rightarrow",            0x21D2},
    {"Leftrightarrow",        0x21D4},
    {"forall",                0x2200},
    {"partial",               0x2202},
    {"exists",                0x2203},
    {"emptyset",              0x2205},
    {"nabla",                 0x2207},
    {"in",                    0x2208},
    {"notin",                 0x2209},
    {"prod",                  0x220F},
    {"sum",                   0x2211},
    {"surd",                  0x221A},
    {"infty",                 0x221E},
    {"wedge",                 0x2227},
    {"vee",                   0x2228},
    {"cap",                   0x2229},
    {"cup",                   0x222A},
    {"int",                   0x222B},
    {"approx",                0x2248},
    {"neq",                   0x2260},
    {"equiv",                 0x2261},
    {"leq",                   0x2264},
    {"geq",                   0x2265},
    {"subset",                0x2282},
    {"supset",                0x2283},
    {"circ",                  0x00B0},
    {"times",                 0x00D7},
    {"lfloor",                0x230A},
    {"rfloor",                0x230B},
    {"lceil",                 0x2308},
    {"rceil",                 0x2309}
};

// end of texnames.cpp

    