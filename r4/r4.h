// r4.h                                        Copyright 2026 Arthur Norman

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

#ifdef DEBUG
extern FILE* logfile;
#endif

inline constexpr int CTRL_KEY(uint32_t k)
{   return k & 0x1f;
}

inline const uint32_t TAG_ALT = 0x02000000;
inline const uint32_t TAG_FN  = 0x04000000;

inline const uint32_t TAG_J   = 0x08000000;
inline const uint32_t TAG_K   = 0x10000000;
inline const uint32_t TAG_O   = 0x20000000;
inline const uint32_t TAG_P   = 0x40000000;
inline const uint32_t TAG_Q   = 0x80000000;

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

class R4
{
public:
    R4(const std::string& filename);
    ~R4();
    void run();

// The main test buffer and a parallel one that records the lexical
// state at the start of each line to help with syntax colouring.
    std::vector<string32> buffer;
    std::vector<enum lexer_state> buffer_state;

// There are things I sometimes need to display as the top few lines
// on the screen...
    const char** top_lines;

// Positions:
    int cx=0, cy=0;            // cursor position
    int wx=0, wy=0;            // top left corner of window
    int height, width;         // size of window
    int cursorx;               // Helps cx after eg <1> or <B> has been shown.

    int left_margin;
    int right_margin;
    int tab_width;

// Positions in the buffer are given the value (-1, -1) when they are
// not set. Here I have a "selected block" and ten marks.
    int startBlockLine, startBlockCol;
    int endBlockLine, endBlockCol;
    bool columnMode = false;
    bool withinBlock(int row, int col);
    int markLine[10], markCol[10];

// Code that send data from the buffer to ncurses.
    void renderScreen();
    int last_lexed_line;
    void renderLine(int screeny, int row, string32 line,
                    enum lexer_state state);
    void makeCursorVisible();
    void clearLine(int y, int w);

// Loading and saving the main file that is to be edited.
    std::string filename;
    void loadFile();
    void saveFile();


    void displayMenu(const char* menu[]);
    void hideMenu();

// Reading and dispatch on keystrokes frrom the user.
    int mygetch8();
    int mygetch();
    bool overwriteMode = false;
    void processKeypress(uint32_t c, bool insert=true);
    using funcMap = std::unordered_map<wchar_t, void (R4::*)()>;
    static funcMap keymap;

// A pile of stuff regarding conversion between names and characters that
// are outside the Basic Latin Block. This has to preserve state so that
// the system can notice when two uses of ALT-x are consecutive, so that
// it can follow seqeunces of transformations in that case.
    void unicodeConvert();
    bool uniConvActive;
    bool startedAsName;
    bool userNames;
    std::vector<std::string> converted_names;
    bool inHex;
    void convert();
    void continueName(string32& line, int& caretpos);
    void continueCode(string32& line, int& caretpos);
// When handling ALT-x I with the case "charnameALTx" I will have word_text
// set to "charname" amd replacement_text to whatever ihas been replaced
// with. So applying the conversion deleted word_text from just before
// the cursor and inserts replacement_text in its place. When I want to
// try for a next possiblity I can delete replacement_text and insert
// word_text and the input line is back in its original state. And I can
// tell where to search next by using the length of word_text.
    string32 word_text;
    string32 replacement_text;
    void term_replace_chars_backward();
// Character combinations involving overlays and diacriticals need
// special treatment in just a few places.
    void normalise();
    void denormalise();

// Helper functions for the main editing operations. including "pending()"
// which I activate if an operation that is not yet implemented is
// called for.
    void insert_newline();
    void insert_char(uint32_t c);
    void addch8(int c);
    void delete_forward(int n);
    void delete_backward(int n);
    void join_lines();

// If you have a line with some marks on it, eg <2>, and you insert or
// delete characters before the mark(s) or split or join lines than
// the recorded position of marks must be changed. Similarly if you
// insert or delete a line then the y-coordinate of any marks further down
// the file than that will need review.
    void marks_after_insert();
    void marks_after_newline();
    void marks_after_join_line();
    void marks_after_delete_forward(int n);
    void marks_after_delete_back(int n);
    void marks_after_add_line();
    void marks_after_remove_line();

    void flip_mark(int& y, int& x);   // Set or clear a mark.
    string32 insertMarks(int y);      // put in explicit <K> etc as needed.
    bool invalidBlock();
    void pending();

// Now all the edit actions that are supported.
    void flip_overwrite_mode();

    void char_left();       // move the cursor.
    void char_right();
    void line_up();
    void line_down();

    void word_left();
    void word_right();

    void start_of_line();
    void end_of_line();
    void top_of_screen();
    void bottom_of_screen();
    void start_of_text();
    void end_of_text();

    void last_find_or_block();

    void scroll_page_up();  // move document leaving cursor fixed on screen.
    void scroll_page_down();
    void scroll_up();       // by 1 line.
    void scroll_down();
    
    void backspace();       // delete char before the cursor.
    void delete_char();     // delete char after the cursor.
    void delete_word();
    void delete_to_eol();
    void delete_line();

// Wordstar uses s ^J menu key, but with the way I use ncurses that seems
// to alias against the enter key... So I use ALT-J instead.
    void j_menu();
    void k_menu();          // User hit *K 
    void o_menu();
    void p_menu();
    void q_menu();

    void set_start_block();
    void set_end_block();
    void flip_column_mode();// selected blocks are columns or all text.
    void set_mark();

    void goto_start_block();
    void goto_end_block();
    void goto_mark();

    void copy_block();
    void move_block();
    void delete_block();

    void insert_from_file();
    void write_file();      // write the current block to a named file.

    void quit_editor();     // quit without saving.
    void save_file();
    void save_and_exit();

    void undelete();
    void tab();
    void repeat_last_find();
    void insert_return();
    void stop_command();
    void redraw_screen();
    void goto_line();
    void find();
    void find_and_replace();

};

using glyphMap = std::unordered_map<std::string, std::uint32_t>;
extern glyphMap html_names;
extern glyphMap tex_names;
extern glyphMap adobe_names;
extern glyphMap combining_names;
extern glyphMap unicode_1;       // Too big to fit comfortably in 1 table!
extern glyphMap unicode_2;
extern glyphMap unicode_3;
extern glyphMap unicode_4;

extern std::uint32_t name_to_code(const char* name);
extern const char* code_to_name(std::uint32_t code);

// This is a table that lets me identify codepoints that denote
// combining/diacritical marks.

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
// it would not be hard to generate a customised version that used more
// memory but then allowed more modification.

// But for me the big uncertainty is in idebntifing combining characters.
// Other non-spacing or perhaps double-width characters are also probably
// a bit of a pain!

inline std::unordered_map<std::uint32_t, cchar_t> ccharmap;

inline uint64_t lookup_composite(cchar_t cc)
{   uint32_t hash = 0;
fprintf(logfile, "lookup composite %x %x %x\n", cc.chars[0], cc.chars[1], cc.chars[2]);
    for (auto c : cc.chars)
        hash = (314159U*hash + c) % 0xffeefff3U + 0x00110000U;
// The multiplier 314159 happens to be prime but is basically picked
// in a pretty arbitrary way. The number I take remainder by is a prime
// and if small enough that the hash value I end up with is in the
// range 0x00110000 to 0xfffffffe. Ie a value that can not clash with
// genuine single Unicode characters and that leave -1U available for
// use as a marker.
// I am expecting very light loading in the hash scheme used here and so
// do not expect the competence of hashing to be terribly important!
// The hash table is notionally of size around 4000000000 and the values
// to be stored are the unique composite glyphs that a particular
// document happens to use, along with any variants on same that still
// involve a combining mark but where one or more final marks have been
// removed.
// I note that some composed characters are used in the table of HTML
// entities. Eg xxx is represened by U+xxxx plus U+xxxx. That seems to
// amount to a massive 64 cases.
    for (;;)
    {   if (ccharmap.count(hash) == 0) // not found: insert in table.
        {   ccharmap[hash] = cc;
fprintf(logfile, "cchar %x %x %x put at %x \n", cc.chars[0], cc.chars[1], cc.chars[2], hash);
            return hash;
        }
        cchar_t& w = ccharmap[hash];   // probe.
        bool match = true;
        for (int i=0; i<CCHARW_MAX; i++)
            if (cc.chars[i] != w.chars[i]) match = false;
        if (match) return hash;        // found because already present.
// The leading character in the cchar_t should be a spacing character
// and I might as well use that as the stride when I probe the hash
// table. Well against the pathalogical case that it had been set to
// zero it makes sense to OR in another bit, and I rather randomly pick
// 0x10000. Because my hash tables is a prime size and non-zero stride
// will be OK.
        hash = hash + (cc.chars[0] | 0x10000U);
        hash = hash % 0xffeefff3U + 0x00110000U;
    }
}

// I provide functions to convert both ways between string32 and
// both std::string and C-style strings. These will pack and
// unpock the combining characters.

// NOTE: I can only use std::string and string32 freely in constexpr
// functions from C++23 onwards so building this code has that requirement.
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

extern std::string SS(string32 a);

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
// inefficiently.
        /* prev = ... */
    }
    if (prev != -1) r += string32(1, prev);
    return r;
}

inline constexpr string32 L(const std::string a)
{   return L(a.c_str());
}

// The following is useful for tracing and debugging.

inline void display(const char* label, string32 s)
{   fprintf(logfile, "%s", label);
    for (auto c : s)
    {   if (c < ' ') fprintf(logfile, "^%c", c | 0x40);
        else if (c < 0x7e) fprintf(logfile, "%c", c);
        else  if (c <= 0x0000ffff) fprintf(logfile, "U+%04.4x", c);
        else  if (c <= 0x0010ffff) fprintf(logfile, "U+%06.6x", c);
        else
        {   fprintf(logfile, "{%.8x:", c);
            cchar_t ww = ccharmap[c];
            int prefix = '|';
            for (int i=0; i<CCHARW_MAX && ww.chars[i]!=0; i++)
            {   fprintf(logfile, "%c%x", prefix, ww.chars[i]);
                prefix = ':';
            }
            fprintf(logfile, "}");
        }
    }
    fprintf(logfile, "\n");
}

inline void display(const char* label, string32 s, const char* tag, int n)
{   char b[100];
    snprintf(b, sizeof(b), "%s %d  %s", tag, n, label);
    display(b, s);
}

// end of r4.h
