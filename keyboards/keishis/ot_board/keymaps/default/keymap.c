// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

enum layer_names { _BASE, _LOWER, _UPPER };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(                                             //
                                                                  // left
        KC_NO, KC_T, KC_R, KC_E, KC_W, KC_Q, KC_NO,               //
        KC_NO, KC_G, KC_F, KC_D, KC_S, KC_A, KC_LCTL,             //
        KC_NO, KC_B, KC_V, KC_C, KC_X, KC_Z, KC_NO,               //
        KC_ENT, KC_SPC, MO(_LOWER), KC_LGUI, KC_NO, KC_NO, KC_NO, //
                                                                  // right
        KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,               //
        KC_NO, KC_H, KC_J, KC_K, KC_L, JP_SCLN, JP_COLN,          //
        KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,       //
        KC_BSPC, KC_RSFT, MO(_UPPER), KC_NO, KC_NO, KC_NO, KC_NO  //
        ),
    [_LOWER] = LAYOUT(                                                //
                                                                      // left
        KC_NO, JP_PIPE, JP_UNDS, JP_HASH, JP_DQUO, JP_EXLM, KC_NO,    //
        KC_NO, JP_GRV, JP_CIRC, JP_AMPR, JP_PERC, JP_DLR, KC_TAB,     //
        KC_NO, KC_NO, KC_NO, JP_TILD, JP_ASTR, JP_QUOT, KC_NO,        //
        KC_ENT, JP_MHEN, MO(_LOWER), KC_LGUI, KC_NO, KC_NO, KC_NO,    //
                                                                      // right
        KC_NO, JP_LCBR, JP_RCBR, JP_AT, KC_NO, KC_UP, KC_NO,          //
        KC_NO, JP_LBRC, JP_RBRC, JP_MINS, KC_LEFT, KC_DOWN, KC_RIGHT, //
        KC_NO, JP_LPRN, JP_RPRN, JP_EQL, KC_NO, JP_BSLS, KC_NO,       //
        KC_NO, JP_HENK, MO(_UPPER), KC_NO, KC_NO, KC_NO, KC_NO        //
        ),
    [_UPPER] = LAYOUT(                                             //
                                                                   // left
        KC_NO, KC_NO, KC_NO, KC_3, KC_2, KC_1, KC_NO,              //
        KC_NO, KC_NO, KC_NO, KC_6, KC_5, KC_4, KC_LCTL,            //
        KC_NO, KC_NO, KC_0, KC_9, KC_8, KC_7, KC_NO,               //
        MS_BTN1, KC_SPC, MO(_LOWER), KC_LGUI, KC_NO, KC_NO, KC_NO, //
                                                                   // right
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO,           //
        KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_ESC,          //
        KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO,        //
        MS_BTN2, KC_RSFT, MO(_UPPER), KC_NO, KC_NO, KC_NO, KC_NO   //
        )                                                          //
};
