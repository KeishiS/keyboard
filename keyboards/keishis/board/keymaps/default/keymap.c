#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

enum layer_names { _BASE, _LOWER, _UPPER };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(                                           //
                                                                // left
        KC_T, KC_R, KC_E, KC_W, KC_NO, KC_ESC,                  //
        KC_G, KC_F, KC_D, KC_S, KC_Q, KC_TAB,                   //
        KC_B, KC_V, KC_C, KC_X, KC_A, KC_LCTL,                  //
        MO(_LOWER), KC_ENT, KC_SPC, JP_MHEN, KC_Z, KC_LSFT,     //
                                                                // right
        KC_Y, KC_U, KC_I, KC_O, KC_NO, KC_RALT,                 //
        KC_H, KC_J, KC_K, KC_L, JP_P, JP_AT,                    //
        KC_N, KC_M, KC_COMM, KC_DOT, JP_SCLN, JP_COLN,          //
        MO(_UPPER), KC_RGUI, KC_BSPC, JP_HENK, KC_SLSH, JP_BSLS //
        ),
    [_LOWER] = LAYOUT(                                        //
                                                              // left
        JP_PIPE, JP_EXLM, JP_HASH, JP_DQUO, KC_NO, KC_ESC,    //
        JP_GRV, JP_TILD, JP_AMPR, JP_PERC, KC_NO, KC_TAB,     //
        JP_ASTR, JP_QUOT, JP_DLR, KC_NO, KC_NO, KC_LCTL,      //
        MO(_LOWER), KC_ENT, KC_SPC, JP_MHEN, KC_NO, KC_LSFT,  //
                                                              // right
        JP_LCBR, JP_RCBR, JP_UNDS, KC_NO, KC_NO, KC_RALT,     //
        JP_LBRC, JP_RBRC, JP_MINS, KC_NO, KC_UP, KC_NO,       //
        JP_LPRN, JP_RPRN, JP_EQL, KC_LEFT, KC_DOWN, KC_RIGHT, //
        MO(_UPPER), KC_RGUI, KC_BSPC, JP_HENK, KC_NO, KC_NO   //
        ),
    [_UPPER] = LAYOUT(                                       //
                                                             // left
        KC_NO, KC_3, KC_2, KC_1, KC_NO, KC_ESC,              //
        KC_NO, KC_6, KC_5, KC_4, KC_NO, KC_TAB,              //
        KC_0, KC_9, KC_8, KC_7, KC_NO, KC_LCTL,              //
        MO(_LOWER), KC_ENT, KC_SPC, JP_MHEN, KC_NO, KC_LSFT, //
                                                             // right
        KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_RALT,          //
        KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO,            //
        KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO,         //
        MO(_UPPER), KC_RGUI, KC_BSPC, JP_HENK, KC_NO, KC_NO  //
        )                                                    //
};
