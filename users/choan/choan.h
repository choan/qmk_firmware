/* Copyright 2022 Choan Gálvez <choan.galvez@gmail.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once
#include QMK_KEYBOARD_H


enum layer_names {
	_BASE,
	_NUM,
	_NAV,
	_MOUSE,
	_SYM,
	_SYMALT,
	_INT,
	_FUN,
	_MEDIA
};

// layer keys
#define MOU_NIL LT(_MOUSE, KC_NO)
#define MOU_ESC LT(_MOUSE, KC_ESC)
#define NAV_SPC LT(_NAV, KC_SPACE)
#define NUM_TAB LT(_NUM, KC_TAB)
#define NUM_V LT(_NUM, KC_V)
#define SYMALT MO(_SYMALT)

#define MED_ENT LT(_MEDIA, KC_ENTER) // unused
#define INT_ENT LT(_INT, KC_ENTER)
#define SYM_BCK LT(_SYM, KC_BACKSPACE)
#define FUN_DEL LT(_FUN, KC_DELETE)
#define FUN_M LT(_FUN, KC_M)

// left hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_G KC_G
#define SHF_V  LSFT_T(KC_V)
#define HYPR_W HYPR_T(KC_W)
#define DOT_ALTGR RALT_T(KC_DOT)

// right hand home row mods
#define HOME_QUO RGUI_T(KC_QUOTE)
#define HOME_L   LALT_T(KC_L)
#define HOME_K   RCTL_T(KC_K)
#define HOME_J   RSFT_T(KC_J)
#define HOME_H   KC_H
#define HYPR_O   HYPR_T(KC_O)
#define SHF_M    RSFT_T(KC_M)
#define X_ALTGR  RALT_T(KC_X)

// copy/paste
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO


// international and strings
#define QUES_OP ALGR(KC_QUES)
#define EXCL_OP ALGR(KC_1)
#define DEAD_GR ALGR(KC_GRV)
#define DEAD_TL ALGR(KC_N)
