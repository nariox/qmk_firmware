#include "dz60.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
//const uint32_t PROGMEM unicode_map[] = {0x1F4A9};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0
* ,-----------------------------------------------------------------------------------------.
* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
* |-----------------------------------------------------------------------------------------+
* | Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \    |
* |-----------------------------------------------------------------------------------------+
* | GUI     |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |    Up    | Fn1  |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  | Fn1  |  Alt |     Space    | Space |   Space    | Fn2   | Left  | Down  | Right |
* `-----------------------------------------------------------------------------------------'
*/

	LAYOUT(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, MO(1),
		KC_LCTL, MO(1), KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(2), KC_LEFT, KC_NO, KC_DOWN, KC_RIGHT),

/* Layer 1
* ,-----------------------------------------------------------------------------------------.
* |  `  | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    Del    |
* |-----------------------------------------------------------------------------------------+
* |       |     |     |    |      |     |     |     |PgUp |     |     |     |     |         |
* |-----------------------------------------------------------------------------------------+
* |         |     |     |     |     |     |     |Home |PgDn | End |     |     |             |
* |-----------------------------------------------------------------------------------------+
* |           |     |     |     |     |     |     |     |     |     |     |   PgUp   |      |
* |-----------------------------------------------------------------------------------------+
* |       |      |      |   Prev       |Ply/Pau|  Next      |       | Home  | PgDn  | End   |
* `-----------------------------------------------------------------------------------------'
*/
	LAYOUT(
		KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6  , KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_DEL,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_HOME,  KC_NO, KC_PGDN, KC_END),
 /* Layer 2
* ,-----------------------------------------------------------------------------------------.
* |  `  | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    Del    |
* |-----------------------------------------------------------------------------------------+
* |       |RGBT |RGBM |Hue+ |Hue- |Sat+ |Sat- |     |     |     |     |     |     | RShift  |
* |-----------------------------------------------------------------------------------------+
* |         |Val+ |Val- |     |     |     |     |     |     |     |     |     |             |
* |-----------------------------------------------------------------------------------------+
* |           | BLT | BL- | BL+ | BLS | BLB |     |NKRO |  Ç  |     |     |   Vol+   |      |
* |-----------------------------------------------------------------------------------------+
* | RESET |      |       |   Prev       |Ply/Pau|  Next      |      | Prev  | Vol-  | Next  |
* `-----------------------------------------------------------------------------------------'
*/
	LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_DEL,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT,
		KC_TRNS, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_NO ,  BL_TOGG, BL_DEC , BL_INC,  BL_STEP, BL_BRTG, KC_TRNS, MAGIC_TOGGLE_NKRO, RALT(KC_COMMA), KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS,
		RESET, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_MPRV, KC_NO, KC_VOLD, KC_MNXT),
};

// Ideas
// Add KC_SLEP

/*};*/

/*const uint16_t PROGMEM fn_actions[] = {*/
/*  [0]  = ACTION_FUNCTION(SHIFT_ESC),*/
/*};*/

/*void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {*/
/*  static uint8_t shift_esc_shift_mask;*/
/*  switch (id) {*/
/*    case SHIFT_ESC:*/
/*      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;*/
/*      if (record->event.pressed) {*/
/*        if (shift_esc_shift_mask) {*/
/*          add_key(KC_GRV);*/
/*          send_keyboard_report();*/
/*        } else {*/
/*          add_key(KC_ESC);*/
/*          send_keyboard_report();*/
/*        }*/
/*      } else {*/
/*        if (shift_esc_shift_mask) {*/
/*          del_key(KC_GRV);*/
/*          send_keyboard_report();*/
/*        } else {*/
/*          del_key(KC_ESC);*/
/*          send_keyboard_report();*/
/*        }*/
/*      }*/
/*      break;*/
/*  }*/
/*}*/

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        DDRB |= (1 << 2); PORTB &= ~(1 << 2);
    } else {
        DDRB &= ~(1 << 2); PORTB &= ~(1 << 2);
    }
}
