// generate.cpp                                Copyright 2026 Arthur Norman

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
    {   if (*s == '\\' || *s == '\"') r.push_back('\\');
        r.push_back(*s++);
    }
    return r;
}


#define FF std::format

int main()
{   std::ofstream F("generated.cpp", std::ofstream::out);
    F << FF("// generated.cpp                              Copyright (C) A C Norman 2026\n");
    F << FF("\n\n");
    F << FF("/**************************************************************************\n");
    F << FF(" * Copyright (C) 2026, Arthur Norman                                      *\n");
    F << FF(" *                                                                        *\n");
    F << FF(" * Redistribution and use in source and binary forms, with or without     *\n");
    F << FF(" * modification, are permitted provided that the following conditions are *\n");
    F << FF(" * met:                                                                   *\n");
    F << FF(" *                                                                        *\n");
    F << FF(" *     * Redistributions of source code must retain the relevant          *\n");
    F << FF(" *       copyright notice, this list of conditions and the following      *\n");
    F << FF(" *       disclaimer.                                                      *\n");
    F << FF(" *     * Redistributions in binary form must reproduce the above          *\n");
    F << FF(" *       copyright notice, this list of conditions and the following      *\n");
    F << FF(" *       disclaimer in the documentation and/or other materials provided  *\n");
    F << FF(" *       with the distribution.                                           *\n");
    F << FF(" *                                                                        *\n");
    F << FF(" * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *\n");
    F << FF(" * \"AS IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *\n");
    F << FF(" * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *\n");
    F << FF(" * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *\n");
    F << FF(" * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *\n");
    F << FF(" * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *\n");
    F << FF(" * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *\n");
    F << FF(" * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *\n");
    F << FF(" * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *\n");
    F << FF(" * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *\n");
    F << FF(" * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *\n");
    F << FF(" * DAMAGE.                                                                *\n");
    F << FF(" *************************************************************************/\n");
    F << FF("\n");
    F << FF("// Generated from codepoints.cpp to be easier to compile without\n");
    F << FF("// heavy constexpr compile-time calculation.\n");
    F << FF("\n");
    F << FF("// $Id$\n");
    F << FF("\n");


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
    F << FF("    std::uint32_t    val[3][M] =\n");
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
    F << FF("    }};\n\n");
    F << FF("const size_t html_N = {};\n", codepoints.html_N);
    F << FF("size_t       html_count = {};\n", codepoints.html_count);
    F << FF("const char*  html_names[html_count] =\n");
    F << FF("{{\n");
    for (size_t i=0; i<codepoints.html_N; i++)
        F << FF("    \"{:s}\",\n", fix_string(codepoints.html_names[i]));
    F << FF("}}\n");
    F << FF("std::uint16_t    html_codes[html_count][2] =\n");
    F << FF("{{\n");
    for (size_t i=0; i<codepoints.html_N; i++)
        F << FF("    {{{:#04x}, {:#04x}}},\n",
                     (int)codepoints.html_codes[i][0],
                     (int)codepoints.html_codes[i][1]);
    F << FF("}};\n\n");
    F << FF("    std::uint32_t    intkey[3][M] =\n");
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
    F << FF("    std::uint32_t    intval[3][M] =\n");
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
    F << FF("    std::uint32_t    namelenp[nlengths] =\n");
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
    F << FF("    constexpr std::uint64_t hash1(const char* s) const\n");
    F << FF("    {{   std::uint64_t r = 1;\n");
    F << FF("        while (*s != 0)\n");
    F << FF("        {{   r = 257*r + *s++;\n");
    F << FF("        }}\n");
    F << FF("        return r;\n");
    F << FF("    }}        \n");
    F << FF("\n");
    F << FF("// lookup will return -1U if the string is not present, and as can be\n");
    F << FF("// seen does at most 3 probes.\n");
    F << FF("    constexpr std::uint32_t lookup(const char* k) const\n");
    F << FF("    {{   std::uint64_t hv = hash1(k);\n");
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
    F << FF("    constexpr std::uint32_t lookup(std::uint32_t k) const\n");
    F << FF("    {{   std::uint64_t hv = k;\n");
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
    F << FF("CuckooMap<3> codepoints;\n\n");
    F << FF("glyphMap user_names;\n");
    F << FF("std::multimap<std::uint32_t, const char*> user_decode;\n\n");
    F << FF("// end of generated.cpp\n");
    return 0;
}

// end of generate.cpp
