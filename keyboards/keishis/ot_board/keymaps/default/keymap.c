// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(                                          //
                                                           // left
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO,        //
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO,      //
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO,        //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_ENT, //
        // right
        KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_ESC, KC_NO,       //
        KC_NO, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_P,       //
        KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, //
        KC_BSPC, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO //
        )};
