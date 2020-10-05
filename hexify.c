// hexify.c                                     Copyright (C) 2020 Codemist


// $Id: hexify.c 5411 2020-09-27 20:03:06Z arthurcnorman $


/**************************************************************************
 * Copyright (C) 2020, Codemist.                         A C Norman       *
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

// This is a jiffy program that turns a (binary) file into C++ source
// code that defined a potentially huge data array containing the contents
// of the original file. This array is one of 64-bit integers and on a
// little-endian system is liable to be a binary match for the original
// data. The array pads the data will zero bytes to be a multiple of 8
// bytes in all.
// Usage:
//    hexify [source-file [destination-file [array-name]]]
// where the defaults are
//    hexify reduce.img redimage.cpp image_file


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[])
{
    const char *src = "reduce.img";
    const char *dest = "redimage.cpp";
    const char *arrayname = "image_file";
    switch (argc)
    {
    case 4:
        arrayname = argv[3];
    case 3:
        dest = argv[2];
    case 2:
        src = argv[1];
        if (strcmp(argv[1], "--help") != 0) break;
    default:
        fprintf(stderr,
            "Usage: %s [source-file [destination-file [array-name]]]\n",
            argv[0]);
        fprintf(stderr,
            "default: %s reduce.img redimage.cpp image_file\n", argv[0]);
        exit(1);
    case 1:
        break;
    }
    FILE *in = fopen(src, "rb");
    FILE *out = fopen(dest, "w");
    time_t tt = time(NULL);
    struct tm ttt = *localtime(&tt);
    const char *tts = asctime(&ttt);
    fprintf(out, "// %s (for %s) created %s\n", dest, src, tts);
    fprintf(out, "\n#include <stdint.h>\n");
    fprintf(out, "\nuint64_t %s[] = {\n", arrayname);
    uint64_t w = 0;
    size_t i = 0;
    for (;;)
    {   unsigned char c = getc(in);
        if (feof(in)) break;
        w = w | (((uint64_t)c) << (8*(i&7)));
        if ((i&31) == 31)
        {   fprintf(out, "0x%.16" PRIx64 ",\n", w);
            w = 0;
        }
        else if ((i&7) == 7)
        {   fprintf(out, "0x%.16" PRIx64 ", ", w);
            w = 0;
        }
        i++;
    }
    fprintf(out, "0x%.16" PRIx64 "\n};\n\n", w);
    return 0;
}

// end of hexify.c
