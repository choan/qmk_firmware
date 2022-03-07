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
	_NAV,
	_MOUSE,
	_SYM,
	_NUM,
	_FUN,
	_MEDIA
};

// reduce default
#undef TAPPING_TERM
#define TAPPING_TERM 200

// prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

// enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// layer keys
#define MOU_NIL LT(_MOUSE, KC_NO)
#define NAV_SPC LT(_NAV, KC_SPACE)
#define NUM_TAB LT(_NUM, KC_TAB)

#define MED_ENT LT(_MEDIA, KC_ENTER)
#define SYM_BCK LT(_SYM, KC_BACKSPACE)
#define FUN_DEL LT(_FUN, KC_DELETE)

// left hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_G HYPR_T(KC_G)
#define DOT_ALTGR RALT_T(KC_DOT)

// right hand home row mods
#define HOME_QUO RGUI_T(KC_QUOTE)
#define HOME_L   LALT_T(KC_L)
#define HOME_K   RCTL_T(KC_K)
#define HOME_J   RSFT_T(KC_J)
#define HOME_H   HYPR_T(KC_H)
#define X_ALTGR   RALT_T(KC_X)

// copy/paste
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64
