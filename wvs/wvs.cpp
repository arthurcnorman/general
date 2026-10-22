// wvs.cpp                                     Copyright 2026 Arthur Norman

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

FILE* logfile = std::fopen("log.log", "w");

TextEditor::TextEditor(const std::string& filename) : filename(filename)
{   setlocale(LC_ALL, "");
    initscr();
    raw();
    noecho();
    keypad(stdscr, true);
    start_color();
    chtype blank = getbkgd(stdscr);     // background
    int pair_id = PAIR_NUMBER(blank);
    short foreground, background;
    pair_content(pair_id, &foreground, &background);
// 
fprintf(logfile, "colour for screen is %d %d\n", foreground, background);
// Colours:
//   plain text    white on black
//   comments      red on black
//   strings       green on black
//   characters    magenta on black
//   keyword       yellow on black
    init_pair(fg_red,     COLOR_RED, COLOR_BLACK);
    init_pair(fg_green,   COLOR_GREEN, COLOR_BLACK);
    init_pair(fg_yellow,  COLOR_YELLOW, COLOR_BLACK);
    init_pair(fg_blue,    COLOR_BLUE, COLOR_BLACK);
    init_pair(fg_magenta, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(fg_cyan,    COLOR_CYAN, COLOR_BLACK);
    init_pair(fg_white ,  COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIR(fg_white));
    last_lexed_line = -1;
    startBlockLine = -1;
    startBlockCol = -1;
    endBlockLine = -1;
    endBlockCol = -1;
    for (int i=0; i<10; i++)
    {   markLine[i] = -1;
        markCol[i] = -1;
    }
    refresh();
    loadFile();
}

TextEditor::~TextEditor()
{   endwin();
}


void TextEditor::run()
{   while (true)
    {   renderScreen();
        processKeypress(mygetch(), true);
    }
}

void TextEditor::clearLine(int y, int w)
{   move(y, 0);
    for (int x=0; x<w; x++) addch(' ');
}

// Here I will jhave a commentary about syntax colouring. I will just
// be thinking about C++.

// The notations I want to be aware of are:
// (.)     // .... EOL             a 1-line commant.
// (.)     /* .... */              comments that may span lines.
// (.)     " ... \x ... "          string with possible escaped characters.
// (.)     ' ... \x ... ;          character literal with possible escapes.
//
// For a first version I will not highlight numbers or keywords, but if I
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

enum lexer_state lexer_transition(lexer_state state, wchar_t c)
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
;           return lexer_star;
        default:
            return lexer_slash_star_comment;
        }
    case lexer_string:
        switch (c)
        {
        case '"':
            return lexer_base;
        case '\\':
;           return lexer_string_esc;
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
;           return lexer_char_esc;
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
// with the ALT ket pressed will get returned as two characters, ESC and
// then the letter.

int TextEditor::mygetch8()
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

int TextEditor::mygetch()
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



void TextEditor::loadFile()
{   std::wifstream file(filename, std::wifstream::in);
    file.imbue(std::locale(file.getloc(),
                           new std::codecvt_utf8<wchar_t>));

    if (file.is_open())
    {   std::wstring line;
        while (getline(file, line))
        {   if (line.size()>0 && line[0]==0xfeff)
                line.erase(0, 1);  // Get rid of BOM if present.
            buffer.push_back(line);
            buffer_state.push_back(lexer_base);
        }
    }
    else
    {   buffer.push_back(L"");
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

void TextEditor::saveFile()
{   make_backup(filename);
    std::wofstream file(filename, std::wofstream::out);
    file.imbue(std::locale(file.getloc(),
                           new std::codecvt_utf8<wchar_t>));

    if (file.is_open())
    {   for (const auto& line : buffer)
        {   file << line << L"\n";
        }
    }
    file.close();
}

void TextEditor::addch8(int c)
{   if (c <= 0x7f) addch(c);
    else if (c <= 0x7ff)
    {   addch(0xc0 | ((c>>6) & 0x1f));
        addch(0x80 | (c & 0x3f));
    }
    else if (c <= 0xffff)
    {   addch(0xe0 | ((c>>12) & 0xf));
        addch(0x80 | ((c>>6) & 0x3f));
        addch(0x80 | (c & 0x3f));
    }
    else if (c <= 0x10fff)
    {   addch(0xf0 | ((c>>18) & 0x7));
        addch(0x80 | ((c>>12) & 0x3f));
        addch(0x80 | ((c>>6) & 0x3f));
        addch(0x80 | (c & 0x3f));
    }
}

void TextEditor::makeCursorVisible()
{
}


void TextEditor::renderLine(int screeny, int row, std::wstring line, enum lexer_state state)
{   int col = 0;
    move(screeny, 0);
    for (wchar_t c : line)
    {   if (columnMode)
        {   if (row >= startBlockLine &&
                row <= endBlockLine &&
                col >= startBlockCol &&
                col <= endBlockCol) inBlock = true;
            else inBlock = false;
        }
        else
        {   if (row == startBlockLine && col == startBlockCol)
                inBlock = true;
            if (row == endBlockLine && col == endBlockCol)
                inBlock = false;
        }
        if (inBlock) attron(A_REVERSE);
        addch8(UNICODE(c));
        enum lexer_state prev = state;
        state = lexer_transition(state, c);
        if (state == lexer_string ||
            state == lexer_string_esc)
        {   attron(COLOR_PAIR(fg_green));
            if (prev == lexer_base)
            {   move(screeny, col);
                addch('"');
            }
        }
        else if (state == lexer_char ||
                 state == lexer_char_esc)
        {   attron(COLOR_PAIR(fg_cyan));
            if (prev == lexer_base)
            {   move(screeny, col);
                addch('\'');   
            }
        }
        else if (state == lexer_slash_comment ||
                 state == lexer_star)
        {   attron(COLOR_PAIR(fg_red));
            if (prev == lexer_slash)
            {   move(screeny, col-1);
                addch('/');   
                addch('/');
            }
        }
        else if (state == lexer_slash_star_comment)
        {   attron(COLOR_PAIR(fg_red));
            if (prev == lexer_slash)
            {   move(screeny, col-1);
                addch('/');   
                addch('*');   
            }
        }
        else attron(COLOR_PAIR(fg_white));
        if (inBlock) attroff(A_REVERSE);
        col++;
    }
    while (col < width)
    {   addch(' ');
        col++;
    }
// Always reset base colouring after displaying a line
    attron(COLOR_PAIR(fg_white));
}

void TextEditor::renderScreen()
{   int height, width;
// It is always possible that the user re-sized the windows, so measure
// its size each time I render.
    getmaxyx(stdscr, height, width);
    inBlock = false;
    for (int k = 0; k < height; k++)
    {   int i = firstVisibleLine + k;
        if (i >= buffer.size())
        {   inBlock = false;
            clearLine(i, width);
            continue;
        }

        renderLine(k, i, buffer[i], buffer_state[i]);
    }
    move(cy, cx);
    refresh();
}

int32_t command_character;

void TextEditor::processKeypress(int32_t c, bool insert)
{   command_character = c;
    auto f = keymap[c];
    if (f != nullptr)
        (this->*f)();
    else if (insert)
    {   buffer[cy].insert(cx, 1, c);
        cx++;
    }
}

TextEditor* tt;

int main(int argc, char* argv[])
{   if (argc != 2)
    {   std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    TextEditor editor(argv[1]);
    tt = &editor;
    editor.run();

    return 0;
}

void TextEditor::pending()
{   fprintf(logfile, "Pending op %x\n", command_character);
}

void TextEditor::displayMenu(const char* menu[])
{
}

void TextEditor::hideMenu()
{
}

void TextEditor::j_menu()
{   pending();
}

void TextEditor::k_menu()
{   timeout(500);
    int32_t c = mygetch();
    timeout(-1);
    if (c != ERR)
    {   processKeypress(c | TAG_K, false);
        return;
    }
// Here we waited half a second and nothing has been typed, so I will
// display a menu and then wait for ever.
    const char* menu[] =
    {   "^K - these are the commands available:",
        "-----------------------------B L O C K   M E N U-------------------------------",
        "---Saving Files---|--Block Operations--|---File Operations----|---Other Menus--",
        " X Save and exit  |B  Begin   K  End   | R Read from file     | (from Main only",
        " Q Abandon edits  |H  Hide / Display   | W Write block to file|^J Help  ^K Bloc",
        " S Save and reedit|C  Copy    Y  Delete|                      |^Q Quick ^P CtlC",
        " D Done, save     |V  Move             | ^ Split Screen       |^O Onscreen",
        "--Place  Markers--|N  Column   on (OFF)| M obey Meta file     |Space bar return",
        "0-9 Set/hide # 0-9|F  Fold    G unfold |                      |you to Main Menu",
        "-------------------------------------------------------------------------------"
    };
    displayMenu(menu);
    c = mygetch();
    hideMenu();
    processKeypress(c | TAG_K, false);
}

void TextEditor::o_menu()
{   pending();
}

void TextEditor::p_menu()
{   pending();
}

void TextEditor::q_menu()
{
}

void TextEditor::insert_newline()
{
// Here I will need to truncate the current line and move its tail
// to for the next line.
    std::wstring tail = buffer[cy].substr(cx);
    delete_to_eol();
    buffer.insert(buffer.begin()+cy+1, tail);
    buffer_state.insert(buffer_state.begin()+cy+1, lexer_base);
    cx = 0;
    cy++;
}

void TextEditor::line_up()
{   if (cy > 0) cy--;
    if (cx > buffer[cy].size()) cx = buffer[cy].size();
    makeCursorVisible();
}

void TextEditor::line_down()
{   if (cy < buffer.size() - 1) cy++;
    if (cx > buffer[cy].size()) cx = buffer[cy].size();
    makeCursorVisible();
}

void TextEditor::char_left()
{   if (cx > 0) cx--;
    makeCursorVisible();
}

void TextEditor::char_right()
{   if (cx < buffer[cy].size()) cx++;
    makeCursorVisible();
}

void TextEditor::page_up()
{   int height, x;
    getmaxyx(stdscr, height, x);
    cy -= height-1;
    if (cy < 0) cy = 0;
    makeCursorVisible();
}

void TextEditor::page_down()
{   int height, x;
    getmaxyx(stdscr, height, x);
    cy += height-1;
    if (cy > buffer.size()) cy = buffer.size();
    makeCursorVisible();
}

void TextEditor::page_line_up()
{   int x, height;
    getmaxyx(stdscr, height, x);
    if (firstVisibleLine < buffer.size()-height-2) firstVisibleLine++;
}

void TextEditor::page_line_down()
{   if (firstVisibleLine > 0) firstVisibleLine--;
}

void TextEditor::delete_forward(int n)
{   buffer[cy].erase(cx+1, n);
}

void TextEditor::delete_backward(int n)
{   if (n > cx) beep();
    cx -= n;
    buffer[cy].erase(cx, n);
}

void TextEditor::join_lines()
{   if (cy == 0) beep();
    cx = buffer[cy-1].length();
    for (auto c : buffer[cy])
        buffer[cy-1].push_back(c);
    buffer.erase(buffer.begin()+cy);
    buffer_state.erase(buffer_state.begin()+cy);
    cy--;
}

void TextEditor::backspace()
{   if (cx == 0)
    {   if (cy == 0) beep();
        else join_lines();
    }
    else delete_backward(1);
}

void TextEditor::delete_char()
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

void TextEditor::delete_to_eol()
{   delete_forward(buffer[cy].length() - cx - 1);
}

void TextEditor::delete_line()
{   buffer.erase(buffer.begin()+cy);
    buffer_state.erase(buffer_state.begin()+cy);
    cx = 0;
}


void TextEditor::flip_column_mode()
{   columnMode = !columnMode;
}

void TextEditor::write_file()
{   fprintf(logfile, "write file\n");
}

void TextEditor::save_file()
{   fprintf(logfile, "save file\n");
    saveFile();
}

void TextEditor::save_and_exit()
{   save_file();
    endwin();
    exit(0);
}

void TextEditor::quit_editor()
{   endwin();
    exit(0);
}

void TextEditor::word_left()
{   pending();
}

void TextEditor::scroll_page_up()
{   pending();
}

void TextEditor::word_right()
{   pending();
}

void TextEditor::undelete()
{   pending();
}

void TextEditor::tab()
{   pending();
}

void TextEditor::repeat_last_find()
{   pending();
}

void TextEditor::insert_return()
{   pending();
}

void TextEditor::scroll_page_down()
{   pending();
}

void TextEditor::delete_word()
{   pending();
}

void TextEditor::stop_command()
{   pending();
}

void TextEditor::overwrite_mode()
{   overwriteMode = !overwriteMode;
}

void TextEditor::scroll_line_down()
{   pending();
}

void TextEditor::scroll_line_up()
{   pending();
}

// ^Kn for n in the range 0 to 9 sets a marker at the current position

void TextEditor::set_mark()
{   int n = command_character & 0xf;
    markLine[n] = cy;
    markCol[n] = cx;
}

void TextEditor::goto_mark()
{   int n = command_character & 0xf;
    cy = markLine[n];
    cx = markCol[n];
    makeCursorVisible();
}

void TextEditor::set_start_block()
{   startBlockLine = cy;
    startBlockCol = cx;
}

void TextEditor::goto_start_block()
{   cy = startBlockLine;
    cx = startBlockCol;
    makeCursorVisible();
}

void TextEditor::set_end_block()
{   endBlockLine = cy;
    endBlockCol = cx;
}

void TextEditor::goto_end_block()
{   cy = endBlockLine;
    cx = endBlockCol;
    makeCursorVisible();
}

void TextEditor::copy_block()
{   pending();
}

void TextEditor::insert_from_file()
{   pending();
}

void TextEditor::move_block()
{   pending();
}

void TextEditor::delete_block()
{   pending();
}

void TextEditor::redraw_screen()
{   pending();
}

void TextEditor::find_and_replace()
{   pending();
}

void TextEditor::find()
{   pending();
}

// end of wvs.cpp
