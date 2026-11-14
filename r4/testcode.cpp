// testcode.cpp                                Copyright 2026 Arthur Norman

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


// This links with codepoints.cpp to test the static tables...
//
// Just what I test may vary as I debug, but e.g. I can verify that
// when starting with a codepoint I extract a catalog of the names
// that would map to it.


#include "cuckoo.h"



int main()
{   if (codepoints.OK1) std::cout << "*** Forward table set up properly ***\n";
    if (codepoints.OK2) std::cout << "*** Backward able set up properly ***\n";
    std::cout << "Table capacity=" << codepoints.table_capacity << "\n"
              << "  count_of_stored=" << codepoints.count_of_stored
              << "  load=" << (100.0*codepoints.count_of_stored/codepoints.table_capacity)
              << "  max probes=" << codepoints.max_probes << "\n"
              << "  count_of_intstored=" << codepoints.count_of_intstored
              << "  intload=" << (100.0*codepoints.count_of_intstored/codepoints.table_capacity)
              << "  max intprobes=" << codepoints.max_intprobes << "\n";

    std::uint32_t point = codepoints.lookup(0x03b1); 
    std::cout << std::hex << point << "\n";
    bool combine = (point & 0x8000000) != 0;
    int count = (point >> 20) & 0x7f;
    int offset = point & 0xfffff;
    for (int i=0; i<count; i++)
        std::cout << codepoints.names[offset+i] << "\n";
    return 0;
}

// end of testcode.cpp

