#include "choan.h"

enum combos {
    JK_ENTER,
    DF_ESC,
    COMBO_LENGTH
};


uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM jk_enter[] = {HOME_J, HOME_K, COMBO_END};
const uint16_t PROGMEM df_esc[]   = {HOME_D, HOME_F, COMBO_END};


combo_t key_combos[] = {
  [JK_ENTER] = COMBO(jk_enter, KC_ENT),
  [DF_ESC]   = COMBO(df_esc, KC_ESC),
};
