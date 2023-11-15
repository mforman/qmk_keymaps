#include QMK_KEYBOARD_H
#include "mforman.h"  // in users/mforman
#include "config.h"

extern keymap_config_t keymap_config;

// clang-format off
#define LAYOUT_crkbd_wrapper(...)   LAYOUT_split_3x6_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_crkbd_wrapper(
    KC_ESC , _________________COLEMAK_L1________________,     _________________COLEMAK_R1________________, OSM_ALT,
    CW_TOGG, _________________COLEMAK_L2________________,     _________________COLEMAK_R2________________, OSM_GUI,
    OSM_CTL, _________________COLEMAK_L3________________,     _________________COLEMAK_R3________________, OSM_CTL,
                                ______BASE_THUMB_L______,     ______BASE_THUMB_R______
),
  [_QWERTY] = LAYOUT_crkbd_wrapper(
    _______, _________________QWERTY_L1_________________,     _________________QWERTY_R1_________________, _______,
    _______, _________________QWERTY_L2_________________,     _________________QWERTY_R2_________________, _______,
    _______, _________________QWERTY_L3_________________,     _________________QWERTY_R3_________________, _______,
                                ______BASE_THUMB_L______,     ______BASE_THUMB_R______
),
  [_LOWER] = LAYOUT_crkbd_wrapper(
    _______, _________________LOWER_L1__________________,      _________________LOWER_R1__________________, _______,
    _______, _________________LOWER_L2__________________,      _________________LOWER_R2__________________, _______,
    _______, _________________LOWER_L3__________________,      _________________LOWER_R3__________________, _______,
                                 _____LOWER_THUMB_L_____,      _____LOWER_THUMB_R_____
),

  [_RAISE] = LAYOUT_crkbd_wrapper(
    _______, _________________RAISE_L1__________________,      _________________RAISE_R1__________________, _______,
    _______, _________________RAISE_L2__________________,      _________________RAISE_R2__________________, _______,
    _______, _________________RAISE_L3__________________,      _________________RAISE_R3__________________, _______,
                                 _____RAISE_THUMB_L_____,      _____RAISE_THUMB_R_____
),
  [_ADJUST] = LAYOUT_crkbd_wrapper(
    _______, ________________ADJUST_L1__________________,      ________________ADJUST_R1__________________, _______,
    _______, ________________ADJUST_L2__________________,      ________________ADJUST_R2__________________, _______,
    _______, ________________ADJUST_L3__________________,      ________________ADJUST_R3__________________, _______,
                               _______, _______, _______,      _______, _______, _______
)
};
// clang-format on
