// keymap.cpp                                  Copyright 2026 Arthur Norman

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

TextEditor::funcMap charAction =
{
    {WEOF,               &TextEditor::quit_editor},

    {CTRL_KEY('a'),      &TextEditor::pending},
    {CTRL_KEY('b'),      &TextEditor::pending},
    {CTRL_KEY('c'),      &TextEditor::page_up},
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
    {CTRL_KEY('r'),      &TextEditor::page_down},
    {CTRL_KEY('s'),      &TextEditor::char_left},
    {CTRL_KEY('t'),      &TextEditor::pending},
    {CTRL_KEY('u'),      &TextEditor::pending},
    {CTRL_KEY('v'),      &TextEditor::pending},
    {CTRL_KEY('w'),      &TextEditor::page_line_down},
    {CTRL_KEY('x'),      &TextEditor::line_down},
    {CTRL_KEY('y'),      &TextEditor::pending},
    {CTRL_KEY('z'),      &TextEditor::page_line_up},
                         
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
                         
// The following is extracted for ncurses.h and is probably a comprehensive
// list of potential special keys.

    {KEY_CODE_YES,      &TextEditor::pending},        /* A wchar_t contains a key code */
    {KEY_MIN,           &TextEditor::pending},        /* Minimum curses key */
    {KEY_BREAK,         &TextEditor::pending},        /* Break key (unreliable) */
    {KEY_SRESET,        &TextEditor::pending},        /* Soft (partial) reset (unreliable) */
    {KEY_RESET,         &TextEditor::pending},        /* Reset or hard reset (unreliable) */

    {KEY_DOWN,          &TextEditor::line_down},      /* down-arrow key */
    {KEY_UP,            &TextEditor::line_up},        /* up-arrow key */
    {KEY_LEFT,          &TextEditor::char_left},      /* left-arrow key */
    {KEY_RIGHT,         &TextEditor::char_right},     /* right-arrow key */
    {KEY_HOME,          &TextEditor::pending},        /* home key */
    {KEY_BACKSPACE,     &TextEditor::pending},        /* backspace key */
    {KEY_F0,            &TextEditor::pending},        /* Function keys.  Space for 64 */
    {KEY_F(1),          &TextEditor::pending},
    {KEY_F(2),          &TextEditor::pending},
    {KEY_F(3),          &TextEditor::pending},
    {KEY_F(4),          &TextEditor::pending},
    {KEY_F(5),          &TextEditor::pending},
    {KEY_F(6),          &TextEditor::pending},
    {KEY_F(7),          &TextEditor::pending},
    {KEY_F(8),          &TextEditor::pending},
    {KEY_F(9),          &TextEditor::pending},
    {KEY_F(10),         &TextEditor::pending},
    {KEY_F(11),         &TextEditor::pending},
    {KEY_F(12),         &TextEditor::pending},
    {KEY_F(13),         &TextEditor::pending},
    {KEY_F(14),         &TextEditor::pending},
    {KEY_F(15),         &TextEditor::pending},
    {KEY_F(16),         &TextEditor::pending},
    {KEY_DL,            &TextEditor::pending},        /* delete-line key */
    {KEY_IL,            &TextEditor::pending},        /* insert-line key */
    {KEY_DC,            &TextEditor::pending},        /* delete-character key */
    {KEY_IC,            &TextEditor::pending},        /* insert-character key */
    {KEY_EIC,           &TextEditor::pending},        /* sent by rmir or smir in insert mode */
    {KEY_CLEAR,         &TextEditor::pending},        /* clear-screen or erase key */
    {KEY_EOS,           &TextEditor::pending},        /* clear-to-end-of-screen key */
    {KEY_EOL,           &TextEditor::pending},        /* clear-to-end-of-line key */
    {KEY_SF,            &TextEditor::page_up},        /* scroll-forward key */
    {KEY_SR,            &TextEditor::page_down},      /* scroll-backward key */
    {KEY_NPAGE,         &TextEditor::page_up},        /* next-page key */
    {KEY_PPAGE,         &TextEditor::page_down},      /* previous-page key */
    {KEY_STAB,          &TextEditor::pending},        /* set-tab key */
    {KEY_CTAB,          &TextEditor::pending},        /* clear-tab key */
    {KEY_CATAB,         &TextEditor::pending},        /* clear-all-tabs key */
    {KEY_ENTER,         &TextEditor::pending},        /* enter/send key */
    {KEY_PRINT,         &TextEditor::pending},        /* print key */
    {KEY_LL,            &TextEditor::pending},        /* lower-left key (home down) */
    {KEY_A1,            &TextEditor::pending},        /* upper left of keypad */
    {KEY_A3,            &TextEditor::pending},        /* upper right of keypad */
    {KEY_B2,            &TextEditor::pending},        /* center of keypad */
    {KEY_C1,            &TextEditor::pending},        /* lower left of keypad */
    {KEY_C3,            &TextEditor::pending},        /* lower right of keypad */
    {KEY_BTAB,          &TextEditor::pending},        /* back-tab key */
    {KEY_BEG,           &TextEditor::pending},        /* begin key */
    {KEY_CANCEL,        &TextEditor::pending},        /* cancel key */
    {KEY_CLOSE,         &TextEditor::pending},        /* close key */
    {KEY_COMMAND,       &TextEditor::pending},        /* command key */
    {KEY_COPY,          &TextEditor::pending},        /* copy key */
    {KEY_CREATE,        &TextEditor::pending},        /* create key */
    {KEY_END,           &TextEditor::pending},        /* end key */
    {KEY_EXIT,          &TextEditor::pending},        /* exit key */
    {KEY_FIND,          &TextEditor::pending},        /* find key */
    {KEY_HELP,          &TextEditor::pending},        /* help key */
    {KEY_MARK,          &TextEditor::pending},        /* mark key */
    {KEY_MESSAGE,       &TextEditor::pending},        /* message key */
    {KEY_MOVE,          &TextEditor::pending},        /* move key */
    {KEY_NEXT,          &TextEditor::pending},        /* next key */
    {KEY_OPEN,          &TextEditor::pending},        /* open key */
    {KEY_OPTIONS,       &TextEditor::pending},        /* options key */
    {KEY_PREVIOUS,      &TextEditor::pending},        /* previous key */
    {KEY_REDO,          &TextEditor::pending},        /* redo key */
    {KEY_REFERENCE,     &TextEditor::pending},        /* reference key */
    {KEY_REFRESH,       &TextEditor::pending},        /* refresh key */
    {KEY_REPLACE,       &TextEditor::pending},        /* replace key */
    {KEY_RESTART,       &TextEditor::pending},        /* restart key */
    {KEY_RESUME,        &TextEditor::pending},        /* resume key */
    {KEY_SAVE,          &TextEditor::pending},        /* save key */
    {KEY_SBEG,          &TextEditor::pending},        /* shifted begin key */
    {KEY_SCANCEL,       &TextEditor::pending},        /* shifted cancel key */
    {KEY_SCOMMAND,      &TextEditor::pending},        /* shifted command key */
    {KEY_SCOPY,         &TextEditor::pending},        /* shifted copy key */
    {KEY_SCREATE,       &TextEditor::pending},        /* shifted create key */
    {KEY_SDC,           &TextEditor::pending},        /* shifted delete-character key */
    {KEY_SDL,           &TextEditor::pending},        /* shifted delete-line key */
    {KEY_SELECT,        &TextEditor::pending},        /* select key */
    {KEY_SEND,          &TextEditor::pending},        /* shifted end key */
    {KEY_SEOL,          &TextEditor::pending},        /* shifted clear-to-end-of-line key */
    {KEY_SEXIT,         &TextEditor::pending},        /* shifted exit key */
    {KEY_SFIND,         &TextEditor::pending},        /* shifted find key */
    {KEY_SHELP,         &TextEditor::pending},        /* shifted help key */
    {KEY_SHOME,         &TextEditor::pending},        /* shifted home key */
    {KEY_SIC,           &TextEditor::pending},        /* shifted insert-character key */
    {KEY_SLEFT,         &TextEditor::pending},        /* shifted left-arrow key */
    {KEY_SMESSAGE,      &TextEditor::pending},        /* shifted message key */
    {KEY_SMOVE,         &TextEditor::pending},        /* Shfted move key */
    {KEY_SNEXT,         &TextEditor::pending},        /* shifted next key */
    {KEY_SOPTIONS,      &TextEditor::pending},        /* shifted options key */
    {KEY_SPREVIOUS,     &TextEditor::pending},        /* shifted previous key */
    {KEY_SPRINT,        &TextEditor::pending},        /* shifted print key */
    {KEY_SREDO,         &TextEditor::pending},        /* shifted redo key */
    {KEY_SREPLACE,      &TextEditor::pending},        /* shifted replace key */
    {KEY_SRIGHT,        &TextEditor::pending},        /* shifted right-arrow key */
    {KEY_SRSUME,        &TextEditor::pending},        /* shifted resume key */
    {KEY_SSAVE,         &TextEditor::pending},        /* shifted save key */
    {KEY_SSUSPEND,      &TextEditor::pending},        /* shifted suspend key */
    {KEY_SUNDO,         &TextEditor::pending},        /* shifted undo key */
    {KEY_SUSPEND,       &TextEditor::pending},        /* suspend key */
    {KEY_UNDO,          &TextEditor::pending},        /* undo key */
    {KEY_MOUSE,         &TextEditor::pending},        /* Mouse event has occurred */

    {KEY_RESIZE,        &TextEditor::pending},        /* Terminal resize event */
};

// end of keymap.cpp
