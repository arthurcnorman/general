// wvs.h                                       Copyright 2026 Arthur Norman

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

#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <filesystem>
#include <string>
#include <locale>
#include <codecvt>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>    
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cwctype>
#include <cassert>

#include <unistd.h>

#ifndef NCURSES_WIDECHAR
#define NCURSES_WIDECHAR 1
#endif
#include <ncursesw/ncurses.h>


extern FILE* logfile;

inline constexpr int CTRL_KEY(uint32_t k)
{   return k & 0x1f;
}

inline const uint32_t TAG_ALT = 0x02000000;
inline const uint32_t TAG_FN  = 0x04000000;

inline const uint32_t TAG_J   = 0x08000000;
inline const uint32_t TAG_K   = 0x09000000;
inline const uint32_t TAG_O   = 0x0a000000;
inline const uint32_t TAG_P   = 0x0b000000;
inline const uint32_t TAG_Q   = 0x0c000000;

inline const uint32_t ESC      = 0x001b;
inline const uint32_t BAD_UTF8 = 0x25a0;   // BLACK SQUARE

enum lexer_state
{
    lexer_base,
    lexer_slash,
    lexer_slash_comment,
    lexer_slash_star_comment,
    lexer_star,
    lexer_string,
    lexer_string_esc,
    lexer_char,
    lexer_char_esc
};

enum
{   fg_black = 0,
    fg_red,
    fg_green,
    fg_yellow,
    fg_blue,
    fg_magenta,
    fg_cyan,
    fg_white
};
   
// Here is the type that I use for my text buffer, On Linux (etc) it
// is really very much like std::wstring where the wide character type
// uses 32-bits. but on Windows a sizeof(wchar_t) is 4 and std::wstring
// needs to use utf-16 to cover cases beyond the basic multilingual plane.

using string32 = std::basic_string<uint32_t>;

class TextEditor
{
public:
    TextEditor(const std::string& filename);
    ~TextEditor();
    void run();
    int height, width;
    void lex_from_line(int n);
    int cx=0, cy=0;  // cursor position
    int firstVisibleLine = 0;
    bool columnMode = true;
    bool overwriteMode = false;
    int startBlockLine = 3, startBlockCol = 4;
    int endBlockLine = 6, endBlockCol = 17;
    int markLine[10];
    int markCol[10];
    std::vector<string32> buffer;
    std::vector<enum lexer_state> buffer_state;
    int last_lexed_line;
    std::string filename;
    void loadFile();
    void saveFile();
    void unicodeConvert();
    bool inBlock;
    bool inComment;
    bool inString;
    bool inChar;
    void renderLine(int screeny, int row, string32 line,
                    enum lexer_state state);
    void renderScreen();
    void makeCursorVisible();
    void displayMenu(const char* menu[]);
    void hideMenu();
    void clearLine(int y, int w);
    int mygetch8();
    int mygetch();
    void processKeypress(uint32_t c, bool insert=true);
    void insert_newline();
    void addch8(int c);
    using funcMap = std::unordered_map<uint32_t, void (TextEditor::*)()>;
    static funcMap keymap;

// Now all the edit actions that are supported.

    void pending();

    void char_left();
    void char_right();
    void line_up();
    void line_down();

    void page_up();
    void page_down();
    void page_line_up();
    void page_line_down();

    void delete_forward(int n);
    void delete_backward(int n);
    void join_lines();
    
    void backspace();
    void delete_char();
    void delete_to_eol();
    void delete_line();

    void k_menu();
    void o_menu();
    void p_menu();
    void q_menu();

    void flip_column_mode();
    void quit_editor();
    void save_file();
    void write_file();
    void save_and_exit();

    void word_left();
    void scroll_page_up();
    void word_right();
    void undelete();
    void tab();
    void j_menu();
    void repeat_last_find();
    void insert_return();
    void scroll_page_down();
    void delete_word();
    void stop_command();
    void overwrite_mode();
    void scroll_line_down();
    void scroll_line_up();
    void set_mark();
    void goto_mark();
    void set_start_block();
    void goto_start_block();
    void copy_block();
    void set_end_block();
    void goto_end_block();
    void insert_from_file();
    void move_block();
    void delete_block();
    void redraw_screen();
    void find_and_replace();
    void find();
};

using glyphMap = std::unordered_map<std::string, std::uint32_t>;
extern glyphMap html_names;
extern glyphMap tex_names;
extern glyphMap adobe_names;

extern std::uint32_t name_to_code(const char* name);
extern const char* code_to_name(std::uint32_t code);

// In unicode we have a range of characters that are zero-width and that
// arrange to modify or overlay the character before them:
//
//   U+0300 to u+036f "combining diacritical marks"                112
//   U+a1b0 to U+1aff "combining diacritical marks extended"        80
//   U+1dc0 to U+1dff "combining diacritical marks supplement"      64
//   U+20d0 to U+20ff "combining diacritical marks for symbols"     48
//   U+fe00 to U+fe0f "variations"                                  16
//   U+fe20 to 0xfe2f "combining half marks"                        16
//
// HOWEVER it seems that there are in fact rather a lot of other
// combining characters scattered - for instance ones that are used
// with just one language. So I have a std::unordered:set that identifies
// the lot.

extern std::unordered_set<uint32_t> is_combining;

// The way I will handle "complex characters" is intended to be
// aligned with ncurses. Such a character will be represented as
// an ncurses cchar_t object. This has some fixed number of wchar_t
// items in it, the first of which must be a proper spacing one and
// the remainder should be combining. There are additional fields
// that for the purposes of most usage contain default or irrelevant
// values.
// To store these I will have a std::unordered_map<std::uint64_t, cchar_t>
// whicc will be used as a hash table. Given a cchar_t I compute a hash
// value for it in the range 0x00110000 to 0xffffffff. I.e. not clashing
// with valid codepoints. The map is probed there to see if the cchar_t has
// been used before and if so that code for it is used, otherwise it is
// inserted in the usual way that hash tables are handled. It is strongly
// expected that the hash table loading will be miniscule and so if the
// hash function is reasonably competent this will not need many probes.

// The above allocates a uint32_t value to each distinct "complex"
// character used in a document. On Linux and the version of ncursesw
// I am using any complex character must be represented using at most
// 5 wchar_t values, so that can be one base character plus up to 4
// modifiers/overlays. On the mingw32 setup I have on Windows the same
// limit applies, so one can one regular character from the basic
// multilingual plane plus up to 4 combiners provided they all fall in
// the basic multilingual plane, or as a worst case one base character
// from beyond that, and then three 16-bit wchar_t entries to specify
// combining marks. So use of combining marks from above the basic
// multilingual plane is that bit more restrictive.

// These constraints are not down to my code but to ncurses and in fact
// it would not be hard tp generate a customised version that used more
// memory but then allowed more modification.

// But for me the big uncertainty is in idebntifing combining characters.
// Other non-spacing or perhaps double-width characters are also probably
// a bit of a pain!

inline std::unordered_map<std::uint32_t, cchar_t> ccharmap;

inline uint64_t lookup_composite(cchar_t& cc)
{   uint64_t hash = 0;
    for (auto c : cc.chars)
        hash = (314159*hash + c) % 0xffffffffffeeffcd + 0x00110000;
// The multiplier 314159 happens to be prime but is basically picked
// in a pretty arbitrary way. The number I work modulo is a prime and
// is such that the residue plus 0x00110000 is in the range I am allowed
// to use to represent complex characters. I am expecting very light
// loading in the hash scheme used here and so do not expect the competence
// of hashing to be terribly important!
    for (;;)
    {   if (ccharmap.count(hash) == 0) // not found: insert in table.
        {   ccharmap[hash] = cc;
            return hash;
        }
        cchar_t& w = ccharmap[hash];   // probe.
        bool match = true;
        for (int i=0; i<CCHARW_MAX; i++)
            if (cc.chars[i] != w.chars[i]) match = false;
        if (match) return hash;        // found.
// The leading character in the cchar_t should be a spacing character
// and I might as well use that as the stride when I probe the hash
// table. Well against the pathalogical vase that it had been set to
// zero I OR in another bit.
        hash = hash + (cc.chars[0] | 0x10000);
        hash = hash % 0xffffffffffeeffcd + 0x00110000;
    }
}


// I provide functions to convert both ways between string32 and
// both std::string and C-style strings. These will pack and
// unpock the combining characters.

// NOTE: I can only use std::string and string32 freely in constexpr
// functions from C++23 onwards so building this code has that requiremnent.
// I may look into softening it later if I feel I need to.

inline constexpr std::string S(string32 a)
{   std::string r = "";
    for (auto c : a)
    {   if (c <= 0x0010ffff) // i.e. proper Unicode value
        {   if (c <= 0x7f) r += c;
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
        }
        else
        {
// Here I have a "complex character" which I have hidden away as a
// cchar_t entry as defined by ncurses. That contains a sequence of
// wide characters that I must render.
            assert (ccharmap.count(c) != 0);
            cchar_t cc = ccharmap[c];
            for (auto c1 : cc.chars)
                r += S(string32(1, c1));
        }
    }
    return r;
}

inline constexpr std::string S(std::uint32_t* p)
{   return S(string32(p));
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

inline constexpr string32 L(const char* a)
{   string32 r;
    int32_t prev = -1;
    int extra = 0;
    while (*a != 0)
    {   int32_t c  = utf8_getc(a);
        if (c == -1) return string32();     // malformed input
        if (!is_combining.contains(c))
        {   if (prev != -1) r += string32(1, prev);
            prev = c;
            continue;
        }
        if (prev == -1) return string32();  // malformed input
// Here I want to add the new combing mark to the previous character.
// This will be a pretty uncommon activity so I feel content doing it
        /* prev = ... */
    }
    if (prev != -1) r += string32(1, prev);
    return r;
}

inline constexpr string32 L(const std::string a)
{   return L(a.c_str());
}

// end of wvs.h
