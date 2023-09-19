#include QMK_KEYBOARD_H


// Home Row Mods (GASC CSAG)
# define HR_A    KC_A //MT(MOD_LGUI, KC_A)
# define HR_S    KC_S //MT(MOD_LALT, KC_S)
# define HR_D    KC_D //MT(MOD_LSFT, KC_D)
# define HR_F    KC_F //MT(MOD_LCTL, KC_F)
# define HR_J    KC_J //MT(MOD_LCTL, KC_J)
# define HR_K    KC_K //MT(MOD_LSFT, KC_K)
# define HR_L    KC_L //MT(MOD_LALT, KC_L)
# define HR_SCLN KC_SCLN //MT(MOD_LGUI, KC_SCLN)


enum layers{
  L_HME,
  L_SYS,
  L_FN
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[L_HME] = LAYOUT_tkl_ansi(
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_ESC,     KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,               KC_PSCR,   KC_CTANA, RGB_MOD,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_GRV,     KC_1,      KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,    KC_BSPC,    KC_INS,    KC_HOME,  KC_PGUP,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TAB,     KC_Q,      KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,    KC_DEL,    KC_END,   KC_PGDN,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_ESC,     HR_A,      HR_S,     HR_D,     HR_F,     KC_G,     KC_H,     HR_J,     HR_K,     HR_L,     HR_SCLN,  KC_QUOT,             KC_ENT,
//-|---------------------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_LSFT,               KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,             KC_RSFT,              KC_UP,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_LCTL,    MO(L_SYS), KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI, MO(L_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT),
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------


#define WRD_LEFT LCTL(KC_LEFT)
#define WRD_RIGHT LCTL(KC_RIGHT)


[L_SYS] = LAYOUT_tkl_ansi(
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,              KC_TRNS,  KC_TRNS,  KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  WRD_LEFT, WRD_RIGHT, KC_END,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,    HR_A,      HR_S,     HR_D,     HR_F,     KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_TRNS, KC_TRNS,            KC_TRNS,
//-|---------------------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,               KC_LCTL,  KC_LSFT,  KC_TRNS,  KC_TRNS,  LCTL(KC_B),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,         KC_TRNS,              KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,    KC_TRNS,   KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS),
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------




[L_FN] = LAYOUT_tkl_ansi(
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,                DT_PRNT, DT_DOWN,  DT_UP,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,                KC_TRNS,
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS)
//-|-----------|---------------------------------------------------------------------------------------------------------------------------------|||-----------------------------
};



/* Init function */
void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_RED);
}


/** Set individual key colors **/
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    //RGB_MATRIX_INDICATOR_SET_COLOR(RGB_WHITE);
    return false;
}



/* Change LEDs based on layer */
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_HME:
            rgblight_sethsv(HSV_TEAL);
            break;
        case L_SYS:
            rgblight_sethsv(HSV_BLUE);
            break;
        default: // for any other layers
            rgblight_sethsv(HSV_WHITE);
            break;
    }

    return state;
}

