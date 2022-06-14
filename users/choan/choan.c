#include "choan.h"

enum custom_keycodes {
    EQEQ = SAFE_RANGE,
    PLPL,
	MINMIN,
	ARROW,
	DBARR,
	EMAIL,
	THIS,
    EQGT,
	DSGT,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case EQEQ:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(" == ");
        }
        break;
    case PLPL:
        if (record->event.pressed) {
            SEND_STRING("++");
        }
        break;
    case MINMIN:
        if (record->event.pressed) {
            SEND_STRING("--");
        }
        break;
    case ARROW:
        if (record->event.pressed) {
            SEND_STRING("->");
        }
        break;
    case DBARR:
        if (record->event.pressed) {
            SEND_STRING(" => ");
        }
        break;
    case EMAIL:
        if (record->event.pressed) {
            SEND_STRING("choan.galvez@gmail.com");
        }
        break;
    case THIS:
        if (record->event.pressed) {
            SEND_STRING("$this");
        }
        break;
	}
    return true;
};

// tap dances
enum {
    TD_Q_ESC,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Q, twice for ESC
    [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
};

#define Q_ESC TD(TD_Q_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT (
        Q_ESC,  HYPR_W,  KC_E,   KC_R,    KC_T,                      KC_Y,    KC_U,   KC_I,     HYPR_O,    KC_P,
        HOME_A, HOME_S,  HOME_D, HOME_F,  HOME_G,                    HOME_H,  HOME_J, HOME_K,   HOME_L,    HOME_QUO,
        KC_Z,   X_ALTGR, KC_C,   SHF_V,   KC_B,    KC_NO,   KC_NO,   KC_N,    SHF_M,   KC_COMM, DOT_ALTGR, KC_SLASH,
        U_CPY,  U_PST,   KC_NO,  MOU_ESC, NAV_SPC, NUM_TAB, INT_ENT, SYM_BCK, FUN_DEL, KC_VOLD, KC_VOLU,   KC_MUTE
    ),
    [_NAV]  = LAYOUT(
        RESET,    KC_NO,   KC_NO,   KC_NO,      KC_NO,                          U_RDO,    U_PST,   U_CPY,   U_CUT,   U_UND,
        KC_LGUI,  KC_LALT, KC_LCTL, KC_LSFT,    KC_HYPR,                        KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
        DF(_NAV), KC_ALGR, KC_NO,   KC_NO,      KC_NO,     KC_NO,      KC_NO,   KC_HOME,  KC_PGDN, KC_PGUP, KC_END,  KC_INS,
        KC_NO,    KC_NO,   KC_NO,   MO(_MOUSE), DF(_BASE), MO(_NUM),   KC_ENT,  KC_BSPC,  KC_DEL,  KC_MPRV, KC_MPLY, KC_MNXT
        ),
    [_SYM]  = LAYOUT(
        KC_TILD, KC_PLUS, KC_EQL,  KC_PERC, KC_HASH,                  KC_QUES, KC_RBRC, KC_LBRC, KC_AMPR, KC_CIRC,
        KC_SCLN, KC_SLSH, KC_LPRN, KC_RPRN, KC_GRV,                   KC_NO,   KC_RCBR, KC_LCBR, KC_BSLS, KC_AT,
        KC_COLN, KC_ASTR, KC_DLR,  KC_EXLM, KC_PIPE, KC_NO,   KC_NO,  KC_NO,   KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO,   KC_ESC,  KC_MINS, KC_UNDS, KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
        ),
    [_INT]  = LAYOUT(
        DEAD_TL, PLPL,    EQEQ,   KC_PERC, THIS,                  QUES_OP, KC_RBRC, KC_LBRC, KC_AMPR, KC_CIRC,
        KC_SCLN, KC_SLSH, DBARR,  ARROW, DEAD_GR,                  KC_NO,   KC_RCBR, KC_LCBR, KC_BSLS,   EMAIL,
        KC_COLN, KC_ASTR, KC_DLR, EXCL_OP, KC_PIPE, KC_NO,   KC_NO,  KC_NO,   KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO,  KC_ESC,  MINMIN,  KC_UNDS, KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
        ),
    [_NUM]  = LAYOUT(
        RESET,    KC_NO,   KC_NO,   KC_NO,      KC_NO,                         KC_NO,   KC_4,    KC_5,    KC_6,    KC_NO,
        KC_LGUI,  KC_LALT, KC_LCTL, KC_LSFT,    KC_NO,                         KC_NO,   KC_1,    KC_2,    KC_3,    KC_NO,
        DF(_NUM), KC_ALGR, KC_NO,   KC_NO,      KC_NO,    KC_NO,      KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,
        KC_NO,    KC_NO,   KC_NO,   MO(_MOUSE), MO(_NAV), DF(_BASE),  KC_PENT, KC_0,    KC_DOT,  _______, _______, _______
        ),
    [_MOUSE] = LAYOUT(
        RESET,      KC_NO,   KC_NO,   KC_NO,     KC_NO,                     U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
        KC_LGUI,    KC_LALT, KC_LCTL, KC_LSFT,   KC_NO,                     KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
        DF(_MOUSE), KC_ALGR, KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
        KC_NO,      KC_NO,   KC_NO,   DF(_BASE), KC_NO,   KC_NO,   KC_BTN1, KC_BTN3, KC_BTN2, KC_NO,   KC_NO,   KC_NO
        ),
    [_FUN] = LAYOUT(
        KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                    KC_NO,    KC_NO,    KC_NO,    KC_NO,   RESET,
        KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,                    KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT, KC_LGUI,
        KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ALGR, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_APP,  KC_SPC,  KC_TAB,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO
        )
};
