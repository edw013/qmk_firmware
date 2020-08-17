#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _FL 1

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
  /* Keymap _BL: Base Layer (Default Layer)
   */
    [_BL] = LAYOUT_all(
    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS, KC_DEL,        KC_PGUP,
    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,    KC_BSPC,            KC_PGDN,
    KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT, KC_ENT,
    KC_LSFT,KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,MO(_FL),        KC_UP,
    KC_CAPS, KC_LGUI, KC_LALT,KC_SPC,KC_SPC,KC_SPC,KC_SPC,                                KC_RALT,KC_RGUI,KC_RCTL,KC_LEFT,KC_DOWN,KC_RGHT),

    /* Keymap _FL: Function Layer
    */
    [_FL] = LAYOUT_all(
    KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______, _______,        KC_VOLU,
    _______,X(TRIUMPH),X(THINK),X(SNEEZE),X(PENSIVE),X(WEARY),X(STAR_STRUCK),X(RELIEVED),_______,_______,_______,_______,_______,_______,      KC_VOLD,
    _______,X(PLEAD),X(HOT),X(THUMBS_UP),X(HEARTS),X(FLUSH),X(COWBOY),X(WOOZY),_______,_______,_______,_______,_______,_______,
    _______,_______,X(HEART_EYES),X(ROLL_EYES),X(F_SHRUG),X(F_FACEPALM),X(EYES),X(ZANY),_______,_______,_______,_______,_______,_______,        KC_MUTE,
    _______,_______,_______, _______,_______,_______,  _______,                                UC_MOD, _______,RESET,KC_MPRV,KC_MPLY,KC_MNXT)
};
