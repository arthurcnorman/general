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

// $Id:$
// $Id: 264f030f6ec9b5b05d66d22fc89c2eee3a932a42 $


#include <string>
#include <vector>
#include <unordered_map>

#include <cctype>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cwctype>

#include <ncurses.h>


extern FILE* logfile;

inline constexpr int CTRL_KEY(int32_t k)
{   return k & 0x1f;
}

inline constexpr int UNICODE(int32_t k)
{   return k & 0x00ffffff;
}

inline constexpr int TAGBITS(uint32_t k)
{   return k & 0xff000000;
}

inline const int32_t TAG_ALT = 0x02000000;
inline const int32_t TAG_FN  = 0x04000000;

inline const int32_t TAG_K   = 0x08000000;
inline const int32_t TAG_P   = 0x10000000;
inline const int32_t TAG_Q   = 0x10000000;

inline const int32_t ESC      = 0x1b;
inline const int32_t BAD_UTF8 = 0x25a0;   // BLACK SQUARE

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
            processKeypress(mygetch(), true);
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

    void unicodeConvert();
    void renderScreen();
    void makeCursorVisible();
    void displayMenu(const char* menu[]);
    void hideMenu();

    void clearLine(int y, int w);

    int mygetch8();
    int mygetch();

    void processKeypress(int32_t c, bool insert=true);

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

typedef struct _name_to_code
{   const char* name;
    std::int32_t code;
} name_to_code;

typedef struct _adobe_name_to_code
{   std::uint32_t code;
    const char* name;
    const char* long_name;
} adobe_name_to_code;


// end of wvs.h
