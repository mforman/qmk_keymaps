#include QMK_KEYBOARD_H
#include "mforman.h"

// clang-format off
#define LAYOUT_gergoplex_wrapper(...)   LAYOUT_split_3x5_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLEMAK] = LAYOUT_gergoplex_wrapper(
_________________COLEMAK_L1________________,     _________________COLEMAK_R1________________,
_________________COLEMAK_L2________________,     _________________COLEMAK_R2________________,
_________________COLEMAK_L3________________,     _________________COLEMAK_R3________________,
                   ______BASE_THUMB_L______,     ______BASE_THUMB_R______
),

[_QWERTY] = LAYOUT_gergoplex_wrapper(
_________________QWERTY_L1_________________,     _________________QWERTY_R1_________________,
_________________QWERTY_L2_________________,     _________________QWERTY_R2_________________,
_________________QWERTY_L3_________________,     _________________QWERTY_R3_________________,
                   ______BASE_THUMB_L______,     ______BASE_THUMB_R______
),

[_LOWER] = LAYOUT_gergoplex_wrapper(
_________________LOWER_L1__________________,     _________________LOWER_R1__________________,
_________________LOWER_L2__________________,     _________________LOWER_R2__________________,
_________________LOWER_L3__________________,     _________________LOWER_R3__________________,
                    _____LOWER_THUMB_L_____,      _____LOWER_THUMB_R_____
),

[_RAISE] = LAYOUT_gergoplex_wrapper(
_________________RAISE_L1__________________,      _________________RAISE_R1__________________,
_________________RAISE_L2__________________,      _________________RAISE_R2__________________,
_________________RAISE_L3__________________,      _________________RAISE_R3__________________,
                    _____RAISE_THUMB_L_____,      _____RAISE_THUMB_R_____
),

[_ADJUST] = LAYOUT_gergoplex_wrapper(
___________________BLANK___________________,      ________________ADJUST_R1__________________,
___________________BLANK___________________,      ________________ADJUST_R2__________________,
___________________BLANK___________________,      ________________ADJUST_R3__________________,
                  _______, _______, _______,      _______, _______, _______
),
};
// clang-format on
