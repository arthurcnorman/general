// r4.cpp                                      Copyright 2026 Arthur Norman

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

// This is the "r4" editor. It uses key-bindings similar to a really
// ancient version of Wordstar as used on a Z80 (ie not the more recent
// windowed version). It is intended to support the editing of utf-8
// files that contain characters from beyond the Basic Latin Block,
// including cases of glyphs made up by combining a base character with
// one or more diacritical/combining marks.
// The name r4 is chosen so it is just two characters the are close
// together on the keyboard, and also as a nod to my name "Arthur" which
// with enough of a slur moves through "arfut" to "r4".

// This should build and run on Linux, Macintosh and Windows (with the
// mingw32 compilers). It is JUST for use from a command prompt.

#include "r4.h"

#ifdef DEBUG
// This is a function to get around initialisation order issues for
// static data.

FILE* logfile()
{   static FILE* ff = std::fopen("log.log", "w");
    return ff;
}
#endif

// Provided I am on a modern terminal (and these days I expect I
// always will be) I can have different colours. I set up a few here
// to remind myself what is possible.

enum My_colours
{  COLOR_PINK      = 8,
   COLOR_PALE_BLUE,
   COLOR_PALE_YELLOW,
   COLOR_PALE_GREEN,
   COLOR_MAUVE
};

enum My_pairs
{  fg_pink         = 8,
   fg_pale_blue,
   fg_pale_yellow,
   fg_pale_green,
   fg_mauve
};

// I am going to want std::unordered_multimap built using all the
// tables of characters that I have. They are all statically initialised
// in various separate compilation units and so to be certain that they
// are ready for when I need them I have to wrap the one here in a
// class constructor.

// The table here maps from any string of length from 3 to 11 onto the
// set of all names that start that way.

#if 0
class Predictions
{
public:
    std::unordered_multimap<std::string, std::string> M;
    Predictions()
    {   for (auto m : tables)
        {   for (auto kv : html_names)
            {   std::string s = kv.first;
                for (int len=3; len<12; len++)
                if (s.length() >= len)
                    M.insert(std::pair(s.substr(0, len), s));
            }
        } 
    }
};

// This lets me map any prefix with from 3 to 11 characters into the set
// of known words that it could start. I will use this to offer hints
// to the user about what ALT-x might do for them. Note that the function
// ket F1 is equivalent top ALT-x for this editor.

Predictions P();
#endif

#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

const char *homedir =
    ([](){
        const char* r = getenv("HOME");              // for Linux etc
        if (r == nullptr) r = getenv("USERPROFILE"); // for Windows
        if (r == nullptr) r = getpwuid(getuid())->pw_dir;
        if (r == nullptr) r = ".";
        return r; })();

R4::R4(const std::string& filename) : filename(filename)
{
#ifndef __CYGWIN__
    setlocale(LC_ALL, "");
#endif
    initscr();
    raw();
    noecho();
    keypad(stdscr, true);
    start_color();
    chtype blank = getbkgd(stdscr);     // background
    int pair_id = PAIR_NUMBER(blank);
    short foreground, background;
    pair_content(pair_id, &foreground, &background);
    init_color(COLOR_PINK, 999, 700, 700); 
    init_color(COLOR_PALE_BLUE, 600, 600, 999); 
    init_color(COLOR_PALE_YELLOW, 999, 999, 700); 
    init_color(COLOR_PALE_GREEN, 700, 999, 700); 
    init_color(COLOR_MAUVE, 999, 700, 990); 

//
// Colours:
//   plain text    white on black
//   comments      pale blue on black
//   strings       red on black
//   characters    pink on black
//   keyword       green on black

    init_pair(fg_red,     COLOR_RED, COLOR_BLACK);
    init_pair(fg_green,   COLOR_GREEN, COLOR_BLACK);
    init_pair(fg_yellow,  COLOR_YELLOW, COLOR_BLACK);
    init_pair(fg_blue,    COLOR_BLUE, COLOR_BLACK);
    init_pair(fg_magenta, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(fg_cyan,    COLOR_CYAN, COLOR_BLACK);

    init_pair(fg_pink ,         COLOR_PINK, COLOR_BLACK);
    init_pair(fg_pale_blue ,    COLOR_PALE_BLUE, COLOR_BLACK);
    init_pair(fg_white ,        COLOR_WHITE, COLOR_BLACK);
    init_pair(fg_pale_yellow ,  COLOR_PALE_YELLOW, COLOR_BLACK);
    init_pair(fg_pale_green ,   COLOR_PALE_GREEN, COLOR_BLACK);
    init_pair(fg_mauve ,        COLOR_MAUVE, COLOR_BLACK);

    attron(COLOR_PAIR(fg_white));
    uniConvActive = false;
    getmaxyx(stdscr, height, width);
    wx = wy = cx = cy = 0;
    last_lexed_line = -1;
    columnMode = false;
    startBlockLine = -1;
    startBlockCol = -1;
    endBlockLine = -1;
    endBlockCol = -1;
    for (int i=0; i<10; i++)
    {   markLine[i] = -1;
        markCol[i] = -1;
    }
    cmd_active = false;
    left_margin = 0;
    right_margin = width - 6;
    tab_width = 8;
    top_lines = nullptr;
    overwriteMode = false;
    count = 0; // So that trying to repeat a search does not do anything.

    std::string profile_name = std::string(homedir).append("/.unicode");
    std::ifstream profile(profile_name);
    if (profile.is_open())
    {
#ifdef DEBUG
        fprintf(logfile(), "~/.unicode seems to exist\n");
#endif
        profile.close();
    }

    loadFile();
    refresh();
}

R4::~R4()
{   endwin();
}


void R4::run()
{   while (true)
    {   renderScreen();
        processKeypress(mygetch(), true);
    }
}

void R4::clearLine(int y, int w)
{   move(y+2, 0);
    for (int x=0; x<w; x++) addch(' ');
    if (last_lexed_line >= y) last_lexed_line = y-1;
}

// The notations I want to be aware of are:
// (.)     // .... EOL             a 1-line commant.
// (.)     /* .... */              comments that may span lines.
// (.)     " ... \x ... "          string with possible escaped characters.
// (.)     ' ... \x ... ;          character literal with possible escapes.
//
// For a first version I may not highlight numbers or keywords, but if I
// ever extend to them we have
// (,)     letter alphanumeric*    name. Well could also be "_" at start
//                                 keywords spotted via lookup.
// (.)     0X hexdig* suffix       hex integer (also 0x). L or U suffix
// (.)     0 octdig* suffix        octal integer
// (,)     digit* suffix           decimal integer
// (.)     floating point literal  includ ing hex ones.
// With all these there can be line-continuation with "\" so that the
// item is split across two or more lines.

// To mechanise this I will use a finite automaton ane the states
// will be:
//
// (.)     base:               general text.
// (.)     slash:              seen "/", so will next char be "/" or "*"?
// (.)     slash_comment:      within single line comment;
// (.)     slash_star_comment: within balanced comment;
// (.)     star:               following "/*" we see a "*".
// (.)     string:             within string.
// (.)     string_esc:         Within string have just seen a "\"
// (.)     char:               within character literal.
// (.)     char_esc:           within character have just seen "\"

// Here is the transition function for the lexer.

enum lexer_state lexer_transition(lexer_state state, std::uint32_t c)
{   switch (state)
    {
    default:
    case lexer_base:
        switch (c)
        {
        case '/':
            return lexer_slash;
        case '"':
            return lexer_string;
        case '\'':
            return lexer_char;
        default:
            return lexer_base;
        }
    case lexer_slash:
        switch (c)
        {
        case '/':
            return lexer_slash_comment;
        case '*':
            return lexer_slash_star_comment;
        default:
            return lexer_base;
        }
    case lexer_slash_comment:
        switch (c)
        {
        case '\n':
            return lexer_base;
        default:
            return lexer_slash_comment;
        }
    case lexer_slash_star_comment:
        switch (c)
        {
        case '*':
            return lexer_star;
        default:
            return lexer_slash_star_comment;
        }
    case lexer_star:
        switch (c)
        {
        case '/':
            return lexer_base;
        case '*':
            return lexer_star;
        default:
            return lexer_slash_star_comment;
        }
    case lexer_string:
        switch (c)
        {
        case '"':
            return lexer_base;
        case '\\':
            return lexer_string_esc;
        default:
            return lexer_string;
        }
    case lexer_string_esc:
        return lexer_string;
    case lexer_char:
        switch (c)
        {
        case '\'':
            return lexer_base;
        case '\\':
            return lexer_char_esc;
        default:
            return lexer_char;
        }
    case lexer_char_esc:
         return lexer_char;
    }
}


// At any stage I will want the state of the automaton at the start of each
// line of the buffer up as far as the last one displayed to be recorded. So
// on startup I only need to scan the first page. When I scroll down I will
// scan from the final line of the page forward to fill in this info. When
// I scoll up it is already present. Whenever I make an edit within a line
// I will scan from the start of that line down to the bottom of the
// window.
// As I send a line to ncurses so it can be displayed I parse that line
// from its known starting state and set text colour appropriately.

// Well the above is not done thus far but having a plan may let me implement
// it incrementally.

// Here the getch() function from ncurses hands back characters in the
// range 0 to 0xff as themselves, but it then uses return values from
// 0x100 to to 0x5xx to stand for special keys: arrow keys, page-up and
// page-down, function keys and on selected keyboards many more. I
// will return those extended values with TAG_FN. Here I expect that
// those extended keys that sometimes get returned as sequences starting
// with ESC will have been converted into single codes. But letters types
// with the ALT key pressed will get returned as two characters, ESC and
// then the letter.

int R4::mygetch8()
{   int c = getch();
    if (c == WEOF) return c;
    if (c < 0x80) return c;
    if (c > 0xff) return c | TAG_FN;
    if ((c & 0xc0) == 0x80) return BAD_UTF8;
    if ((c * 0xe0) == 0xc0)
    {   int c1 = getch();
        if ((c1 & 0xc0) != 0x80) return BAD_UTF8;
        c = ((c & 0x1f)<<6) | (c1 & 0x3f);
        if (c <= 0x7f) return BAD_UTF8;
        else return c;
    }
    if ((c * 0xf0) == 0xe0)
    {   int c1 = getch();
        if ((c1 & 0xc0) != 0x80) return BAD_UTF8;
        c = ((c & 0x0f)<<6) | (c1 & 0x3f);
        c1 = getch();
        if ((c1 & 0xc0) != 0x80) return BAD_UTF8;
        c = (c<<6) | (c1 & 0x3f);
        if (c <= 0x7ff) return BAD_UTF8;
        else return c;
    }
    if ((c * 0xf8) == 0xf0)
    {   int c1 = getch();
        if ((c1 & 0xc0) != 0x80) return BAD_UTF8;
        c = ((c & 0x07)<<6) | (c1 & 0x3f);
        c1 = getch();
        if ((c1 & 0xc0) != 0x80) return BAD_UTF8;
        c = (c<<6) | (c1 & 0x3f);
        c1 = getch();
        if ((c1 & 0xc0) != 0x80) return BAD_UTF8;
        c = (c<<6) | (c1 & 0x3f);
        if (c <= 0xffff ||
            c > 0x10ffff) return BAD_UTF8;
        else return c;
    }
    else return BAD_UTF8;
}

int R4::mygetch()
    {   int c = mygetch8();
        if (c == WEOF) return c;
        if (c == 0x1b)
        {   c = mygetch8();
            if (c == WEOF) return c;
// I will not let arrow and function keys combine with the ALT key. So if
// you either go ESC-up or hold down ALT while you press up I will just
// hand back the "up" part.
            else if ((c & TAG_FN) != 0) return c;
            else return c | TAG_ALT;
        }
        else return c;
    }


// I assume that the input file is in utf8 format and expand it to
// my own "extra wide string" style (which uses one item even for
// glyphs made up using multiply combining characters).

void R4::loadFile()
{   std::ifstream file(filename, std::ifstream::in);
    if (file.is_open())
    {   std::string rawline;
        string32 line;
        while (getline(file, rawline))
        {   line = L(rawline);
            if (line.length()>0 && line[0]==0xfeff)
                line.erase(0, 1);  // Get rid of BOM if present.
            buffer.push_back(line);
            buffer_state.push_back(lexer_base);
        }
    }
    else
    {   buffer.push_back(L(""));
        buffer_state.push_back(lexer_base);
    }
    file.close();
}

// This arranges that when I am about to write out a file "abc.def" that it
// maintains a chain of backups with tames like "abc.def.old",
// "abc.def.old" etc.

void make_backup(std::string filename)
{   char filename1[1024];
    char filename2[1024];
    const char* name = filename.c_str();
    const int number_of_backups = 5;
    for (int i=0; i<number_of_backups; i++)
    {   int target = number_of_backups - i;
        int source = target - 1;
// Rename source as target supposing it exists
        if (source == 0) std::snprintf(filename1, 1024, "%s", name);
        else std::snprintf(filename1, 1024, "%s.old.%d", name, source);
        if (std::filesystem::exists(filename1))
        {   if (target == 1) std::snprintf(filename2, 1024, "%s.old", name);
            else std::snprintf(filename2, 1024, "%s.old.%d", name, target-1);
            std::filesystem::rename(filename1, filename2);
        }
    }
}

void R4::saveFile()
{   make_backup(filename);
    std::ofstream file(filename, std::ofstream::out);
// I do my own conversion to utf8 so the output stream is opened as
// an ordinary "narrow" one.
    if (file.is_open())
    {   for (const auto& line : buffer)
        {   file << S(line) << "\n";
        }
    }
    file.close();
}

void R4::makeCursorVisible()
{   if (last_lexed_line >= cy) last_lexed_line = cy - 1;
    if (cy >= wy + height) wy = cy - 2;
    else if (cy < wy)
    {   wy = cy = 2;
        if (wy < 0) wy = 0;
    }
    if (cx > buffer[cy].length()) cx = buffer[cy].length();
    move(cy-wy, cx-wx);
}

void to_utf8(uint32_t ch, char*& p)
{   if (ch <= 0x7f) *p++ = ch;
    else if (ch <= 0x7ff)
    {   *p++ = 0xc0 | ((ch >> 6) & 0x1f);
        *p++ = 0x80 | ch;
    }
    else if (ch <= 0x7ff)
    {   *p++ = 0xc0 | (ch >> 6);
        *p++ = 0x80 | (ch & 0x3f);
    }
    else if (ch <= 0xffff)
    {   *p++ = 0xe0 | (ch >> 12);
        *p++ = 0x80 | ((ch >> 6) & 0x1f);
        *p++ = 0x80 | (ch & 0x3f);
    }
    else if (ch <= 0x10ffff)
    {   *p++ = 0xf0 | (ch >> 18);
        *p++ = 0x80 | ((ch >> 12) & 0x1f);
        *p++ = 0x80 | ((ch >> 6) & 0x1f);
        *p++ = 0x80 | (ch & 0x3f);
    }
    else *p++ = 0; // Not in Unicode range
}

// If I am on a machine where wchar_t is 16 bits wode I need to
// use utf16 encoding. Otherwise nothing much is needed.

void to_utf16(uint32_t ch, wchar_t*& p)
{   if (sizeof(wchar_t) == 4)
    {   if (ch <= 0xffff) *p++ = ch;
        else
        {   ch -= 0x10000;
            *p++ = 0xd800 | (ch >> 10);
            *p++ = 0xdc00 | (ch & 0x3ff);
        }
    }
    else *p++ = ch;
}

// This finds a sequence starting at column i that is made up of alphanumeric
// characters. It might be a C++ keyword!

std::string simple_word(string32 line, int col)
{   std::string r = "";
    while (col < line.length())
    {   uint32_t c = line[col++];
        if (c > 0x7f || (!std::isalnum(c) && c != '_')) break;
        r.push_back((char)c);
    }
    return r;
}

// Here we have a table of all the C++ keywords...

std::unordered_set<std::string> cxx_keywords =
{
    "alignas",
    "alignof",
    "and",
    "and_eq",
    "asm",
    "atomic_cancel",
    "atomic_commit",
    "atomic_noexcept",
    "auto",
    "bitand",
    "bitor",
    "bool",
    "break",
    "case",
    "catch",
    "char",
    "char8_t",
    "char16_t",
    "char32_t",
    "class",
    "compl",
    "concept",
    "const",
    "consteval",
    "constexpr",
    "constinit",
    "const_cast",
    "continue",
    "contract_assert",
    "co_await",
    "co_return",
    "co_yield",
    "decltype",
    "default",
    "delete",
    "do",
    "double",
    "dynamic_cast",
    "else",
    "enum",
    "explicit",
    "export",
    "extern",
    "false",
    "float",
    "for",
    "friend",
    "goto",
    "if",
    "inline",
    "int",
    "long",
    "mutable",
    "namespace",
    "new",
    "noexcept",
    "not",
    "not_eq",
    "nullptr",
    "operator",
    "or",
    "or_eq",
    "private",
    "protected",
    "public",
    "reflexpr",
    "register",
    "reinterpret_cast",
    "requires",
    "return",
    "short",
    "signed",
    "sizeof",
    "static",
    "static_assert",
    "static_cast",
    "struct",
    "switch",
    "synchronized",
    "template",
    "this",
    "thread_local",
    "throw",
    "true",
    "try",
    "typedef",
    "typeid",
    "typename",
    "union",
    "unsigned",
    "using",
    "virtual",
    "void",
    "volatile",
    "wchar_t",
    "while",
    "xor",
    "xor_eq",
};

bool R4::withinBlock(int row, int col)
{   if (columnMode)
    {   if (row >= startBlockLine &&
            row <= endBlockLine &&
            col >= startBlockCol &&
            col < endBlockCol) return true;
        else return false;
    }
    if (row < startBlockLine || row > endBlockLine) return false;
    if (row == startBlockLine && col < startBlockCol) return false;
    if (row == endBlockLine && col >= endBlockCol) return false;
    return true;
}

// In the colour version of ncurses I want to insert characters this
// way...

void put_wch(int y, int& x, int ch, int color=fg_white, int attr=0)
{   cchar_t cc;
    std::memset(&cc, 0, sizeof(cc));
    cc.chars[0] = ch;
    cc.attr = attr;
    cc.ext_color = color;
    move(y, x);
    add_wch(&cc);
    x++;
}

// If I am at the position of a mark that is set (and for the main
// selection block the mark is deemed set for these purposes if the
// other end of the block is not set!) I will want to interpose a <B>,
// <K> or <0> to <9> in the display, but those are not to be viewed as
// part of the text that is being edited. To cope with that when I
// come to render a line I will make a copy of it with those extras
// inserted, and that copy is just used for rendering.

void R4::renderLine(int screeny, int row, string32 line,
                    enum lexer_state state)
{   int col;
    bool inKeyword = false;
    for (col=0; col<line.length(); col++)
    {   move(screeny, 0);
        uint32_t c = line[col];
        if (c > 0x7f || !std::isalnum(c)) inKeyword = false;
        enum lexer_state oldstate = state;
        state = lexer_transition(state, c);
        cchar_t cc;
        std::memset(&cc, 0, sizeof(cc));
        if (c > 0x0010ffff)
        {   cchar_t ccc = ccharmap[c];
            std::memcpy(&cc.chars, &ccc.chars, sizeof(cc.chars));
        }
        else if (sizeof(wchar_t) == 4 && c > 0xffff)
        {   c -= 0x10000;
            cc.chars[0] = 0xd800 | (c >> 10);
            cc.chars[1] = 0xdc00 | (c & 0x3ff);
        }
        else cc.chars[0] = c;
// Select attributes and colour
        attr_t attrs = 0;
        short colour = fg_white;
        if (state == lexer_string ||
            state == lexer_string_esc) colour = fg_red;
        else if (state == lexer_char ||
                 state == lexer_char_esc) colour = fg_pink;
        else if (state == lexer_slash_comment ||
                 state == lexer_slash_star_comment ||
                 state == lexer_star) colour = fg_pale_blue;
        if (state == lexer_slash &&
            col+1 < line.length() &&
            (line[col+1] == '*' || line[col+1] == '/')) colour = fg_pale_blue;
        if (state == lexer_base &&
            oldstate == lexer_star) colour = fg_pale_blue;
        if (state == lexer_base &&
            (oldstate == lexer_string || oldstate == lexer_char))
            colour = fg_red;
        if (state == lexer_base &&
            oldstate == lexer_star) colour = fg_pale_blue;
        if (state == lexer_base &&
            (col == 0 ||
             (line[col-1] > 0x7f || !std::isalnum(line[col-1]))))
        {   std::string k = simple_word(line, col);
            if (cxx_keywords.contains(k)) inKeyword = true;
        }
        if (inKeyword) colour = fg_green;
        if (withinBlock(row, col)) attrs = A_REVERSE;
        else attrs = 0;
        cc.attr = attrs;
        cc.ext_color = colour;
        move(screeny, col);
        add_wch(&cc);
    }
    while (col < width)
        put_wch(screeny, col, ' ');
}

void R4::renderScreen()
{
// It is always possible that the user re-sized the windows, so measure
// its size each time I render.
    getmaxyx(stdscr, height, width);
    cursorx = 0; // This should be set to a proper value when I render the
                 // line that has the cursor on it. 
    for (int y = 0; y < height-2; y++)
    {   int i = wy + y;
// If a line is beyond the text=buffer display it as blank. I need to
// write in spaces in case there was text left over from some earlier
// stage eg when the screen has scrolled.
        if (i >= buffer.size())
        {   clearLine(i, width);
            continue;
        }
// I want to bring lexer info for this line up to date and that can involve
// scanning several previous lines.
        while (i > last_lexed_line &&
               last_lexed_line < (int)buffer.size()-2)
        {   last_lexed_line++;
            enum lexer_state state = buffer_state[last_lexed_line];
            string32 line = buffer[last_lexed_line];
            for (auto c : line)
                state = lexer_transition(state, c);
            state = lexer_transition(state, '\n');
            buffer_state[last_lexed_line+1] = state;
        }
// I make a copy of the line such that if any mark say mark number 3 is
// on it I put in the text <3> where that mark appears. If the cursor
// is on the line I set cursorx to its position (allowing for the screen
// space used by that insertion). Thus after I have rendered the
// entire page the curso needs to be displayed as if it was at (cy, cursorx)
// rather than at (cy, cx).
        renderLine(y+2, i, insertMarks(i), buffer_state[i]);
    }
// Then there are possibly some initial lines that need to be filled in.
    std::string line1 = format("\"{}\"", filename);
    line1 = std::format(
        "EDITING {:30s}  LINE={: <6d} CHAR={: <4d}  {:s}",
        line1, cy, cx,
        (overwriteMode ? "REPLACE MODE" : " INSERT MODE"));
    while (line1.length() < width) line1.push_back(' ');
    std::string line2 = "";
    for (int i=0; i<width && i<=right_margin; i++)
    {   int chh = '-';
        if (i == left_margin) chh = '>';
        else if (i == right_margin) chh = 'R';
        else if ((i - left_margin)%tab_width == 0) chh = '!';
        line2.push_back(chh);
    }
    while (line2.length() < width) line2.push_back(' ');
    int x = 0;
    for (auto c : line1)
        put_wch(0, x, c, fg_pale_yellow);
    x = 0;
    for (auto c : line2)
        put_wch(1, x, c, fg_pale_yellow, A_REVERSE);;
// I may have some help info to display - in which case render it here.
    if (top_lines != nullptr)
    {   int y = 0;
        for (const char**p = top_lines; *p!=nullptr; p++)
        {   int x = 0;
            const char* s = *p;
            while (*s != 0)
                put_wch(y, x, *s++, fg_pink);
            for (int i=std::strlen(*p); i<width; i++)
                put_wch(y, x, ' ');
            y++;
        }
    }
// I may be running a dialog to request input from the user.
    if (cmd_active)
    {
#ifdef DEBUG
//      fprintf(logfile(), "cmd_active in renderScreen\n");
#endif
        int y = 0;
        for (auto line : cmd_lines)
        {   int margin = cmd_margin[y];
            x = 0;
            display("in renderscreen ", *line);
            for (auto c : *line)
                put_wch(y, x, c, x < margin ? fg_mauve : fg_pale_green);
            while (x < width)
                put_wch(y, x, ' ', fg_white);
            y++;
        }
    }

// In some cases I may also want to set the low couple of lines to info
// about possible consequences of ALT-x/F1.
// ...
// ...
// ...
#ifdef DEBUG
//  fprintf(logfile(), "cmd_active=%d cy=%d wy=%d cursorx=%d wx=%d cmd_cy=%d cmd_cx=%d\n",
//      cmd_active, cy, wy, cursorx, wx, cmd_cy, cmd_cx);
#endif
    if (cmd_active) move(cmd_cy, cmd_cx);
    else move(cy-wy+2, cursorx-wx);
#ifdef DEBUG
//  if (cmd_active) fprintf(logfile(), "move cursor to %d %d\n", cmd_cy, cmd_cx);
//  else fprintf(logfile(), "move cursor to %d %d\n", cy-wy+2, cursorx-wx);
#endif
    refresh();
}

// The selection block is invalid either if one of its endpoints is
// unset or if the start is after the end, of if we are in column
// mode and the start is to the right of the end.

bool R4::invalidBlock()
{   if (startBlockLine == -1 ||
        endBlockLine == -1 ||
        startBlockCol == -1 ||
        endBlockCol == -1) return true;
    if (startBlockLine > endBlockLine) return true;
    if (startBlockLine == endBlockLine || columnMode)
        return startBlockCol > endBlockCol;
    return false;
}

// Here y is the line in the document to be processed.

string32 R4::insertMarks(int y)
{   string32 line = buffer[y];
    string32 r;
    for (size_t i=0; i<line.length(); i++)
    {   for (int m=0; m<10; m++)
        {   if (markLine[m] == y &&
                markCol[m] == i)
            {   r.push_back('<');
                r.push_back('0' + m);
                r.push_back('>');
            }
        }
        if (startBlockLine==y && startBlockCol==i && invalidBlock())
        {   r.push_back('<');
            r.push_back('B');
            r.push_back('>');
        }
        if (endBlockLine==y && endBlockCol==i && invalidBlock())
        {   r.push_back('<');
            r.push_back('K');
            r.push_back('>');
        }
        if (cy == y && cx == i) cursorx = r.length();
        if (line[i] < ' ')
        {   r.push_back('^');
            r.push_back(line[i] | 0x60);
        }
        else r.push_back(line[i]);
    }
    if (cy == y && cx == line.length()) cursorx = r.length();
    return r;
}

uint32_t command_character;

void R4::processKeypress(uint32_t c, bool insert)
{   command_character = c;
// With ALT or after a menu key ^J, ^K, ^O, ^P, ^Q I will ignore the
// case of simple letters. So eg ^KX and ^Kx will be treated the same way,
// as will ALT-X and ALT-x. I will also ignore CTRL because that may
// still be pressed.
    if ((c & (TAG_ALT|TAG_K|TAG_O|TAG_P|TAG_Q)) != 0 &&
        (c & 0x001fffff) < 0x7f)
    {   if ((c & 0x7f) < ' ') c |= 0x40;
        c = (c & 0xfe000000) | std::tolower(c & 0x7f);
    }
// I want to treat consecutive uses of ALT-x specially, so I will
// set uniConvActive to false on any other input - i.e. things that disrupt
// from being consecutive.
    if (c != ('x' | TAG_ALT)) uniConvActive = false;
    if (keymap.count(c) > 0) (this->*keymap[c])();
    else if (insert)
    {   if (overwriteMode) overwrite_char(c);
        else insert_char(c);
    }
}

R4* tt;  // May be useful when debugging.

int main(int argc, char* argv[])
{   if (argc != 2)
    {   std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    R4 editor(argv[1]);
    tt = &editor;
    editor.run();

    return 0;
}

// Insert a character before the cursor.

void R4::insert_char(uint32_t c)
{   buffer[cy].insert(cx, 1, c);
    display("After inserting char: ", buffer[cy]);
    if (!cmd_active) marks_after_insert();
    cx++;
// If I just inserted a combining mark I need to tidy up
    normalise(buffer[cy], cx);
}

void R4::overwrite_char(uint32_t c)
{   if (cx == buffer[cy].length())
    {   insert_char(c);
        return;
    }
    buffer[cy][cx] = c;
    display("After overwriting char: ", buffer[cy]);
// If I just inserted a combining mark I need to tidy up
    normalise(buffer[cy], cx);
    cx++;
}

void R4::cmd_insert_char(uint32_t c)
{   cmd_line.insert(cmd_cx, 1, c);
    cmd_cx++;
// If I just inserted a combining mark I need to tidy up
    normalise(cmd_line, cmd_cx);
    cmd_cx++;
}

void R4::cmd_overwrite_char(uint32_t c)
{   if (cx == cmd_line.length())
    {   cmd_insert_char(c);
        return;
    }
    cmd_line[cmd_cx] = c;
// If I just inserted a combining mark I need to tidy up
    normalise(cmd_line, cmd_cx);
}

void R4::displayMenu(const char* menu[])
{   top_lines = menu;
}

void R4::hideMenu()
{   top_lines = nullptr;
}

void R4::j_menu()
{   timeout(1000);
    uint32_t c = mygetch();
    timeout(-1);
    if (c != ERR)
    {   processKeypress(c | TAG_J, false);
        return;
    }
// Here we waited a second and nothing has been typed, so I will
// display a menu and then wait for ever.
    const char* menu[] =
    {   "These are the subjects on which help is available:",
        "-----------------------------H E L P-------------------------------------------",
        "H    -  set help level          P     -  control characters in text",
        "T    -  the tab key             0-9   -  place markers",
        "F, A -  Find and Replace        B, K  -  block operations",
        "R    -  the Ruler line          ^     -  split screen",
        "Press one of the above keys for information on that subject,",
        "or press space to continue editing your file.",
        "-------------------------------------------------------------------------------",
        nullptr
    };
    displayMenu(menu);
    renderScreen();
    c = mygetch();
    hideMenu();
    processKeypress(c | TAG_J, false);
}

void R4::k_menu()
{   timeout(1000);
    uint32_t c = mygetch();
    timeout(-1);
    if (c != ERR)
    {   processKeypress(c | TAG_K, false);
        return;
    }
// Here we waited a second and nothing has been typed, so I will
// display a menu and then wait for ever.
    const char* menu[] =
    {   "^K - these are the commands available:",
        "-----------------------------B L O C K   M E N U-------------------------------",
        "---Saving Files---|--Block Operations--|---File Operations----|---Other Menus--",
        " X Save and exit  |B  Begin   K  End   | R Read from file     | (from Main only",
        " Q Abandon edits  |H  Hide / Display   | W Write block to file|altJ Help^K Bloc",
        " S Save and reedit|C  Copy    Y  Delete|                      |^Q Quick ^P CtlC",
        " D Done, save     |V  Move             | ^ Split Screen       |^O Onscreen",
        "--Place  Markers--|N  Column   on (OFF)| M obey Meta file     |Space bar return",
        "0-9 Set/hide # 0-9|F  Fold    G unfold |                      |you to Main Menu",
        "-------------------------------------------------------------------------------",
        nullptr
    };
    displayMenu(menu);
    renderScreen();
    c = mygetch();
    hideMenu();
    processKeypress(c | TAG_K, false);
}

void R4::p_menu()
{   timeout(1000);
    uint32_t c = mygetch();
    timeout(-1);
// Note tha the insert_char(c) here inserts the character regardless
// of whether it is a control one or otherwise "odd". So in particular
// newline here or a control-h etc get inserted as characters as part
// of the present line and do not have an editing effect and do not
// introduce line breaks. A tab inserted this way sits in the buffer as
// a tab character while a tab when entered normally is treated as
// entering a newline plus as many blanks as the current line started with.
    if (c != ERR)
    {   if (c == ' ') return;
        if (overwriteMode)
        {   if (cmd_active) cmd_overwrite_char(c);
            else overwrite_char(c);
        }
        else
        {   if (cmd_active) cmd_insert_char(c);
            else insert_char(c);
        }
        return;
    }
// Here we waited a second and nothing has been typed, so I will
// display a menu and then wait for ever.
    const char* menu[] =
    {   "------------------- ^P  Entering Literal Control Characters -------------------",
        "  ANY single character (except space) now entered at the keyboard,",
        "  including a control character will be entered into the text.",
        "-------------------------------------------------------------------------------",
        nullptr
    };
    displayMenu(menu);
    renderScreen();
    c = mygetch();
    hideMenu();
    if (c == ' ') return;
    if (overwriteMode)
    {   if (cmd_active) cmd_overwrite_char(c);
        else overwrite_char(c);
    }
    else
    {   if (cmd_active) cmd_insert_char(c);
        else insert_char(c);
    }
}

// Almost all of the options documented here are not yet available, and
// are mostly liable to be useful for text not program editing. But
// looking here reminds me that I have not yet supported flashing brackets
// to highlight matching.

void R4::o_menu()
{   timeout(1000);
    uint32_t c = mygetch();
    timeout(-1);
    if (c != ERR)
    {   processKeypress(c | TAG_O, false);
        return;
    }
// Here we waited a second and nothing has been typed, so I will
// display a menu and then wait for ever.
    const char* menu[] =
    {   "^O - these are the available commands:",
        "-----------------------O N S C R E E N   M E N U-------------------------------",
        "--Margins & Tabs--|----Toggles---------|----Miscellaneous-----|---Other Menus--",
        "L set Left margin |T rulr line off (ON)|C Center text on line | (from Main only",
        "R set Right margin|W wordwrap  on (OFF)|                      |^J Help  ^K Bloc",
        "X Release margins |() br flash off (ON)|S redraw Screen       |^Q Quick ^P CtlC",
        "I set tabstop     |V Vari-tabs on (OFF)|                      |^O Onscreen",
        "N clear tabstop   |                    |                      |Space bar return",
        "F set margins and tabstops from current line in File          |you to Main Menu",
        "-------------------------------------------------------------------------------",
        nullptr
    };
    displayMenu(menu);
    renderScreen();
    c = mygetch();
    hideMenu();
    processKeypress(c | TAG_O, false);
}

void R4::q_menu()
{   timeout(1000);
    uint32_t c = mygetch();
    timeout(-1);
    if (c != ERR)
    {   processKeypress(c | TAG_Q, false);
        return;
    }
// Here we waited a second and nothing has been typed, so I will
// display a menu and then wait for ever.
    const char* menu[] =
    {   "^Q - these are the available commands:",
        "-----------------------------Q U I C K   M E N U-------------------------------",
        "------Cursor  Movement------|--Delete--|----Miscellaneous-----|---Other Menus--",
        "           E screen top     |Y line  rt|F Find text in file   | (from Main only",
        "  S line begin   D line end |DEL lin lf|A find And replace    |^J Help  ^K Bloc",
        "           X screen bot     |H   undel |I variable tab        |^Q Quick ^P CtlC",
        "move to:--------------------|----------|Q Repeat command or   |^O Onscreen",
        " R top of text     V last find or block|  key  until  space   |Space bar return",
        " C bottom of text  L line number       |  bar  or other key   |you to Main Menu",
        "-------------------------------------------------------------------------------",
        nullptr
    };
    displayMenu(menu);
    renderScreen();
    c = mygetch();
    hideMenu();
    processKeypress(c | TAG_Q, false);
}

void R4::insert_newline()
{
// Here I will need to move the tail of the current line to form
// the next (new) line.
    string32 tail = buffer[cy].substr(cx);
// If there are marks on the part of the line after the current cursor
// then they will need to be moved to the next line
    if (!cmd_active) marks_after_newline();
    delete_rest_of_line();
    if (last_lexed_line >= cy) last_lexed_line = cy-1;
    buffer.insert(buffer.begin()+cy+1, tail);
    buffer_state.insert(buffer_state.begin()+cy+1, lexer_base);
    cx = 0;
    cy++;
}

// A tab inserts a newline and then indents by the amount that the
// line you are splitting was indented by. The idea of this is that
// it is useful if you are entering a number of consecutive lines all
// of which must be indented by the same amount. It transcribes leading
// spaces and tabs from the line above the new one it introduces.

void R4::tab()
{   insert_newline();
    string32 prev = buffer[cy-1];
    while (prev.length() != 0 && prev[0] == ' ' || prev[0] == '\t')
    {   insert_char(prev[0]);
        prev.erase(1);
    }
}

// Insert return splits the line just after the current position, leaving
// the cursort at the end of the current line.

void R4::insert_return()
{   insert_newline();
    char_left();
}

// If the screen had been corrupted by things beyond the control
// of ncurses I will try to put things right by first filling the screen
// with dots and refreshing. Anywhere that ncurses though there was a dot
// already will possibly not be updates, so if it has junk there that
// will remain. So then I write in blanks everywhere and ncurses thinks
// there are dots everywhere so it HAS to write those. Finally I redraw the
// material I actually want. This is liable to flicker. But that is fair.

void R4::redraw_screen()
{   for (int y=0; y<height; y++)
    for (int x=0; x<width; x++)
    {   move(y, x);
        addch('.');
    }
    refresh();
    for (int y=0; y<height; y++)
    for (int x=0; x<width; x++)
    {   move(y, x);
        addch(' ');
    }
    refresh();
    renderScreen();
}

void R4::line_up()
{   if (cy > 0) cy--;
    makeCursorVisible();
}

void R4::line_down()
{   if (cy < buffer.size() - 1) cy++;
    makeCursorVisible();
}

void R4::char_left()
{   if (cx > 0) cx--;
    else if (cx == 0 && cy != 0)
    {   cy--;
        cx = buffer[cy].length();
    }
    makeCursorVisible();
}

void R4::cmd_char_left()
{   if (cmd_cx > prompt_length) cmd_cx--;
//    makeCursorVisible();
}

void R4::char_right()
{   if (cx < buffer[cy].length()) cx++;
    else if (cx == buffer[cy].length() &&
             cy != buffer.size())
    {   cy++;
        cx = 0;
    }
    makeCursorVisible();
}

void R4::cmd_char_right()
{   if (cmd_cx < cmd_line.length()) cmd_cx++;
//    makeCursorVisible();
}

void R4::scroll_page_up()
{
// When I scroll here I will re-check the size of the window. I am
// not at present clear how ncurses responds if the user resizes the
// window while it is in use, but to the extent to which it does I
// will try to cope.
    getmaxyx(stdscr, height, width);
    int moveby = height-1;
// If scrolling down would bring the bottom of the screen beyond the
// end of the buffer then do not move so far. Ie the furthest you can scroll
// is such as to make the end of the document just visible.
    if (wy + moveby + height >= buffer.size())
        moveby = buffer.size() - height - 1 - wy;
// If the document is very short maybe then I will not move the screen
// but I will then move the cursor to the end of the document.
    if (wy + moveby < 0)
    {   cy = buffer.size()-1;
        cx = buffer[buffer.size()-1].length() - 1;
    }
    else
    {   wy += moveby;
        cy += moveby;
// I do not thing that the following could arise but as a matter of
// caution I still include it.
        if (cy >= buffer.size())
        {   cy = buffer.size()-1;
            cx = buffer[buffer.size()-1].length() - 1;
        }
    }
#ifdef DEBUG
    fprintf(logfile(), "moveby = %d set wy=%d cy = %d\n", moveby, wy, cy);
#endif
    makeCursorVisible();
}

void R4::scroll_page_down()
{   getmaxyx(stdscr, height, width);
    int moveby = height-1;
    if (moveby > wy)
    {   wy = 0;
        cy = 0;
    }
    else
    {   wy -= moveby;
        cy -= moveby;
    }
    makeCursorVisible();
}

void R4::scroll_up()
{   int x, height;
    getmaxyx(stdscr, height, x);
    if (wy < buffer.size()-height-2)
    {   wy++;
        if (cy < buffer.size()-1) cy++;
    }
    makeCursorVisible();
}

void R4::scroll_down()
{   if (wy > 0)
    {   wy--;
        if (cy > 0) cy--;
    }
    makeCursorVisible();
}

void R4::delete_forward(int n)
{   if (!cmd_active) marks_after_delete_forward(n);
    if (cx == buffer[cy].length())
    {   if (cy == buffer.size()) beep();
        else
        {   cy++;
            join_lines();
        }
    }
    else buffer[cy].erase(cx+1, n);
}

void R4::cmd_delete_forward(int n)
{   if (cx == cmd_line.length()) beep();
    else cmd_line.erase(cmd_cx+1, n);
}

void R4::delete_word()
{   pending("delete word");
}

void R4::cmd_delete_word()
{   pending("cmd delete word");
}

// This one deletes whole n glyphs without regard to whether they
// are built up using combining chars.

void R4::delete_backward(int n)
{   if (!cmd_active) marks_after_delete_back(n);
    if (n > cx)
    {   beep();
        n = cx;
    }
    cx -= n;
    buffer[cy].erase(cx, n);
}

void R4::cmd_delete_backward(int n)
{   if (n > cmd_cx-prompt_length) n = cmd_cx;
    cmd_cx -= n;
    cmd_line.erase(cmd_cx, n);
}

void R4::join_lines()
{   if (cy == 0)
    {   beep();
        return;
    }
    if (!cmd_active) marks_after_join_line();
    cx = buffer[cy-1].length();
    for (auto c : buffer[cy])
        buffer[cy-1].push_back(c);
    buffer.erase(buffer.begin()+cy);
    buffer_state.erase(buffer_state.begin()+cy);
    cy--;
}

void R4::backspace()
{   if (cx == 0)
    {   if (cy == 0) beep();
        else join_lines();
    }
    else
    {   denormalise(buffer[cy], cx);
        delete_backward(1);
    }
}

void R4::cmd_backspace()
{   if (cmd_cx <= prompt_length) return;
    denormalise(cmd_line, cmd_cx);
    cmd_delete_backward(1);
}

void R4::delete_char()
{   size_t n = buffer[cy].length();
    if (cx == n-1)
    {   n = buffer.size();
        if (cy == n-1) beep();
        else
        {   cx = 0;
            cy++;
            join_lines();
        }
    }
    else delete_forward(1);
}

void R4::cmd_delete_char()
{   size_t n = cmd_line.length();
    if (cx == n-1) return;
    else cmd_delete_forward(1);
}

void R4::delete_rest_of_line()
{   if (cx+1 < buffer[cy].length())
        delete_forward(buffer[cy].length() - cx - 1);
}

void R4::delete_to_eol()
{   if (cx+1 < buffer[cy].length())
        buffer[cy].erase(cx, buffer[cy].length() - cx);
}

void R4::cmd_delete_to_eol()
{   if (cx+1 < cmd_line.length())
        cmd_line.erase(cmd_cx, cmd_line.length() - cmd_cx);
}

void R4::delete_line()
{   buffer.erase(buffer.begin()+cy);
    buffer_state.erase(buffer_state.begin()+cy);
    cx = 0;
}

void R4::cmd_delete_line()
{   cmd_line.erase(0);
}

// When I flip case if the character is compound I just flip the case
// of the base character, so E-acute will swap with e-acute. If I
// have sizeof(wchar_t)=2 then I treat codes beyond 0xffff as caseless.

char32_t flipcase(char32_t ch)
{
    if (ch > 0x0010ffff)
    {   cchar_t cch = ccharmap[ch];
        if (iswupper(cch.chars[0])) cch.chars[0] = towlower(cch.chars[0]);
        else if (iswlower(cch.chars[0])) cch.chars[0] = towupper(cch.chars[0]);
        return lookup_composite(cch);
    }
    else if (sizeof(wchar_t) == 2 && ch > 0xffff) return ch;
    else if (iswupper((wchar_t)ch)) return (char32_t)towlower((wchar_t)ch);
    else if (iswlower((wchar_t)ch)) return (char32_t)towupper((wchar_t)ch);
    else return ch;
}

void R4::flip_case()
{   if (cx == buffer[cy].length())
    {   beep();
        return;
    }
    buffer[cy][cx] = flipcase(buffer[cy][cx]);
    char_right();
}

void R4::cmd_flip_case()
{   if (cmd_cx == cmd_line.length())
    {   beep();
        return;
    }
    cmd_line[cmd_cx] = flipcase(cmd_line[cmd_cx]);
}

void R4::flip_column_mode()
{   columnMode = !columnMode;
}

void R4::write_file()
{
#ifdef DEBUG
    fprintf(logfile(), "write file\n");
#endif
}

void R4::save_file()
{
#ifdef DEBUG
    fprintf(logfile(), "save file\n");
#endif
    saveFile();
}

void R4::save_and_exit()
{   save_file();
    endwin();
    exit(0);
}

void R4::quit_editor()
{   endwin();
    exit(0);
}

// Return true if I should view this character as part of a "word".
// I allow alphanumeric characters and underscore. If the input characters
// has some combining marks I judge it on the base character in use. So
// an underlined "x" or a "y" with a ring above it will be viewed as
// alphabetic and so can be included in words.

bool wordchar(char32_t ch)
{   if (ch > 0x0010ffff)
    {   cchar_t cch = ccharmap[ch];
        ch = cch.chars[0];          // Just look at the base character.
    }
    if (sizeof(wchar_t) == 2 && ch > 0xffff) return false;
    return iswalnum(ch) || ch == '_';
}

void R4::word_left()
{   string32 line = buffer[cy];
    if (cx == 0)
    {   char_left();         // will move to end of previous line
        return;
    }
    cx--;
    while (cx >= 0 &&
           !wordchar(line[cx])) cx--;
    while (cx >= 0 &&
           wordchar(line[cx])) cx--;
    cx++;
    makeCursorVisible();
}

void R4::cmd_word_left()
{   string32 line = cmd_line;
    if (cmd_cx <= prompt_length)   // do nothing if at start.
        return;
    cmd_cx--;
    while (cmd_cx >= prompt_length &&
           !wordchar(cmd_line[cmd_cx])) cmd_cx--;
    while (cmd_cx >= prompt_length &&
           wordchar(cmd_line[cmd_cx])) cmd_cx--;
    cmd_cx++;
//    makeCursorVisible();   I may need to do horizontal scrolling...
}

void R4::word_right()
{   string32 line = buffer[cy];
    if (cx == line.length())
    {   char_right();         // will move to start of next line
        return;
    }
    cx++;
    while (cx < line.length() &&
           wordchar(line[cx])) cx++;
    while (cx < line.length() &&
           !wordchar(line[cx])) cx++;
    makeCursorVisible();
}

void R4::cmd_word_right()
{   string32 line = cmd_line;
    if (cmd_cx == cmd_line.length()) return;
    cmd_cx++;
    while (cmd_cx < cmd_line.length() &&
           wordchar(cmd_line[cmd_cx])) cmd_cx++;
    while (cmd_cx < cmd_line.length() &&
           !wordchar(cmd_line[cmd_cx])) cmd_cx++;
//    makeCursorVisible();
}

void R4::start_of_line()
{   cx = 0;
    makeCursorVisible();
}

void R4::cmd_start_of_line()
{   cmd_cx = prompt_length;
    makeCursorVisible();
}

void R4::end_of_line()
{   cx = buffer[cy].length();
    makeCursorVisible();
}

void R4::cmd_end_of_line()
{   cmd_cx = cmd_line.length();
    makeCursorVisible();
}

void R4::top_of_screen()
{   cy = wy;
    if (cx > buffer[cy].length()) cx = buffer[cy].length();
    makeCursorVisible();
}

void R4::bottom_of_screen()
{   cy = wy + height - 3;
    if (cx > buffer[cy].length()) cx = buffer[cy].length();
    makeCursorVisible();
}

void R4::start_of_text()
{   cx = 0;
    cy = 0;
    makeCursorVisible();
}

void R4::end_of_text()
{   cy = buffer.size()-1;
    cx = buffer[cy].length();
    makeCursorVisible();
}

void R4::flip_overwrite_mode()
{   overwriteMode = !overwriteMode;
}

// ^Kn for n in the range 0 to 9 sets a marker at the current position
// If you behave as if you are setting a mark but your position is already
// where the mark is then that clears it.

void R4::flip_mark(int& y, int& x)
{   if (cy == y && cx == x)  // already at that mark ..
    {   y = -1;              // .. so cancel it
        x = -1;
        return;
    }
    y = cy;                  // set it.
    x = cx;
}

// If yuo have marks, <B>, <K> or <0> to <9> on a line that is changed
// they need to remain (as best possible) referring to the character they
// did before the alteration. So this applies if the marhs are to the right
// of an insert or deletion, and special treatment happens when the
// edit involved inserting or removing a newline. Here I have stubs that
// I intend to come back and flesh out later.

void R4::marks_after_insert()
{
}

void R4::marks_after_newline()
{
}

void R4::marks_after_join_line()
{
}

void R4::marks_after_delete_forward(int n)
{
}

void R4::marks_after_delete_back(int n)
{
}

void R4::marks_after_replace(int oldx, int x)
{
}

void R4::marks_after_add_line()
{
}

void R4::marks_after_remove_line()
{
}

void R4::set_mark()
{   int n = command_character & 0xf;
    flip_mark(markLine[n], markCol[n]);
}

void R4::goto_mark()
{   int n = command_character & 0xf;
    if (markLine[n] == -1)
    {   beep();                // Mark not set
        return;
    }
    cy = markLine[n];
    cx = markCol[n];
    makeCursorVisible();
}

void R4::set_start_block()
{   flip_mark(startBlockLine, startBlockCol);
}

void R4::goto_start_block()
{   if (startBlockLine == -1)
    {   beep();                // Mark not set
        return;
    }
    cy = startBlockLine;
    cx = startBlockCol;
    makeCursorVisible();
}

void R4::set_end_block()
{   flip_mark(endBlockLine, endBlockCol);
}

void R4::goto_end_block()
{   if (endBlockLine == -1)
    {   beep();                // Mark not set
        return;
    }
    cy = endBlockLine;
    cx = endBlockCol;
    makeCursorVisible();
}

void R4::find()
{
// Dialog goes...
//    Top line blank, next line "Find? ", third line blank.
// on ENTER the third line becomes
//    "Options (? for info)? "
// and if the option "?" is specified you get 6 more lines then a
// blank one...
//        Find? "xxxx_xxxx"
//        Options (? for info)? "?"
//        number - find Nth occurence of string
//        B      - search backwards
//        U      - ignore upper/lower case differences
//        W      - find whole words only
//               ^JF for details of wild cards, newlines etc. in search strings
//        Options?
// and altJf displays
//  'FIND'  and  'FIND AND REPLACE':
//  To find a string in the text, type ^QF, then the string that you wish to find,
//  then two carriage returns. This will find the next occurence of the string
//  after the cursor. The second carriage return means 'default options'.
//    In the find string the following characters have special meanings:
//      ^A    Matches any character
//      ^S    Matches any non-alphanumeric character
//      ^N    Matches a newline in the text
//      ^Oc   for a given character c, matches any character EXCEPT c
//  To place these or any other control characters in the find string,
//  precede it with ^P - otherwise it is a command to the editor.
//  To any question, use ^H to restore the previous entry.
//    ^QA (find And replace) will also prompt for a replacement string.
//  The find string will be located and the editor will ask if you want the
//  replacement to occur.
//    Both commands also prompt for options - try using the command for details.
//    ^L will repeat the previous find or replace operation.
//    ^QV will move the cursor to its position before the last find or replace.
//      This can be useful if you mistype the find string.
//    ^U will interrupt a search at any time.
//  -----------------------------------------------------------(press any key)-----
   string32 empty_line = L("");
   cmd_line = L("Find? ");
   prompt_length = cmd_cx = cmd_line.length();
   cmd_cy = 1;
   cmd_lines.clear();
   cmd_lines.push_back(&empty_line); cmd_margin[0] = 0;
   cmd_lines.push_back(&cmd_line);   cmd_margin[1] = cmd_cx;
   cmd_lines.push_back(&empty_line); cmd_margin[2] = 0;
   display("cmd_line=", cmd_line, " cmd_cx=", cmd_cx);
   cmd_active = true;
   renderScreen();
   uint32_t ch;
   for (;;)
   {   ch = mygetch();
       if (cmd_process(ch)) break;
       renderScreen();
   }

   string32 search_line = cmd_line;
   target = search_line.substr(prompt_length); 
   display("Search string is: ", target);
   cmd_line = L("Options (? for info)? ");
   cmd_cy = 2;
   cmd_lines.clear();
   cmd_lines.push_back(&empty_line); cmd_margin[0] = 0;
   cmd_lines.push_back(&search_line);cmd_margin[1] = prompt_length;
   prompt_length = cmd_cx = cmd_line.length();
   cmd_lines.push_back(&cmd_line);   cmd_margin[1] = cmd_cx;
   cmd_lines.push_back(&empty_line); cmd_margin[2] = 0;
   display("cmd_line=", cmd_line, " cmd_cx=", cmd_cx);
   cmd_active = true;
   renderScreen();
   for (;;)
   {   ch = mygetch();
       if (cmd_process(ch)) break;
       renderScreen();
   }
   string32 options = cmd_line.erase(0, prompt_length);
   display("options = ", options);
// The "get help" part of the menu here is not yet populated.
   if (options.find('?', prompt_length) != string32::npos)
   {   string32 save_options = options;
       display("Has a query in ", options);
       cmd_line = L("Options? ");
       string32 helpline_1 = L("some help text");
       string32 helpline_2 = L("more help test");
       cmd_cy = 8;
       cmd_lines.clear();
       cmd_lines.push_back(&empty_line); cmd_margin[0] = 0;
       cmd_lines.push_back(&search_line);cmd_margin[1] = prompt_length;
       prompt_length = cmd_cx = cmd_line.length();
       cmd_lines.push_back(&cmd_line);   cmd_margin[1] = cmd_cx;
       cmd_lines.push_back(&helpline_1); cmd_margin[2] = 0;
       cmd_lines.push_back(&helpline_2); cmd_margin[3] = 0;
       display("cmd_line=", cmd_line, " cmd_cx=", cmd_cx);
       cmd_active = true;
       renderScreen();
       for (;;)
       {   ch = mygetch();
           if (cmd_process(ch)) break;
           renderScreen();
       }
       options = cmd_line;
   }
// target now has the string we are searching for, and options the
// options, where valid ones are
//   B        search backwards
//   U        case insensitive search
//   W        find whole words only
//   R        treat pattern as a regular expression
//   number   find the nth instance
    back = false;
    word = false;
    casefold = false;
    regex = false;
    count = 0;
    bool inint = false;
    bool valid = true;
    for (auto c : options)
    {   if (c >= 0x7e)
        {   valid = false;
            break;
        }
        if (std::isdigit(c))
        {   if (!inint) count = 0;
            count = 10*count + c - '0';
            inint = true;
            continue;
        }
        switch (c)
        {
        case 'b': case 'B':
            back = true;
            break;
        case 'u': case 'U':
            casefold = true;
            break;
        case 'w': case 'W':
            word = true;
            break;
        case 'r': case 'R':
            regex = true;
            break;
        case ' ':
            break;
        default:
            valid = false;
            break;
        }
        inint = false;
    }
    if (count == 0) count = 1;
    perform_find();
    cmd_active = false;
#ifdef DEBUG
    fprintf(logfile(), "end of search cy=%d, cx=%d\n", cy, cx);
#endif 
    makeCursorVisible();
}

// I probably need to be able to report "no matches found".

void R4::perform_find()
{   size_t rep = count;
    if (rep == 0)
    {   beep();
        return;
    }
    while (rep-- != 0)
    {   for (;;)
        {   if (back)
            {   if (cy==0 && cx==0) break;
                else char_left();
            }
            else
            {   if (cy==buffer.size()-1 && cx==buffer[cy].length()) break;
                else char_right();
            }
            if (match_before(target, casefold, word, regex)) break;
        }
    }
}

// For a first version I will only handlke simple textual matches
// without the constraint that the match should be of a word.

void R4::next_char_back(int& x, int& y) 
{   if (x > 0) x--;
    else if (x == 0 && y != 0)
    {   string32 line = buffer[--y];
        x = line.length();
    }
}

// When doing a case-insensitive search I map characters from both
// strings into lower case, with special case for when I am on windows
// where wide characters are only 2 bytes (I take a view that any glyph
// represented using surrogates will not have a case-flipped version) and
// with characters that have added diacritical marks added using
// combining characters.

// Both for case-insensitive matching and for word-searches the exact
// behaviour can be locale-sensitive.

char32_t fixcase(char32_t ch, bool casefold)
{   if (!casefold) return ch;
// If I have a character with composing marks and the base characters is
// in upper case I will fold it to lower case. Furthermore I will
// normalise the order of combining marks here. When I am not performing
// comparisons I leave that order unchanged so that adding and removing
// multiple diacriticals behaves sensibly with the last one added being the
// first to be removed.
    else if (ch > 0x0010ffff)
    {   cchar_t cch = ccharmap[ch];
        cch.chars[0] = towlower(cch.chars[0]);
        std::sort(std::begin(cch.chars)+1, std::end(cch.chars));
        return lookup_composite(cch);
    }
    else if (sizeof(wchar_t) == 2 && ch > 0xffff) return ch;
    else return (char32_t)towlower((wchar_t)ch);
}

// This does not handle linebreaks yet... and I may worry about the very
// start of the buffer.

bool R4::match_before(string32 target, bool casefold, bool word, bool regex)
{   int x = cx, y = cy;
    if (word && wordchar(buffer[y][x])) return false;
    next_char_back(x, y);
    int len = target.length();
    while (len != 0)
    {   if (fixcase(target[--len], casefold) !=
            fixcase(buffer[y][x], casefold)) return false;
        next_char_back(x, y);
    }
    if (word && wordchar(buffer[y][x])) return false;
    return true;
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

void R4::undelete()
{   pending("undelete");
}

void R4::cmd_undelete()
{   pending("cmd undelete");
}

void R4::stop_command()
{   pending("stop");
}

void R4::copy_block()
{   pending("copy block");
}

void R4::insert_from_file()
{   pending("insert from file");
}

void R4::move_block()
{   pending("move block");
}

void R4::delete_block()
{   pending("delete block");
}

void R4::find_and_replace()
{   pending("find and replace");
}

void R4::goto_line()
{   pending("goto line");
}

void R4::last_find_or_block()
{   pending("last find or block");
}

std::string SS(string32 s) // Maybe useful for debugging.
{   return S(s);
}

void R4::pending()
{
#ifdef DEBUG
    fprintf(logfile(), "Pending/Unimplemented op %x\n", command_character);
#endif
}

void R4::pending(const char* s)
{
#ifdef DEBUG
    fprintf(logfile(), "Pending/Unimplemented op %x (%s)\n",
        command_character, s);
#endif
}

// end of r4.cpp
