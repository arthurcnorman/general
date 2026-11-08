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

#include "r4.h"

funcMap R4::keymap =
{
    {WEOF,               &R4::quit_editor},

    {CTRL_KEY('a'),      &R4::word_left},
    {CTRL_KEY('b'),      &R4::pending},        // justify if in wrap
    {CTRL_KEY('c'),      &R4::scroll_page_up},
    {CTRL_KEY('d'),      &R4::char_right},
    {CTRL_KEY('e'),      &R4::line_up},
    {CTRL_KEY('f'),      &R4::word_right},
    {CTRL_KEY('g'),      &R4::delete_char},
    {CTRL_KEY('h'),      &R4::undelete},
    {CTRL_KEY('i'),      &R4::tab},
// Here I have a potential mess. ^J is "linefeed" and the enter key
// probably send the same. I wanted curses to send KEY_ENTER for that.
// But MAYBE it does not? So ALT-j is for the help menu.
    {CTRL_KEY('j'),      &R4::insert_newline},
    {CTRL_KEY('k'),      &R4::k_menu},
    {CTRL_KEY('l'),      &R4::repeat_last_find},
    {CTRL_KEY('m'),      &R4::pending},
    {CTRL_KEY('n'),      &R4::insert_return},
    {CTRL_KEY('o'),      &R4::o_menu},
    {CTRL_KEY('p'),      &R4::p_menu},
    {CTRL_KEY('q'),      &R4::q_menu},
    {CTRL_KEY('r'),      &R4::scroll_page_down},
    {CTRL_KEY('s'),      &R4::char_left},
    {CTRL_KEY('t'),      &R4::delete_word},
    {CTRL_KEY('u'),      &R4::stop_command},
    {CTRL_KEY('v'),      &R4::flip_overwrite_mode},
    {CTRL_KEY('w'),      &R4::scroll_down},
    {CTRL_KEY('x'),      &R4::line_down},
    {CTRL_KEY('y'),      &R4::pending},
    {CTRL_KEY('z'),      &R4::scroll_up},
    {0x7f,               &R4::backspace},

    {'a' | TAG_ALT,      &R4::pending},
    {'b' | TAG_ALT,      &R4::pending},
    {'c' | TAG_ALT,      &R4::pending},
    {'d' | TAG_ALT,      &R4::pending},
    {'e' | TAG_ALT,      &R4::pending},
    {'f' | TAG_ALT,      &R4::pending},
    {'g' | TAG_ALT,      &R4::pending},
    {'h' | TAG_ALT,      &R4::pending},
    {'i' | TAG_ALT,      &R4::pending},
    {'j' | TAG_ALT,      &R4::j_menu},
    {'k' | TAG_ALT,      &R4::pending},
    {'l' | TAG_ALT,      &R4::pending},
    {'m' | TAG_ALT,      &R4::pending},
    {'n' | TAG_ALT,      &R4::pending},
    {'o' | TAG_ALT,      &R4::pending},
    {'p' | TAG_ALT,      &R4::pending},
    {'q' | TAG_ALT,      &R4::pending},
    {'r' | TAG_ALT,      &R4::pending},
    {'s' | TAG_ALT,      &R4::pending},
    {'t' | TAG_ALT,      &R4::pending},
    {'u' | TAG_ALT,      &R4::pending},
    {'v' | TAG_ALT,      &R4::pending},
    {'w' | TAG_ALT,      &R4::pending},
    {'x' | TAG_ALT,      &R4::unicodeConvert},
    {'y' | TAG_ALT,      &R4::pending},
    {'z' | TAG_ALT,      &R4::pending},

    {'a' | TAG_J,        &R4::pending},
    {'b' | TAG_J,        &R4::pending},
    {'c' | TAG_J,        &R4::pending},
    {'d' | TAG_J,        &R4::pending},
    {'e' | TAG_J,        &R4::pending},
    {'f' | TAG_J,        &R4::pending},
    {'g' | TAG_J,        &R4::pending},
    {'h' | TAG_J,        &R4::pending},   // set help level
    {'i' | TAG_J,        &R4::pending},
    {'j' | TAG_J,        &R4::pending},
    {'k' | TAG_J,        &R4::pending},
    {'l' | TAG_J,        &R4::pending},
    {'m' | TAG_J,        &R4::pending},
    {'n' | TAG_J,        &R4::pending},
    {'o' | TAG_J,        &R4::pending},
    {'p' | TAG_J,        &R4::pending},
    {'q' | TAG_J,        &R4::pending},
    {'r' | TAG_J,        &R4::pending},
    {'s' | TAG_J,        &R4::pending},
    {'t' | TAG_J,        &R4::pending},
    {'u' | TAG_J,        &R4::pending},
    {'v' | TAG_J,        &R4::pending},
    {'w' | TAG_J,        &R4::pending},
    {'x' | TAG_J,        &R4::pending},
    {'y' | TAG_J,        &R4::pending},
    {'z' | TAG_J,        &R4::pending},

    {'0' | TAG_K,        &R4::set_mark},
    {'1' | TAG_K,        &R4::set_mark},
    {'2' | TAG_K,        &R4::set_mark},
    {'3' | TAG_K,        &R4::set_mark},
    {'4' | TAG_K,        &R4::set_mark},
    {'5' | TAG_K,        &R4::set_mark},
    {'6' | TAG_K,        &R4::set_mark},
    {'7' | TAG_K,        &R4::set_mark},
    {'8' | TAG_K,        &R4::set_mark},
    {'9' | TAG_K,        &R4::set_mark},

    {'a' | TAG_K,        &R4::pending},
    {'b' | TAG_K,        &R4::set_start_block},
    {'c' | TAG_K,        &R4::copy_block},
    {'d' | TAG_K,        &R4::pending},
    {'e' | TAG_K,        &R4::pending},
    {'f' | TAG_K,        &R4::pending},
    {'g' | TAG_K,        &R4::pending},
    {'h' | TAG_K,        &R4::pending},
    {'i' | TAG_K,        &R4::pending},
    {'j' | TAG_K,        &R4::pending},
    {'k' | TAG_K,        &R4::set_end_block},
    {'l' | TAG_K,        &R4::pending},
    {'m' | TAG_K,        &R4::pending},         // obey metafile
    {'n' | TAG_K,        &R4::flip_column_mode},
    {'o' | TAG_K,        &R4::pending},
    {'p' | TAG_K,        &R4::pending},
    {'q' | TAG_K,        &R4::quit_editor},
    {'r' | TAG_K,        &R4::insert_from_file},
    {'s' | TAG_K,        &R4::save_file},
    {'t' | TAG_K,        &R4::pending},
    {'u' | TAG_K,        &R4::pending},
    {'v' | TAG_K,        &R4::move_block},
    {'w' | TAG_K,        &R4::write_file},
    {'x' | TAG_K,        &R4::save_and_exit},
    {'y' | TAG_K,        &R4::delete_block},
    {'z' | TAG_K,        &R4::pending},

    {'a' | TAG_O,        &R4::pending},
    {'b' | TAG_O,        &R4::pending},
    {'c' | TAG_O,        &R4::pending},   // centre on line
    {'d' | TAG_O,        &R4::pending},
    {'e' | TAG_O,        &R4::pending},
    {'f' | TAG_O,        &R4::pending},   // set tabs from line of text
    {'g' | TAG_O,        &R4::pending},
    {'h' | TAG_O,        &R4::pending},
    {'i' | TAG_O,        &R4::pending},   // set tab position
    {'j' | TAG_O,        &R4::pending},
    {'k' | TAG_O,        &R4::pending},
    {'l' | TAG_O,        &R4::pending},   // set left margin
    {'m' | TAG_O,        &R4::pending},
    {'n' | TAG_O,        &R4::pending},   // clear document
    {'o' | TAG_O,        &R4::pending},
    {'p' | TAG_O,        &R4::pending},
    {'q' | TAG_O,        &R4::pending},
    {'r' | TAG_O,        &R4::pending},   // set right margin
    {'s' | TAG_O,        &R4::redraw_screen},
    {'t' | TAG_O,        &R4::pending},   // ruler line
    {'u' | TAG_O,        &R4::pending},
    {'v' | TAG_O,        &R4::pending},   // vari-tabs
    {'w' | TAG_O,        &R4::pending},   // word-wrap
    {'x' | TAG_O,        &R4::pending},   // release margins
    {'y' | TAG_O,        &R4::pending},
    {'z' | TAG_O,        &R4::pending},

    {'a' | TAG_P,        &R4::pending},
    {'b' | TAG_P,        &R4::pending},
    {'c' | TAG_P,        &R4::pending},
    {'d' | TAG_P,        &R4::pending},
    {'e' | TAG_P,        &R4::pending},
    {'f' | TAG_P,        &R4::pending},
    {'g' | TAG_P,        &R4::pending},
    {'h' | TAG_P,        &R4::pending},
    {'i' | TAG_P,        &R4::pending},   // insert a literal tab
    {'j' | TAG_P,        &R4::pending},
    {'k' | TAG_P,        &R4::pending},
    {'l' | TAG_P,        &R4::pending},
    {'m' | TAG_P,        &R4::pending},
    {'n' | TAG_P,        &R4::pending},   // insert a literal newline1;5r
    {'o' | TAG_P,        &R4::pending},
    {'p' | TAG_P,        &R4::pending},
    {'q' | TAG_P,        &R4::pending},
    {'r' | TAG_P,        &R4::pending},
    {'s' | TAG_P,        &R4::pending},
    {'t' | TAG_P,        &R4::pending},
    {'u' | TAG_P,        &R4::pending},
    {'v' | TAG_P,        &R4::pending},
    {'w' | TAG_P,        &R4::pending},
    {'x' | TAG_P,        &R4::pending},
    {'y' | TAG_P,        &R4::pending},
    {'z' | TAG_P,        &R4::pending},

    {'0' | TAG_Q,        &R4::goto_mark},
    {'1' | TAG_Q,        &R4::goto_mark},
    {'2' | TAG_Q,        &R4::goto_mark},
    {'3' | TAG_Q,        &R4::goto_mark},
    {'4' | TAG_Q,        &R4::goto_mark},
    {'5' | TAG_Q,        &R4::goto_mark},
    {'6' | TAG_Q,        &R4::goto_mark},
    {'7' | TAG_Q,        &R4::goto_mark},
    {'8' | TAG_Q,        &R4::goto_mark},
    {'9' | TAG_Q,        &R4::goto_mark},

    {'a' | TAG_Q,        &R4::find_and_replace},
    {'b' | TAG_Q,        &R4::goto_start_block},
    {'c' | TAG_Q,        &R4::end_of_text},
    {'d' | TAG_Q,        &R4::end_of_line},
    {'e' | TAG_Q,        &R4::top_of_screen},
    {'f' | TAG_Q,        &R4::find},
    {'g' | TAG_Q,        &R4::pending},
    {'h' | TAG_Q,        &R4::pending},
    {'i' | TAG_Q,        &R4::pending},   // variable tab
    {'j' | TAG_Q,        &R4::pending},
    {'k' | TAG_Q,        &R4::goto_end_block},
    {'l' | TAG_Q,        &R4::goto_line},
    {'m' | TAG_Q,        &R4::pending},
    {'n' | TAG_Q,        &R4::pending},
    {'o' | TAG_Q,        &R4::pending},
    {'p' | TAG_Q,        &R4::pending},
    {'q' | TAG_Q,        &R4::pending},   // repeat command
    {'r' | TAG_Q,        &R4::start_of_text},
    {'s' | TAG_Q,        &R4::start_of_line},
    {'t' | TAG_Q,        &R4::pending},
    {'u' | TAG_Q,        &R4::pending},
    {'v' | TAG_Q,        &R4::last_find_or_block},
    {'w' | TAG_Q,        &R4::pending},
    {'x' | TAG_Q,        &R4::bottom_of_screen},
    {'y' | TAG_Q,        &R4::pending},
    {'z' | TAG_Q,        &R4::pending},



// The following is extracted for ncurses.h and is probably a comprehensive
// list of potential special keys. Many will not be available on your keyboard!

    {KEY_CODE_YES | TAG_FN,      &R4::pending},        /* A wchar_t contains a key code */
    {KEY_MIN | TAG_FN,           &R4::pending},        /* Minimum curses key */
    {KEY_BREAK | TAG_FN,         &R4::pending},        /* Break key (unreliable) */
    {KEY_SRESET | TAG_FN,        &R4::pending},        /* Soft (partial) reset (unreliable) */
    {KEY_RESET | TAG_FN,         &R4::pending},        /* Reset or hard reset (unreliable) */

    {KEY_DOWN | TAG_FN,          &R4::line_down},      /* down-arrow key */
    {KEY_UP | TAG_FN,            &R4::line_up},        /* up-arrow key */
    {KEY_LEFT | TAG_FN,          &R4::char_left},      /* left-arrow key */
    {KEY_RIGHT | TAG_FN,         &R4::char_right},     /* right-arrow key */
    {KEY_HOME | TAG_FN,          &R4::pending},        /* home key */
    {KEY_BACKSPACE | TAG_FN,     &R4::backspace},      /* backspace key */
    {KEY_F0 | TAG_FN,            &R4::pending},        /* Function keys.  Space for 64 */
    {KEY_F(1) | TAG_FN,          &R4::pending},
    {KEY_F(2) | TAG_FN,          &R4::pending},
    {KEY_F(3) | TAG_FN,          &R4::pending},
    {KEY_F(4) | TAG_FN,          &R4::pending},
    {KEY_F(5) | TAG_FN,          &R4::pending},
    {KEY_F(6) | TAG_FN,          &R4::pending},
    {KEY_F(7) | TAG_FN,          &R4::pending},
    {KEY_F(8) | TAG_FN,          &R4::pending},
    {KEY_F(9) | TAG_FN,          &R4::pending},
    {KEY_F(10) | TAG_FN,         &R4::pending},
    {KEY_F(11) | TAG_FN,         &R4::pending},
    {KEY_F(12) | TAG_FN,         &R4::pending},
    {KEY_F(13) | TAG_FN,         &R4::pending},
    {KEY_F(14) | TAG_FN,         &R4::pending},
    {KEY_F(15) | TAG_FN,         &R4::pending},
    {KEY_F(16) | TAG_FN,         &R4::pending},
    {KEY_DL | TAG_FN,            &R4::pending},        /* delete-line key */
    {KEY_IL | TAG_FN,            &R4::pending},        /* insert-line key */
    {KEY_DC | TAG_FN,            &R4::delete_char},    /* delete-character key */
    {KEY_IC | TAG_FN,            &R4::pending},        /* insert-character key */
    {KEY_EIC | TAG_FN,           &R4::pending},        /* sent by rmir or smir in insert mode */
    {KEY_CLEAR | TAG_FN,         &R4::pending},        /* clear-screen or erase key */
    {KEY_EOS | TAG_FN,           &R4::pending},        /* clear-to-end-of-screen key */
    {KEY_EOL | TAG_FN,           &R4::pending},        /* clear-to-end-of-line key */
    {KEY_SF | TAG_FN,            &R4::scroll_page_up}, /* scroll-forward key */
    {KEY_SR | TAG_FN,            &R4::scroll_page_down},/* scroll-backward key */
    {KEY_NPAGE | TAG_FN,         &R4::scroll_page_up}, /* next-page key */
    {KEY_PPAGE | TAG_FN,         &R4::scroll_page_down},/* previous-page key */
    {KEY_STAB | TAG_FN,          &R4::pending},        /* set-tab key */
    {KEY_CTAB | TAG_FN,          &R4::pending},        /* clear-tab key */
    {KEY_CATAB | TAG_FN,         &R4::pending},        /* clear-all-tabs key */
    {KEY_ENTER | TAG_FN,         &R4::insert_newline}, /* enter/send key */
    {KEY_PRINT | TAG_FN,         &R4::pending},        /* print key */
    {KEY_LL | TAG_FN,            &R4::pending},        /* lower-left key (home down) */
    {KEY_A1 | TAG_FN,            &R4::pending},        /* upper left of keypad */
    {KEY_A3 | TAG_FN,            &R4::pending},        /* upper right of keypad */
    {KEY_B2 | TAG_FN,            &R4::pending},        /* center of keypad */
    {KEY_C1 | TAG_FN,            &R4::pending},        /* lower left of keypad */
    {KEY_C3 | TAG_FN,            &R4::pending},        /* lower right of keypad */
    {KEY_BTAB | TAG_FN,          &R4::pending},        /* back-tab key */
    {KEY_BEG | TAG_FN,           &R4::pending},        /* begin key */
    {KEY_CANCEL | TAG_FN,        &R4::pending},        /* cancel key */
    {KEY_CLOSE | TAG_FN,         &R4::pending},        /* close key */
    {KEY_COMMAND | TAG_FN,       &R4::pending},        /* command key */
    {KEY_COPY | TAG_FN,          &R4::pending},        /* copy key */
    {KEY_CREATE | TAG_FN,        &R4::pending},        /* create key */
    {KEY_END | TAG_FN,           &R4::pending},        /* end key */
    {KEY_EXIT | TAG_FN,          &R4::pending},        /* exit key */
    {KEY_FIND | TAG_FN,          &R4::pending},        /* find key */
    {KEY_HELP | TAG_FN,          &R4::pending},        /* help key */
    {KEY_MARK | TAG_FN,          &R4::pending},        /* mark key */
    {KEY_MESSAGE | TAG_FN,       &R4::pending},        /* message key */
    {KEY_MOVE | TAG_FN,          &R4::pending},        /* move key */
    {KEY_NEXT | TAG_FN,          &R4::pending},        /* next key */
    {KEY_OPEN | TAG_FN,          &R4::pending},        /* open key */
    {KEY_OPTIONS | TAG_FN,       &R4::pending},        /* options key */
    {KEY_PREVIOUS | TAG_FN,      &R4::pending},        /* previous key */
    {KEY_REDO | TAG_FN,          &R4::pending},        /* redo key */
    {KEY_REFERENCE | TAG_FN,     &R4::pending},        /* reference key */
    {KEY_REFRESH | TAG_FN,       &R4::pending},        /* refresh key */
    {KEY_REPLACE | TAG_FN,       &R4::pending},        /* replace key */
    {KEY_RESTART | TAG_FN,       &R4::pending},        /* restart key */
    {KEY_RESUME | TAG_FN,        &R4::pending},        /* resume key */
    {KEY_SAVE | TAG_FN,          &R4::pending},        /* save key */
    {KEY_SBEG | TAG_FN,          &R4::pending},        /* shifted begin key */
    {KEY_SCANCEL | TAG_FN,       &R4::pending},        /* shifted cancel key */
    {KEY_SCOMMAND | TAG_FN,      &R4::pending},        /* shifted command key */
    {KEY_SCOPY | TAG_FN,         &R4::pending},        /* shifted copy key */
    {KEY_SCREATE | TAG_FN,       &R4::pending},        /* shifted create key */
    {KEY_SDC | TAG_FN,           &R4::pending},        /* shifted delete-character key */
    {KEY_SDL | TAG_FN,           &R4::pending},        /* shifted delete-line key */
    {KEY_SELECT | TAG_FN,        &R4::pending},        /* select key */
    {KEY_SEND | TAG_FN,          &R4::pending},        /* shifted end key */
    {KEY_SEOL | TAG_FN,          &R4::pending},        /* shifted clear-to-end-of-line key */
    {KEY_SEXIT | TAG_FN,         &R4::pending},        /* shifted exit key */
    {KEY_SFIND | TAG_FN,         &R4::pending},        /* shifted find key */
    {KEY_SHELP | TAG_FN,         &R4::pending},        /* shifted help key */
    {KEY_SHOME | TAG_FN,         &R4::pending},        /* shifted home key */
    {KEY_SIC | TAG_FN,           &R4::pending},        /* shifted insert-character key */
    {KEY_SLEFT | TAG_FN,         &R4::pending},        /* shifted left-arrow key */
    {KEY_SMESSAGE | TAG_FN,      &R4::pending},        /* shifted message key */
    {KEY_SMOVE | TAG_FN,         &R4::pending},        /* Shfted move key */
    {KEY_SNEXT | TAG_FN,         &R4::pending},        /* shifted next key */
    {KEY_SOPTIONS | TAG_FN,      &R4::pending},        /* shifted options key */
    {KEY_SPREVIOUS | TAG_FN,     &R4::pending},        /* shifted previous key */
    {KEY_SPRINT | TAG_FN,        &R4::pending},        /* shifted print key */
    {KEY_SREDO | TAG_FN,         &R4::pending},        /* shifted redo key */
    {KEY_SREPLACE | TAG_FN,      &R4::pending},        /* shifted replace key */
    {KEY_SRIGHT | TAG_FN,        &R4::pending},        /* shifted right-arrow key */
    {KEY_SRSUME | TAG_FN,        &R4::pending},        /* shifted resume key */
    {KEY_SSAVE | TAG_FN,         &R4::pending},        /* shifted save key */
    {KEY_SSUSPEND | TAG_FN,      &R4::pending},        /* shifted suspend key */
    {KEY_SUNDO | TAG_FN,         &R4::pending},        /* shifted undo key */
    {KEY_SUSPEND | TAG_FN,       &R4::pending},        /* suspend key */
    {KEY_UNDO | TAG_FN,          &R4::pending},        /* undo key */
    {KEY_MOUSE | TAG_FN,         &R4::pending},        /* Mouse event has occurred */

    {KEY_RESIZE | TAG_FN,        &R4::pending},        /* Terminal resize event */
};

// Now information about the keys that are accepted while entering a
// search string or replacement text or options. There are few enough that
// use of a switch block rather than a lookup table seems most sense.
#if 0

bool R4::cmd_process(uint32_t ch)
{   switch (ch)
    {
    case CTRL_KEY('a'):              R4::cmd_word_left(); break;
    case CTRL_KEY('d'):              R4::cmd_char_right(); break;
    case CTRL_KEY('f'):              R4::cmd_word_right(); break;
    case CTRL_KEY('g'):              R4::cmd_delete_char(); break;
    case CTRL_KEY('h'):              R4::cmd_undelete(); break;
    case CTRL_KEY('i'):              R4::cmd_tab(); break;
    case CTRL_KEY('j'):              return true;
    case CTRL_KEY('s'):              R4::cmd_char_left(); break;
    case CTRL_KEY('t'):              R4::cmd_delete_word(); break;
    case 0x7f:                       R4::cmd_backspace(); break;
    case 'x' | TAG_ALT:              R4::cmd_unicodeConvert(); break;
    case KEY_LEFT | TAG_FN:          R4::cmd_char_left(); break;
    case KEY_RIGHT | TAG_FN:         R4::cmd_char_right(); break;
    case KEY_BACKSPACE | TAG_FN:     R4::cmd_backspace(); break;
    case KEY_DC | TAG_FN:            R4::cmd_delete_char(); break;
    case KEY_ENTER | TAG_FN:         return true;
    default:                         return false
    }
}

#endif

// end of keymap.cpp
