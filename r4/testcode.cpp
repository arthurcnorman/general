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

#define GENERATE 1

#ifdef GENERATE

#include <fstream>
#include <format>
#include <cstring>


int findname1(const char* s)
{   for (int i=0; i<3; i++)
    for (size_t j=0; j<codepoints.M; j++)
    {   const char* w = codepoints.key[i][j];
        if (w == nullptr) continue;
        if (std::strcmp(s, w) == 0) return i;
    }
    return -1;
}

int findname2(const char* s)
{   for (int i=0; i<3; i++)
    for (size_t j=1; j<codepoints.M; j++)
    {   const char* w = codepoints.key[i][j];
        if (w == nullptr) continue;
        if (std::strcmp(s, w) == 0) return j;
    }
    return -1;
}

std::string fix_string(const char* s)
{   std::string r = "";
    while (*s != 0)
    {   if (*s == '\\') r.push_back('\\');
        r.push_back(*s++);
    }
    return r;
}


#define FF std::format

int main()
{   std::ofstream F("generated.cpp", std::ofstream::out);

    F << FF("#include <cstdint>\n");
    F << FF("#include <iostream>\n");
    F << FF("\n");
    F << FF("template<size_t N>\n");
    F << FF("class CuckooMap\n");
    F << FF("{{\n");
    F << FF("public:\n");
    F << FF("    static const constexpr size_t M = {};\n", codepoints.M);
    F << FF("\n");
    F << FF("    const char* key[3][M] =\n");
    F << FF("    {{{{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.key[0][i] == nullptr)
            F << FF("       nullptr,\n");
        else F << FF("       \"{:s}\",\n", fix_string(codepoints.key[0][i]));
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.key[1][i] == nullptr)
            F << FF("       nullptr,\n");
        else F << FF("       \"{:s}\",\n", fix_string(codepoints.key[1][i]));
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.key[2][i] == nullptr)
            F << FF("       nullptr,\n");
        else F << FF("       \"{:s}\",\n", fix_string(codepoints.key[2][i]));
    F << FF("     }}  \n");
    F << FF("    }};\n");
    F << FF("    uint32_t    val[3][M] =\n");
    F << FF("    {{{{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.val[0][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.val[0][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.val[0][i]);
        else if (codepoints.val[0][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.val[0][i]);
        else F << FF("        {:#010x},\n", codepoints.val[0][i]);
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.val[1][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.val[1][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.val[1][i]);
        else if (codepoints.val[1][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.val[1][i]);
        else F << FF("        {:#010x},\n", codepoints.val[1][i]);
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.val[2][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.val[2][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.val[2][i]);
        else if (codepoints.val[2][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.val[2][i]);
        else F << FF("        {:#010x},\n", codepoints.val[2][i]);
    F << FF("     }}\n");
    F << FF("    }};\n");
    F << FF("\n");
    F << FF("    uint32_t    intkey[3][M] =\n");
    F << FF("    {{{{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.intkey[0][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.intkey[0][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.intkey[0][i]);
        else if (codepoints.intkey[0][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.intkey[0][i]);
        else F << FF("        {:#010x},\n", codepoints.intkey[0][i]);
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.intkey[1][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.intkey[1][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.intkey[1][i]);
        else if (codepoints.intkey[1][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.intkey[1][i]);
        else F << FF("        {:#010x},\n", codepoints.intkey[1][i]);
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.intkey[2][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.intkey[2][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.intkey[2][i]);
        else if (codepoints.intkey[2][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.intkey[2][i]);
        else F << FF("        {:#010x},\n", codepoints.intkey[2][i]);
    F << FF("     }}\n");
    F << FF("    }};\n");
    F << FF("    uint32_t    intval[3][M] =\n");
    F << FF("    {{{{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.intval[0][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.intval[0][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.intval[0][i]);
        else if (codepoints.intval[0][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.intval[0][i]);
        else F << FF("        {:#010x},\n", codepoints.intval[0][i]);
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.intval[1][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.intval[1][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.intval[1][i]);
        else if (codepoints.intval[1][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.intval[1][i]);
        else F << FF("        {:#010x},\n", codepoints.intval[1][i]);
    F << FF("     }},\n");
    F << FF("     {{\n");
    for (size_t i=0; i<codepoints.M; i++)
        if (codepoints.intval[2][i] == -1U)
            F << FF("               -1U,\n");
        else if (codepoints.intval[2][i] <= 0xffff)
            F << FF("            {:#06x},\n", codepoints.intval[2][i]);
        else if (codepoints.intval[2][i] <= 0xffffff)
            F << FF("          {:#08x},\n", codepoints.intval[2][i]);
        else F << FF("        {:#010x},\n", codepoints.intval[2][i]);
    F << FF("     }}\n");
    F << FF("    }};\n");
    F << FF("    const char* names[3*M]   =\n");
    F << FF("    {{\n");
    for (size_t i=0; i<3*codepoints.M; i++)
        if (codepoints.names[i] == nullptr)
            F << FF("    nullptr,\n");
        else F << FF("    key[{}][{}],\n", findname1(codepoints.names[i]),
                                           findname2(codepoints.names[i]));
    F << FF("    }};\n");
    F << FF("    const char* alphanames[3*M] =\n");
    F << FF("    {{\n");
    for (size_t i=0; i<3*codepoints.M; i++)
        if (codepoints.alphanames[i] == nullptr)
            F << FF("    nullptr,\n");
        else F << FF("    key[{}][{}],\n", findname1(codepoints.alphanames[i]),
                                           findname2(codepoints.alphanames[i]));
    F << FF("    }};\n");
    F << FF("    static constexpr const int nlengths = {};\n", codepoints.nlengths);
    F << FF("    uint32_t    namelenp[nlengths] =\n");
    F << FF("    {{\n");
    for (int i=0; i<codepoints.nlengths; i++)
        F << FF("      {},\n", codepoints.namelenp[i]);
    F << FF("    }};\n");
    F << FF("\n");
    F << FF("    std::uint64_t hash_multiplier = 0x9e3779b97f4a7c13;\n");
    F << FF("    bool OK1 = true, OK2 = true;\n");
    F << FF("    size_t table_capacity = 3*M;\n");
    F << FF("    size_t count_of_stored = 0;\n");
    F << FF("    size_t count_of_intstored = 0;\n");
    F << FF("    size_t max_probes = 0;\n");
    F << FF("    size_t max_intprobes = 0;\n");
    F << FF("\n");
    F << FF("    constexpr bool strequal(const char* a, const char* b) const\n");
    F << FF("    {{   int ca = 0, cb = 0;\n");
    F << FF("        if (a == nullptr || b == nullptr) return false;\n");
    F << FF("        while ((ca = *a++) != 0)\n");
    F << FF("        {{   if (ca != *b++) return false;\n");
    F << FF("        }}\n");
    F << FF("        return *b == 0;\n");
    F << FF("    }}\n");
    F << FF("\n");
    F << FF("    constexpr uint64_t hash1(const char* s) const\n");
    F << FF("    {{   uint64_t r = 1;\n");
    F << FF("        while (*s != 0)\n");
    F << FF("        {{   r = 257*r + *s++;\n");
    F << FF("        }}\n");
    F << FF("        return r;\n");
    F << FF("    }}        \n");
    F << FF("\n");
    F << FF("// lookup will return -1U if the string is not present, and as can be\n");
    F << FF("// seen does at most 3 probes.\n");
    F << FF("    constexpr uint32_t lookup(const char* k) const\n");
    F << FF("    {{   uint64_t hv = hash1(k);\n");
    F << FF("        size_t h1 = hv % M;\n");
    F << FF("        if (key[0][h1] != nullptr &&\n");
    F << FF("            strequal(key[0][h1], k)) return val[0][h1];\n");
    F << FF("        size_t h2 = ((hv<<20) | (hv>>44)) % M;\n");
    F << FF("        if (key[1][h2] != nullptr &&\n");
    F << FF("            strequal(key[1][h2], k)) return val[1][h2];\n");
    F << FF("        size_t h3 = ((hv<<40) | (hv>>24)) % M;\n");
    F << FF("        if (key[2][h3] != nullptr &&\n");
    F << FF("            strequal(key[2][h3], k)) return val[2][h3];\n");
    F << FF("        return -1;\n");
    F << FF("    }}\n");
    F << FF("\n");
    F << FF("    constexpr uint32_t lookup(uint32_t k) const\n");
    F << FF("    {{   uint64_t hv = k;\n");
    F << FF("        hv=hv*hv*k;\n");
    F << FF("        size_t h1 = hv % M;\n");
    F << FF("        if (intkey[0][h1] == k) return intval[0][h1];\n");
    F << FF("        size_t h2 = (hv/M) % M;\n");
    F << FF("        if (intkey[1][h2] == k) return intval[1][h2];\n");
    F << FF("        size_t h3 = (hv/(M*M)) % M;\n");
    F << FF("        if (intkey[2][h3] == k) return intval[2][h3];\n");
    F << FF("        return -1;\n");
    F << FF("    }}\n");
    F << FF("}};\n");
    F << FF("\n");
    F << FF("CuckooMap<3> foo;\n");
    return 0;
}

#else // 1


int main()
{   if (codepoints.OK1) std::cout << "*** Forward table set up properly ***\n";
    if (codepoints.OK2) std::cout << "*** Backward able set up properly ***\n";

    std::cout << "Total table size = " << sizeof(codepoints) << " bytes\n\n";

    std::cout << "Table capacity=" << codepoints.table_capacity << "\n"
              << "  count_of_stored=" << codepoints.count_of_stored
              << "  load=" << (100.0*codepoints.count_of_stored/codepoints.table_capacity)
              << "  max probes=" << codepoints.max_probes << "\n"
              << "  count_of_intstored=" << codepoints.count_of_intstored
              << "  intload=" << (100.0*codepoints.count_of_intstored/codepoints.table_capacity)
              << "  max intprobes=" << codepoints.max_intprobes << "\n";

    std::uint32_t point = codepoints.lookup(0x03b1); 
    std::cout << "index for codepoint U+03b1 is " <<std::hex << point << "\n";
    bool combine = point!=-1U && (point & 0x8000000)!=0;
    int count = (point >> 20) & 0x7f;
    if (point == -1U) count = 0;
    int offset = point & 0xfffff;
    for (int i=0; i<count; i++)
        std::cout << codepoints.names[offset+i] << "\n\n";

    point = codepoints.lookup(0x0013); 
    std::cout << "index for codepoint U+0013 is " <<std::hex << point << "\n";
    combine = point!=-1U && (point & 0x8000000)!=0;
    count = (point >> 20) & 0x7f;
    if (point == -1U) count = 0;
    offset = point & 0xfffff;
    for (int i=0; i<count; i++)
        std::cout << codepoints.names[offset+i] << "\n\n";

    for (int i=0; i<10; i++)
    {   int p = codepoints.namelenp[i];
        std::cout << "length " << std::dec << i << " has "
                  <<(codepoints.namelenp[i+1] - codepoints.namelenp[i]) << " codes\n";
        for (int q = p; q<p+4 && q<codepoints.namelenp[i+1] ; q++)
        std::cout << i << ": " << codepoints.alphanames[q] << "\n";
    }

    return 0;
}

#endif // GENERATE or TEST

// end of testcode.cpp
