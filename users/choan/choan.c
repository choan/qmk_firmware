#include "choan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT (
		KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,      KC_P,
		HOME_A, HOME_S,  HOME_D, HOME_F,  HOME_G,                   HOME_H,  HOME_J,  HOME_K,  HOME_L,    HOME_QUO,
		KC_Z,   X_ALTGR, KC_C,   KC_V,    KC_B,    KC_NO,   KC_NO,  KC_N,    KC_M,    KC_COMM, DOT_ALTGR, KC_SLASH,
		KC_NO,  KC_NO,   KC_NO,  MOU_NIL, NAV_SPC, NUM_TAB, KC_ENT, SYM_BCK, FUN_DEL, KC_VOLD, KC_VOLU,   KC_MUTE
	),
	[_NAV]  = LAYOUT(
		RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                  U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_HYPR,                KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
		KC_NO,   KC_ALGR, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_ENT, KC_BSPC, KC_DEL,  KC_MPRV, KC_MPLY, KC_MNXT
		),
	[_SYM]  = LAYOUT(
		KC_TILD, KC_PLUS, KC_EQL,  KC_PERC, KC_HASH, KC_QUES, KC_RBRC, KC_LBRC, KC_AMPR, KC_CIRC,
		KC_SCLN,   KC_SLSH, KC_LPRN, KC_RPRN, KC_GRV,  KC_MINS, KC_RCBR, KC_LCBR, KC_BSLS, KC_AT,
		KC_COLN, KC_ASTR, KC_DLR,  KC_EXLM, KC_PIPE, KC_NO, KC_NO, KC_TILD, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_NO, KC_NO,    KC_NO,    KC_ESC, KC_MINS, KC_UNDS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO
		),
	[_NUM]  = LAYOUT(
	    RESET,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_EQL,  KC_4,    KC_5,    KC_6,    KC_SCLN,
		KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO, KC_NO, KC_NO, KC_BSLS, KC_1,    KC_2,    KC_3,    KC_GRV,
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_PENT, KC_0,    KC_DOT,  KC_NO,    KC_NO , KC_NO
		),
	[_MOUSE] = LAYOUT(
		    RESET,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
			KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
			KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO, KC_NO, KC_NO,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
			KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BTN1, KC_BTN3, KC_BTN2, KC_NO,    KC_NO , KC_NO

		)
};
