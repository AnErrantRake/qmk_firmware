#include QMK_KEYBOARD_H


#define _DVORAK 0
#define _QWERTY 1
#define _10KEY 2
#define _RAISE 3

#define DIMMED_HSV_GREEN 85, 255, 50
#define DIMMED_HSV_BLUE 170, 255, 50
#define DIMMED_HSV_GOLD 36, 255, 100
#define DIMMED_HSV_WHITE 0, 0, 100

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSPO, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_RSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_ENT,           RGB_TOG, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_MINS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI,  KC_LALT, KC_NO,                    KC_SPC,  KC_RALT, TT(_RAISE)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ENT,           RGB_TOG, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LALT, KC_NO,                     KC_SPC,  KC_RALT, TT(_RAISE)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_10KEY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,                              KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PENT, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, _______,          _______,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_P0,   _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_HOME, KC_END,  KC_PGUP, KC_BRIU, KC_MPLY, KC_MUTE,                            RGB_HUI, KC_LBRC, KC_RBRC, KC_SCLN, KC_MINS, DF(_DVORAK),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PSCR, KC_INS,  KC_PGDN, KC_BRID, KC_MPRV, KC_VOLD,                            RGB_SAI, KC_SLSH, KC_BSLS, KC_GRV,  KC_EQL,  DF(_QWERTY),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_MNXT, KC_VOLU, _______,          _______, RGB_VAI, KC_COMM, KC_DOT,  _______, _______, TG(_10KEY),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_DEL,  KC_PAUS,  _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

void encoder_update_user(uint8_t index, bool clockwise) {
   // I don't think this index 0 does anything - not sure why my encoder uses the second index
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}

const rgblight_segment_t PROGMEM dvorak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, DIMMED_HSV_GREEN}
);
const rgblight_segment_t PROGMEM qwerty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, DIMMED_HSV_BLUE}
);
const rgblight_segment_t PROGMEM tenkey_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {4, 4, DIMMED_HSV_GOLD}
);
const rgblight_segment_t PROGMEM numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, DIMMED_HSV_GOLD},
    {11, 1, DIMMED_HSV_GOLD}
);
const rgblight_segment_t PROGMEM raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {5, 2, DIMMED_HSV_WHITE},
    {0, 1, DIMMED_HSV_WHITE},
    {11,1, DIMMED_HSV_WHITE}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    dvorak_layer,
    qwerty_layer,
    tenkey_layer,
    numlock_layer,
    raise_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
}

// default layers have separate callback
layer_state_t default_layer_state_set_kb(layer_state_t state) {
   rgblight_set_layer_state(0, layer_state_cmp(state, _DVORAK));
   rgblight_set_layer_state(1, layer_state_cmp(state, _QWERTY));
   return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(2, layer_state_cmp(state, _10KEY));
    rgblight_set_layer_state(4, layer_state_cmp(state, _RAISE));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(3, layer_state_is(_10KEY) && led_state.num_lock);
    return true;
}