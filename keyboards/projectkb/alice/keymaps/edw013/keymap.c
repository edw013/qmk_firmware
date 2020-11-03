/*
Copyright 2020 Ryan Castillo <castillo.ryanmiguel@gmail.com>

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
#include QMK_KEYBOARD_H

enum unicode_names {
    PLEAD,
    HOT,
    THUMBS_UP,
    HEARTS,
    HEART_EYES,
    ROLL_EYES,
    F_SHRUG,
    F_FACEPALM,
    TRIUMPH,
    THINK,
    SNEEZE,
    PENSIVE,
    WEARY,
    FLUSH,
    EYES,
    STAR_STRUCK,
    COWBOY,
    ZANY,
    RELIEVED,
    WOOZY
};

const uint32_t PROGMEM unicode_map[] = {
    [PLEAD] = 0x1F97A,
    [HOT] = 0x1F975,
    [THUMBS_UP] = 0x1F44D,
    [HEARTS] = 0x1F970,
    [HEART_EYES] = 0x1F60D,
    [ROLL_EYES] = 0x1F644,
    [F_SHRUG] = 0x1F937,
    [F_FACEPALM] = 0x1F926,
    [TRIUMPH] = 0x1F624,
    [THINK] = 0x1F914,
    [SNEEZE] = 0x1F927,
    [PENSIVE] = 0x1F614,
    [WEARY] = 0X1F629,
    [FLUSH] = 0x1F633,
    [EYES] = 0x1F440,
    [STAR_STRUCK] = 0x1F929,
    [COWBOY] = 0x1F920,
    [ZANY] = 0x1F92A,
    [RELIEVED] = 0x1F60C,
    [WOOZY] = 0x1F974
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_alice(
    KC_ESC,  	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_DEL,
    KC_PGUP, 	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_PGDN, 	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
				KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
				KC_CAPS,          KC_LALT, KC_SPC,  KC_LGUI,                          KC_SPC,           KC_RALT,          KC_RCTL
  ),
  [1] = LAYOUT_alice(
    RESET,  	KC_TRNS, KC_F1,   KC_F2,  KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_MPRV, KC_MNXT,
    KC_VOLU,  	KC_TRNS, X(TRIUMPH),X(THINK),X(SNEEZE),X(PENSIVE),X(WEARY),          X(STAR_STRUCK),X(RELIEVED), KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_MPLY,
    KC_VOLD, 	KC_TRNS, X(PLEAD),X(HOT),X(THUMBS_UP),X(HEARTS),X(FLUSH),          X(COWBOY),X(WOOZY), KC_TRNS, KC_TRNS, KC_LEFT, KC_RGHT,          KC_TRNS,
				KC_TRNS, X(HEART_EYES),X(ROLL_EYES),X(F_SHRUG),X(F_FACEPALM),X(EYES),          X(ZANY), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_TRNS, KC_TRNS,
				KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,          UC_MOD,          KC_TRNS
  )
};
