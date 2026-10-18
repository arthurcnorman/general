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


#include <ncurses.h>
#include <vector>
#include <string>
#include <locale>
#include <codecvt>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <cstdlib>
#include <cstdio>
#include <cstdint>

#include <unistd.h> // for sleep()

static FILE* log = std::fopen("log.log", "w");


// Note that on Linux wchar_t is a 32-bit type and only the low 20 bits
// are needed to cover the full Unicode range, so I will cheat somewhat and
// use the top byte of wchar_t values to hold extra information.

// Well WEOF passes through as itself and the top bits are not viewed as
// especoially meaningful.

constexpr int CTRL_KEY(int32_t k)
{   return k & 0x1f;
}

constexpr int UNICODE(int32_t k)
{   return k & 0x00ffffff;
}

constexpr int TAGBITS(uint32_t k)
{   return k & 0xff000000;
}

const int32_t TAG_ALT = 0x02000000;
const int32_t TAG_FN  = 0x04000000;

const int32_t TAG_K   = 0x08000000;
const int32_t TAG_P   = 0x10000000;
const int32_t TAG_Q   = 0x10000000;

const int32_t ESC      = 0x1b;
const int32_t BAD_UTF8 = 0x25a0;   // BLACK SQUARE

class TextEditor
{
public:
    TextEditor(const std::string& filename) : filename(filename)
    {   setlocale(LC_ALL, "");
        initscr();
        raw();
        noecho();
        keypad(stdscr, true);
        start_color();
        init_pair(1, COLOR_RED, COLOR_BLUE);
        refresh();
        loadFile();
    }

    ~TextEditor()
    {   //saveFile();
        endwin();
    }

    void run()
    {   while (true)
        {   renderScreen();
            processKeypress(getch());
        }
    }

    int cx=0, cy=0;  // cursor position
    int firstVisibleLine = 0;
    bool columnMode = true;
    int startSelectLine = 3, startSelectCol = 4;
    int endSelectLine = 6, endSelectCol = 17;
    std::vector<std::wstring> buffer;
    std::string filename;

    void loadFile();
    void saveFile();

    void renderScreen();
    void makeCursorVisible();
    void displayMenu(const char* menu[]);
    void hideMenu();

    void clearLine(int y, int w)
    {   move(y, 0);
        for (int x=0; x<w; x++)
            addch(' ');
    }

// Here the getch() function from ncurses hands back characters in the
// range 0 to 0xff as themselves, but it then uses return values from
// 0x100 to to 0x5xx to stand for special keys: arrow keys, page-up and
// page-down, function keys and on selected keyboards many more. I
// will return those extended values with TAG_FN. Here I expect that
// those extended keys that sometimes get returned as sequences starting
// with ESC will have been converted into single codes. But letters types
// with the ALT ket pressed will get returned as two characters, ESC and
// then the letter.

    int mygetch8()
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

    int mygetch()
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

    void processKeypress(int32_t c, bool insert=true);

    void addch8(int c);

using funcMap = std::unordered_map<wchar_t, void (TextEditor::*)()>;
funcMap charAction =
{
    {WEOF,               &TextEditor::quit_editor},

    {CTRL_KEY('a'),      &TextEditor::pending},
    {CTRL_KEY('b'),      &TextEditor::pending},
    {CTRL_KEY('c'),      &TextEditor::scroll_page_up},
    {CTRL_KEY('d'),      &TextEditor::char_right},
    {CTRL_KEY('e'),      &TextEditor::line_up},
    {CTRL_KEY('f'),      &TextEditor::pending},
    {CTRL_KEY('g'),      &TextEditor::pending},
    {CTRL_KEY('h'),      &TextEditor::pending},
    {CTRL_KEY('i'),      &TextEditor::pending},
    {CTRL_KEY('j'),      &TextEditor::pending},
    {CTRL_KEY('k'),      &TextEditor::k_menu},
    {CTRL_KEY('l'),      &TextEditor::pending},
    {CTRL_KEY('m'),      &TextEditor::pending},
    {CTRL_KEY('n'),      &TextEditor::pending},
    {CTRL_KEY('o'),      &TextEditor::o_menu},
    {CTRL_KEY('p'),      &TextEditor::p_menu},
    {CTRL_KEY('q'),      &TextEditor::q_menu},
    {CTRL_KEY('r'),      &TextEditor::scroll_page_down},
    {CTRL_KEY('s'),      &TextEditor::char_left},
    {CTRL_KEY('t'),      &TextEditor::pending},
    {CTRL_KEY('u'),      &TextEditor::pending},
    {CTRL_KEY('v'),      &TextEditor::pending},
    {CTRL_KEY('w'),      &TextEditor::scroll_line_down},
    {CTRL_KEY('x'),      &TextEditor::line_down},
    {CTRL_KEY('y'),      &TextEditor::pending},
    {CTRL_KEY('z'),      &TextEditor::scroll_line_up},
                         
    {'a' | TAG_ALT,      &TextEditor::pending},
    {'b' | TAG_ALT,      &TextEditor::pending},
    {'c' | TAG_ALT,      &TextEditor::pending},
    {'d' | TAG_ALT,      &TextEditor::pending},
    {'e' | TAG_ALT,      &TextEditor::pending},
    {'f' | TAG_ALT,      &TextEditor::pending},
    {'g' | TAG_ALT,      &TextEditor::pending},
    {'h' | TAG_ALT,      &TextEditor::pending},
    {'i' | TAG_ALT,      &TextEditor::pending},
    {'j' | TAG_ALT,      &TextEditor::pending},
    {'k' | TAG_ALT,      &TextEditor::pending},
    {'l' | TAG_ALT,      &TextEditor::pending},
    {'m' | TAG_ALT,      &TextEditor::pending},
    {'n' | TAG_ALT,      &TextEditor::pending},
    {'o' | TAG_ALT,      &TextEditor::pending},
    {'p' | TAG_ALT,      &TextEditor::pending},
    {'q' | TAG_ALT,      &TextEditor::pending},
    {'r' | TAG_ALT,      &TextEditor::pending},
    {'s' | TAG_ALT,      &TextEditor::pending},
    {'t' | TAG_ALT,      &TextEditor::pending},
    {'u' | TAG_ALT,      &TextEditor::pending},
    {'v' | TAG_ALT,      &TextEditor::pending},
    {'w' | TAG_ALT,      &TextEditor::pending},
    {'x' | TAG_ALT,      &TextEditor::pending},
    {'y' | TAG_ALT,      &TextEditor::pending},
    {'z' | TAG_ALT,      &TextEditor::pending},
                         
    {'A' | TAG_ALT,      &TextEditor::pending},
    {'B' | TAG_ALT,      &TextEditor::pending},
    {'C' | TAG_ALT,      &TextEditor::pending},
    {'D' | TAG_ALT,      &TextEditor::pending},
    {'E' | TAG_ALT,      &TextEditor::pending},
    {'F' | TAG_ALT,      &TextEditor::pending},
    {'G' | TAG_ALT,      &TextEditor::pending},
    {'H' | TAG_ALT,      &TextEditor::pending},
    {'I' | TAG_ALT,      &TextEditor::pending},
    {'J' | TAG_ALT,      &TextEditor::pending},
    {'K' | TAG_ALT,      &TextEditor::pending},
    {'L' | TAG_ALT,      &TextEditor::pending},
    {'M' | TAG_ALT,      &TextEditor::pending},
    {'N' | TAG_ALT,      &TextEditor::pending},
    {'O' | TAG_ALT,      &TextEditor::pending},
    {'P' | TAG_ALT,      &TextEditor::pending},
    {'Q' | TAG_ALT,      &TextEditor::pending},
    {'R' | TAG_ALT,      &TextEditor::pending},
    {'S' | TAG_ALT,      &TextEditor::pending},
    {'T' | TAG_ALT,      &TextEditor::pending},
    {'U' | TAG_ALT,      &TextEditor::pending},
    {'V' | TAG_ALT,      &TextEditor::pending},
    {'W' | TAG_ALT,      &TextEditor::pending},
    {'X' | TAG_ALT,      &TextEditor::pending},
    {'Y' | TAG_ALT,      &TextEditor::pending},
    {'Z' | TAG_ALT,      &TextEditor::pending},
                         
    {'a' | TAG_K,        &TextEditor::pending},
    {'b' | TAG_K,        &TextEditor::pending},
    {'c' | TAG_K,        &TextEditor::pending},
    {'d' | TAG_K,        &TextEditor::pending},
    {'e' | TAG_K,        &TextEditor::pending},
    {'f' | TAG_K,        &TextEditor::pending},
    {'g' | TAG_K,        &TextEditor::pending},
    {'h' | TAG_K,        &TextEditor::pending},
    {'i' | TAG_K,        &TextEditor::pending},
    {'j' | TAG_K,        &TextEditor::pending},
    {'k' | TAG_K,        &TextEditor::pending},
    {'l' | TAG_K,        &TextEditor::pending},
    {'m' | TAG_K,        &TextEditor::pending},
    {'n' | TAG_K,        &TextEditor::flip_column_mode},
    {'o' | TAG_K,        &TextEditor::pending},
    {'p' | TAG_K,        &TextEditor::pending},
    {'q' | TAG_K,        &TextEditor::quit_editor},
    {'r' | TAG_K,        &TextEditor::pending},
    {'s' | TAG_K,        &TextEditor::save_file},
    {'t' | TAG_K,        &TextEditor::pending},
    {'u' | TAG_K,        &TextEditor::pending},
    {'v' | TAG_K,        &TextEditor::pending},
    {'w' | TAG_K,        &TextEditor::write_file},
    {'x' | TAG_K,        &TextEditor::save_and_exit},
    {'y' | TAG_K,        &TextEditor::pending},
    {'z' | TAG_K,        &TextEditor::pending},
                         
//    {MY_KEY_UP,          &TextEditor::line_up},
//    {MY_KEY_DOWN,        &TextEditor::line_down}, 
//    {MY_KEY_LEFT,        &TextEditor::char_left}, 
//    {MY_KEY_RIGHT,       &TextEditor::char_right}  

};

// Now all the edit actions that are supported.

    void pending();

    void char_left();
    void char_right();
    void line_up();
    void line_down();

    void scroll_page_up();
    void scroll_page_down();
    void scroll_line_up();
    void scroll_line_down();

    void k_menu();
    void o_menu();
    void p_menu();
    void q_menu();

    void flip_column_mode();
    void quit_editor();
    void save_file();
    void write_file();
    void save_and_exit();

};

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
        }
    }
    else
    {   buffer.push_back(L"");
    }
    file.close();
}

void TextEditor::saveFile()
{   std::wofstream file(filename, std::wofstream::out);
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

void TextEditor::renderScreen()
{   int height, width;
    getmaxyx(stdscr, height, width);

    bool inSelect = false;
    for (int k = 0; k < height; k++)
    {   int i = firstVisibleLine + k;
        if (i >= buffer.size())
        {   inSelect = false;
            clearLine(i, width);
            continue;
        }

        move(k, 0);
        int col = 0;
        for (wchar_t c : buffer[i])
        {   if (columnMode)
            {   if (i >= startSelectLine &&
                    i <= endSelectLine &&
                    col >= startSelectCol &&
                    col <= endSelectCol) inSelect = true;
                else inSelect = false;
            }
            else
            {   if (i == startSelectLine && col == startSelectCol)
                    inSelect = true;
                if (i == endSelectLine && col == endSelectCol)
                    inSelect = false;
            }
            if (inSelect)
            {   //attron(A_REVERSE);
                attron(COLOR_PAIR(1));
            }
            addch8(UNICODE(c));
fprintf(log, "%x:", UNICODE(c));
            //attroff(A_REVERSE);
            attroff(COLOR_PAIR(1));
            col++;
        }
        while (col < width)
        {   addch(' ');
            col++;
        }
    }
    move(cy, cx);
    refresh();
}



void TextEditor::processKeypress(int32_t c, bool insert)
{
fprintf(log, "%x: %c\n", c, (c & 0x7f) | 0x40);
    auto f = charAction[c];
    if (f != nullptr) (this->*f)();
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
{   fprintf(log, "Pending op\n");
}

void TextEditor::displayMenu(const char* menu[])
{
}

void TextEditor::hideMenu()
{
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
{
}

void TextEditor::p_menu()
{
}

void TextEditor::q_menu()
{
}

void TextEditor::line_up()
{   if (cy > 0) cy--;
    makeCursorVisible();
}

void TextEditor::line_down()
{   if (cy < buffer.size() - 1) cy++;
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

void TextEditor::scroll_page_up()
{   int height, x;
    getmaxyx(stdscr, height, x);
    cy -= height-1;
    if (cy < 0) cy = 0;
    makeCursorVisible();
}

void TextEditor::scroll_page_down()
{   int height, x;
    getmaxyx(stdscr, height, x);
    cy += height-1;
    if (cy > buffer.size()) cy = buffer.size();
    makeCursorVisible();
}

void TextEditor::scroll_line_up()
{   int x, height;
    getmaxyx(stdscr, height, x);
    if (firstVisibleLine < buffer.size()-height-2) firstVisibleLine++;
}

void TextEditor::scroll_line_down()
{   if (firstVisibleLine > 0) firstVisibleLine--;
}

void TextEditor::flip_column_mode()
{   columnMode = !columnMode;
}

void TextEditor::write_file()
{   fprintf(log, "write file\n");
}

void TextEditor::save_file()
{   fprintf(log, "save file\n");
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

// end of wvs.cpp
