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

TextEditor::funcMap TextEditor::keymap =
{
    {WEOF,               &TextEditor::quit_editor},

    {CTRL_KEY('a'),      &TextEditor::word_left},
    {CTRL_KEY('b'),      &TextEditor::pending},        // justify if in wrap
    {CTRL_KEY('c'),      &TextEditor::scroll_page_up},
    {CTRL_KEY('d'),      &TextEditor::char_right},
    {CTRL_KEY('e'),      &TextEditor::line_up},
    {CTRL_KEY('f'),      &TextEditor::word_right},
    {CTRL_KEY('g'),      &TextEditor::delete_char},
    {CTRL_KEY('h'),      &TextEditor::undelete},
    {CTRL_KEY('i'),      &TextEditor::tab},
    {CTRL_KEY('j'),      &TextEditor::j_menu},
    {CTRL_KEY('k'),      &TextEditor::k_menu},
    {CTRL_KEY('l'),      &TextEditor::repeat_last_find},
    {CTRL_KEY('m'),      &TextEditor::pending},
    {CTRL_KEY('n'),      &TextEditor::insert_return},
    {CTRL_KEY('o'),      &TextEditor::o_menu},
    {CTRL_KEY('p'),      &TextEditor::p_menu},
    {CTRL_KEY('q'),      &TextEditor::q_menu},
    {CTRL_KEY('r'),      &TextEditor::scroll_page_down},
    {CTRL_KEY('s'),      &TextEditor::char_left},
    {CTRL_KEY('t'),      &TextEditor::delete_word},
    {CTRL_KEY('u'),      &TextEditor::stop_command},
    {CTRL_KEY('v'),      &TextEditor::overwrite_mode},
    {CTRL_KEY('w'),      &TextEditor::scroll_line_down},
    {CTRL_KEY('x'),      &TextEditor::line_down},
    {CTRL_KEY('y'),      &TextEditor::pending},
    {CTRL_KEY('z'),      &TextEditor::scroll_line_up},
    {0x7f,               &TextEditor::backspace},
                         
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
    {'x' | TAG_ALT,      &TextEditor::unicodeConvert},
    {'y' | TAG_ALT,      &TextEditor::pending},
    {'z' | TAG_ALT,      &TextEditor::pending},
                         
    {'0' | TAG_K,        &TextEditor::set_mark},
    {'1' | TAG_K,        &TextEditor::set_mark},
    {'2' | TAG_K,        &TextEditor::set_mark},
    {'3' | TAG_K,        &TextEditor::set_mark},
    {'4' | TAG_K,        &TextEditor::set_mark},
    {'5' | TAG_K,        &TextEditor::set_mark},
    {'6' | TAG_K,        &TextEditor::set_mark},
    {'7' | TAG_K,        &TextEditor::set_mark},
    {'8' | TAG_K,        &TextEditor::set_mark},
    {'9' | TAG_K,        &TextEditor::set_mark},

    {'a' | TAG_K,        &TextEditor::pending},
    {'b' | TAG_K,        &TextEditor::set_start_block},
    {'c' | TAG_K,        &TextEditor::copy_block},
    {'d' | TAG_K,        &TextEditor::pending},
    {'e' | TAG_K,        &TextEditor::pending},
    {'f' | TAG_K,        &TextEditor::pending},
    {'g' | TAG_K,        &TextEditor::pending},
    {'h' | TAG_K,        &TextEditor::pending},
    {'i' | TAG_K,        &TextEditor::pending},
    {'j' | TAG_K,        &TextEditor::pending},
    {'k' | TAG_K,        &TextEditor::set_end_block},
    {'l' | TAG_K,        &TextEditor::pending},
    {'m' | TAG_K,        &TextEditor::pending},         // obey metafile
    {'n' | TAG_K,        &TextEditor::flip_column_mode},
    {'o' | TAG_K,        &TextEditor::pending},
    {'p' | TAG_K,        &TextEditor::pending},
    {'q' | TAG_K,        &TextEditor::quit_editor},
    {'r' | TAG_K,        &TextEditor::insert_from_file},
    {'s' | TAG_K,        &TextEditor::save_file},
    {'t' | TAG_K,        &TextEditor::pending},
    {'u' | TAG_K,        &TextEditor::pending},
    {'v' | TAG_K,        &TextEditor::move_block},
    {'w' | TAG_K,        &TextEditor::write_file},
    {'x' | TAG_K,        &TextEditor::save_and_exit},
    {'y' | TAG_K,        &TextEditor::delete_block},
    {'z' | TAG_K,        &TextEditor::pending},


    {'a' | TAG_J,        &TextEditor::pending},
    {'b' | TAG_J,        &TextEditor::pending},
    {'c' | TAG_J,        &TextEditor::pending},
    {'d' | TAG_J,        &TextEditor::pending},
    {'e' | TAG_J,        &TextEditor::pending},
    {'f' | TAG_J,        &TextEditor::pending},
    {'g' | TAG_J,        &TextEditor::pending},
    {'h' | TAG_J,        &TextEditor::pending},   // set help level
    {'i' | TAG_J,        &TextEditor::pending},
    {'j' | TAG_J,        &TextEditor::pending},
    {'k' | TAG_J,        &TextEditor::pending},
    {'l' | TAG_J,        &TextEditor::pending},
    {'m' | TAG_J,        &TextEditor::pending},
    {'n' | TAG_J,        &TextEditor::pending},
    {'o' | TAG_J,        &TextEditor::pending},
    {'p' | TAG_J,        &TextEditor::pending},
    {'q' | TAG_J,        &TextEditor::pending},
    {'r' | TAG_J,        &TextEditor::pending},
    {'s' | TAG_J,        &TextEditor::pending},
    {'t' | TAG_J,        &TextEditor::pending},
    {'u' | TAG_J,        &TextEditor::pending},
    {'v' | TAG_J,        &TextEditor::pending},
    {'w' | TAG_J,        &TextEditor::pending},
    {'x' | TAG_J,        &TextEditor::pending},
    {'y' | TAG_J,        &TextEditor::pending},
    {'z' | TAG_J,        &TextEditor::pending},
                         
    {'a' | TAG_O,        &TextEditor::pending},
    {'b' | TAG_O,        &TextEditor::pending},
    {'c' | TAG_O,        &TextEditor::pending},   // centre on line
    {'d' | TAG_O,        &TextEditor::pending},
    {'e' | TAG_O,        &TextEditor::pending},
    {'f' | TAG_O,        &TextEditor::pending},   // set tabs from line of text
    {'g' | TAG_O,        &TextEditor::pending},
    {'h' | TAG_O,        &TextEditor::pending},
    {'i' | TAG_O,        &TextEditor::pending},   // set tab position
    {'j' | TAG_O,        &TextEditor::pending},
    {'k' | TAG_O,        &TextEditor::pending},
    {'l' | TAG_O,        &TextEditor::pending},   // set left margin
    {'m' | TAG_O,        &TextEditor::pending},
    {'n' | TAG_O,        &TextEditor::pending},   // clear document
    {'o' | TAG_O,        &TextEditor::pending},
    {'p' | TAG_O,        &TextEditor::pending},
    {'q' | TAG_O,        &TextEditor::pending},
    {'r' | TAG_O,        &TextEditor::pending},   // set right margin
    {'s' | TAG_O,        &TextEditor::redraw_screen},
    {'t' | TAG_O,        &TextEditor::pending},   // ruler line
    {'u' | TAG_O,        &TextEditor::pending},
    {'v' | TAG_O,        &TextEditor::pending},   // vari-tabs
    {'w' | TAG_O,        &TextEditor::pending},   // word-wrap
    {'x' | TAG_O,        &TextEditor::pending},   // release margins
    {'y' | TAG_O,        &TextEditor::pending},
    {'z' | TAG_O,        &TextEditor::pending},
                         
    {'a' | TAG_P,        &TextEditor::pending},
    {'b' | TAG_P,        &TextEditor::pending},
    {'c' | TAG_P,        &TextEditor::pending},
    {'d' | TAG_P,        &TextEditor::pending},
    {'e' | TAG_P,        &TextEditor::pending},
    {'f' | TAG_P,        &TextEditor::pending},
    {'g' | TAG_P,        &TextEditor::pending},
    {'h' | TAG_P,        &TextEditor::pending},
    {'i' | TAG_P,        &TextEditor::pending},   // insert a literal tab
    {'j' | TAG_P,        &TextEditor::pending},
    {'k' | TAG_P,        &TextEditor::pending},
    {'l' | TAG_P,        &TextEditor::pending},
    {'m' | TAG_P,        &TextEditor::pending},
    {'n' | TAG_P,        &TextEditor::pending},   // insert a literal newline1;5r
    {'o' | TAG_P,        &TextEditor::pending},
    {'p' | TAG_P,        &TextEditor::pending},
    {'q' | TAG_P,        &TextEditor::pending},
    {'r' | TAG_P,        &TextEditor::pending},
    {'s' | TAG_P,        &TextEditor::pending},
    {'t' | TAG_P,        &TextEditor::pending},
    {'u' | TAG_P,        &TextEditor::pending},
    {'v' | TAG_P,        &TextEditor::pending},
    {'w' | TAG_P,        &TextEditor::pending},
    {'x' | TAG_P,        &TextEditor::pending},
    {'y' | TAG_P,        &TextEditor::pending},
    {'z' | TAG_P,        &TextEditor::pending},
                         
    {'0' | TAG_Q,        &TextEditor::goto_mark},
    {'1' | TAG_Q,        &TextEditor::goto_mark},
    {'2' | TAG_Q,        &TextEditor::goto_mark},
    {'3' | TAG_Q,        &TextEditor::goto_mark},
    {'4' | TAG_Q,        &TextEditor::goto_mark},
    {'5' | TAG_Q,        &TextEditor::goto_mark},
    {'6' | TAG_Q,        &TextEditor::goto_mark},
    {'7' | TAG_Q,        &TextEditor::goto_mark},
    {'8' | TAG_Q,        &TextEditor::goto_mark},
    {'9' | TAG_Q,        &TextEditor::goto_mark},

    {'a' | TAG_Q,        &TextEditor::find_and_replace},
    {'b' | TAG_Q,        &TextEditor::goto_start_block},
    {'c' | TAG_Q,        &TextEditor::pending},
    {'d' | TAG_Q,        &TextEditor::pending},
    {'e' | TAG_Q,        &TextEditor::pending},
    {'f' | TAG_Q,        &TextEditor::find},
    {'g' | TAG_Q,        &TextEditor::pending},
    {'h' | TAG_Q,        &TextEditor::pending},
    {'i' | TAG_Q,        &TextEditor::pending},   // variable tab
    {'j' | TAG_Q,        &TextEditor::pending},
    {'k' | TAG_Q,        &TextEditor::goto_end_block},
    {'l' | TAG_Q,        &TextEditor::pending},
    {'m' | TAG_Q,        &TextEditor::pending},
    {'n' | TAG_Q,        &TextEditor::pending},
    {'o' | TAG_Q,        &TextEditor::pending},
    {'p' | TAG_Q,        &TextEditor::pending},
    {'q' | TAG_Q,        &TextEditor::pending},   // repeat command
    {'r' | TAG_Q,        &TextEditor::pending},
    {'s' | TAG_Q,        &TextEditor::pending},
    {'t' | TAG_Q,        &TextEditor::pending},
    {'u' | TAG_Q,        &TextEditor::pending},
    {'v' | TAG_Q,        &TextEditor::pending},
    {'w' | TAG_Q,        &TextEditor::pending},
    {'x' | TAG_Q,        &TextEditor::pending},
    {'y' | TAG_Q,        &TextEditor::pending},
    {'z' | TAG_Q,        &TextEditor::pending},
                         


// The following is extracted for ncurses.h and is probably a comprehensive
// list of potential special keys. Many will not be available on your keyboard!

    {KEY_CODE_YES | TAG_FN,      &TextEditor::pending},        /* A wchar_t contains a key code */
    {KEY_MIN | TAG_FN,           &TextEditor::pending},        /* Minimum curses key */
    {KEY_BREAK | TAG_FN,         &TextEditor::pending},        /* Break key (unreliable) */
    {KEY_SRESET | TAG_FN,        &TextEditor::pending},        /* Soft (partial) reset (unreliable) */
    {KEY_RESET | TAG_FN,         &TextEditor::pending},        /* Reset or hard reset (unreliable) */

    {KEY_DOWN | TAG_FN,          &TextEditor::line_down},      /* down-arrow key */
    {KEY_UP | TAG_FN,            &TextEditor::line_up},        /* up-arrow key */
    {KEY_LEFT | TAG_FN,          &TextEditor::char_left},      /* left-arrow key */
    {KEY_RIGHT | TAG_FN,         &TextEditor::char_right},     /* right-arrow key */
    {KEY_HOME | TAG_FN,          &TextEditor::pending},        /* home key */
    {KEY_BACKSPACE | TAG_FN,     &TextEditor::backspace},      /* backspace key */
    {KEY_F0 | TAG_FN,            &TextEditor::pending},        /* Function keys.  Space for 64 */
    {KEY_F(1) | TAG_FN,          &TextEditor::pending},
    {KEY_F(2) | TAG_FN,          &TextEditor::pending},
    {KEY_F(3) | TAG_FN,          &TextEditor::pending},
    {KEY_F(4) | TAG_FN,          &TextEditor::pending},
    {KEY_F(5) | TAG_FN,          &TextEditor::pending},
    {KEY_F(6) | TAG_FN,          &TextEditor::pending},
    {KEY_F(7) | TAG_FN,          &TextEditor::pending},
    {KEY_F(8) | TAG_FN,          &TextEditor::pending},
    {KEY_F(9) | TAG_FN,          &TextEditor::pending},
    {KEY_F(10) | TAG_FN,         &TextEditor::pending},
    {KEY_F(11) | TAG_FN,         &TextEditor::pending},
    {KEY_F(12) | TAG_FN,         &TextEditor::pending},
    {KEY_F(13) | TAG_FN,         &TextEditor::pending},
    {KEY_F(14) | TAG_FN,         &TextEditor::pending},
    {KEY_F(15) | TAG_FN,         &TextEditor::pending},
    {KEY_F(16) | TAG_FN,         &TextEditor::pending},
    {KEY_DL | TAG_FN,            &TextEditor::pending},        /* delete-line key */
    {KEY_IL | TAG_FN,            &TextEditor::pending},        /* insert-line key */
    {KEY_DC | TAG_FN,            &TextEditor::delete_char},    /* delete-character key */
    {KEY_IC | TAG_FN,            &TextEditor::pending},        /* insert-character key */
    {KEY_EIC | TAG_FN,           &TextEditor::pending},        /* sent by rmir or smir in insert mode */
    {KEY_CLEAR | TAG_FN,         &TextEditor::pending},        /* clear-screen or erase key */
    {KEY_EOS | TAG_FN,           &TextEditor::pending},        /* clear-to-end-of-screen key */
    {KEY_EOL | TAG_FN,           &TextEditor::pending},        /* clear-to-end-of-line key */
    {KEY_SF | TAG_FN,            &TextEditor::page_up},        /* scroll-forward key */
    {KEY_SR | TAG_FN,            &TextEditor::page_down},      /* scroll-backward key */
    {KEY_NPAGE | TAG_FN,         &TextEditor::page_up},        /* next-page key */
    {KEY_PPAGE | TAG_FN,         &TextEditor::page_down},      /* previous-page key */
    {KEY_STAB | TAG_FN,          &TextEditor::pending},        /* set-tab key */
    {KEY_CTAB | TAG_FN,          &TextEditor::pending},        /* clear-tab key */
    {KEY_CATAB | TAG_FN,         &TextEditor::pending},        /* clear-all-tabs key */
    {KEY_ENTER | TAG_FN,         &TextEditor::insert_newline}, /* enter/send key */
    {KEY_PRINT | TAG_FN,         &TextEditor::pending},        /* print key */
    {KEY_LL | TAG_FN,            &TextEditor::pending},        /* lower-left key (home down) */
    {KEY_A1 | TAG_FN,            &TextEditor::pending},        /* upper left of keypad */
    {KEY_A3 | TAG_FN,            &TextEditor::pending},        /* upper right of keypad */
    {KEY_B2 | TAG_FN,            &TextEditor::pending},        /* center of keypad */
    {KEY_C1 | TAG_FN,            &TextEditor::pending},        /* lower left of keypad */
    {KEY_C3 | TAG_FN,            &TextEditor::pending},        /* lower right of keypad */
    {KEY_BTAB | TAG_FN,          &TextEditor::pending},        /* back-tab key */
    {KEY_BEG | TAG_FN,           &TextEditor::pending},        /* begin key */
    {KEY_CANCEL | TAG_FN,        &TextEditor::pending},        /* cancel key */
    {KEY_CLOSE | TAG_FN,         &TextEditor::pending},        /* close key */
    {KEY_COMMAND | TAG_FN,       &TextEditor::pending},        /* command key */
    {KEY_COPY | TAG_FN,          &TextEditor::pending},        /* copy key */
    {KEY_CREATE | TAG_FN,        &TextEditor::pending},        /* create key */
    {KEY_END | TAG_FN,           &TextEditor::pending},        /* end key */
    {KEY_EXIT | TAG_FN,          &TextEditor::pending},        /* exit key */
    {KEY_FIND | TAG_FN,          &TextEditor::pending},        /* find key */
    {KEY_HELP | TAG_FN,          &TextEditor::pending},        /* help key */
    {KEY_MARK | TAG_FN,          &TextEditor::pending},        /* mark key */
    {KEY_MESSAGE | TAG_FN,       &TextEditor::pending},        /* message key */
    {KEY_MOVE | TAG_FN,          &TextEditor::pending},        /* move key */
    {KEY_NEXT | TAG_FN,          &TextEditor::pending},        /* next key */
    {KEY_OPEN | TAG_FN,          &TextEditor::pending},        /* open key */
    {KEY_OPTIONS | TAG_FN,       &TextEditor::pending},        /* options key */
    {KEY_PREVIOUS | TAG_FN,      &TextEditor::pending},        /* previous key */
    {KEY_REDO | TAG_FN,          &TextEditor::pending},        /* redo key */
    {KEY_REFERENCE | TAG_FN,     &TextEditor::pending},        /* reference key */
    {KEY_REFRESH | TAG_FN,       &TextEditor::pending},        /* refresh key */
    {KEY_REPLACE | TAG_FN,       &TextEditor::pending},        /* replace key */
    {KEY_RESTART | TAG_FN,       &TextEditor::pending},        /* restart key */
    {KEY_RESUME | TAG_FN,        &TextEditor::pending},        /* resume key */
    {KEY_SAVE | TAG_FN,          &TextEditor::pending},        /* save key */
    {KEY_SBEG | TAG_FN,          &TextEditor::pending},        /* shifted begin key */
    {KEY_SCANCEL | TAG_FN,       &TextEditor::pending},        /* shifted cancel key */
    {KEY_SCOMMAND | TAG_FN,      &TextEditor::pending},        /* shifted command key */
    {KEY_SCOPY | TAG_FN,         &TextEditor::pending},        /* shifted copy key */
    {KEY_SCREATE | TAG_FN,       &TextEditor::pending},        /* shifted create key */
    {KEY_SDC | TAG_FN,           &TextEditor::pending},        /* shifted delete-character key */
    {KEY_SDL | TAG_FN,           &TextEditor::pending},        /* shifted delete-line key */
    {KEY_SELECT | TAG_FN,        &TextEditor::pending},        /* select key */
    {KEY_SEND | TAG_FN,          &TextEditor::pending},        /* shifted end key */
    {KEY_SEOL | TAG_FN,          &TextEditor::pending},        /* shifted clear-to-end-of-line key */
    {KEY_SEXIT | TAG_FN,         &TextEditor::pending},        /* shifted exit key */
    {KEY_SFIND | TAG_FN,         &TextEditor::pending},        /* shifted find key */
    {KEY_SHELP | TAG_FN,         &TextEditor::pending},        /* shifted help key */
    {KEY_SHOME | TAG_FN,         &TextEditor::pending},        /* shifted home key */
    {KEY_SIC | TAG_FN,           &TextEditor::pending},        /* shifted insert-character key */
    {KEY_SLEFT | TAG_FN,         &TextEditor::pending},        /* shifted left-arrow key */
    {KEY_SMESSAGE | TAG_FN,      &TextEditor::pending},        /* shifted message key */
    {KEY_SMOVE | TAG_FN,         &TextEditor::pending},        /* Shfted move key */
    {KEY_SNEXT | TAG_FN,         &TextEditor::pending},        /* shifted next key */
    {KEY_SOPTIONS | TAG_FN,      &TextEditor::pending},        /* shifted options key */
    {KEY_SPREVIOUS | TAG_FN,     &TextEditor::pending},        /* shifted previous key */
    {KEY_SPRINT | TAG_FN,        &TextEditor::pending},        /* shifted print key */
    {KEY_SREDO | TAG_FN,         &TextEditor::pending},        /* shifted redo key */
    {KEY_SREPLACE | TAG_FN,      &TextEditor::pending},        /* shifted replace key */
    {KEY_SRIGHT | TAG_FN,        &TextEditor::pending},        /* shifted right-arrow key */
    {KEY_SRSUME | TAG_FN,        &TextEditor::pending},        /* shifted resume key */
    {KEY_SSAVE | TAG_FN,         &TextEditor::pending},        /* shifted save key */
    {KEY_SSUSPEND | TAG_FN,      &TextEditor::pending},        /* shifted suspend key */
    {KEY_SUNDO | TAG_FN,         &TextEditor::pending},        /* shifted undo key */
    {KEY_SUSPEND | TAG_FN,       &TextEditor::pending},        /* suspend key */
    {KEY_UNDO | TAG_FN,          &TextEditor::pending},        /* undo key */
    {KEY_MOUSE | TAG_FN,         &TextEditor::pending},        /* Mouse event has occurred */

    {KEY_RESIZE | TAG_FN,        &TextEditor::pending},        /* Terminal resize event */
};

// end of keymap.cpp
