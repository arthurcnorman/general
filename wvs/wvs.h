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

#include <unistd.h>
#include <ncurses.h>


extern FILE* logfile;

inline constexpr int CTRL_KEY(uint32_t k)
{   return k & 0x1f;
}

inline constexpr int UNICODE(uint32_t k)
{   return k & 0x00ffffff;
}

inline constexpr int TAGBITS(uint32_t k)
{   return k & 0xff000000;
}

inline const uint32_t TAG_ALT = 0x02000000;
inline const uint32_t TAG_FN  = 0x04000000;

inline const uint32_t TAG_J   = 0x08000000;
inline const uint32_t TAG_K   = 0x09000000;
inline const uint32_t TAG_O   = 0x0a000000;
inline const uint32_t TAG_P   = 0x0b000000;
inline const uint32_t TAG_Q   = 0x0c000000;

inline const uint32_t ESC      = 0x1b;
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
    std::vector<std::basic_string<uint32_t>> buffer;
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
    void renderLine(int screeny, int row, std::wstring line,
                    enum lexer_state state);
    void renderScreen();
    void makeCursorVisible();
    void displayMenu(const char* menu[]);
    void hideMenu();
    void clearLine(int y, int w);
    int mygetch8();
    int mygetch();
    void processKeypress(int32_t c, bool insert=true);
    void insert_newline();
    void addch8(int c);
    using funcMap = std::unordered_map<wchar_t, void (TextEditor::*)()>;
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

using glyphMap = std::unordered_map<std:string, std::uint32_t>;
extern glyphMap html_names;
extern glyphMap tex_names;
extern glyphMap adobe_names;

extern std::uint32_t name_to_code(const char* name);
extern const char* code_to_name(std::uint32_t code);

// end of wvs.h
