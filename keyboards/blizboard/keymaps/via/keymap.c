#include QMK_KEYBOARD_H

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    if (IS_QK_MOD_TAP(keycode))
        return true;
        
    return false;
}
        
enum layer{
	BASE = 0,
	NAV,
	MOUSE,
	MEDIA,
	NUM,
	SYM,
	FUN};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
    						XXXXXXX, KC_Q, 		KC_W,		KC_E,				KC_R,				KC_T,	 					KC_Y,			KC_U,				KC_I,		KC_O, 		KC_P, 			XXXXXXX,
    						XXXXXXX, LGUI_T(KC_A),	LALT_T(KC_S),	LCTL_T(KC_D), 		LSFT_T(KC_F),			KC_G,	 					KC_H,			RSFT_T(KC_J),			RCTL_T(KC_K),	RALT_T(KC_L),	RGUI_T(KC_SCLN),	XXXXXXX,
    						XXXXXXX,	KC_Z, 		KC_X,		KC_C, 				KC_V,				KC_B, 						KC_N,			KC_M,				KC_COMM,	KC_DOT, 		KC_SLSH, 		XXXXXXX,
    						 								LT(MEDIA, KC_ESC), 	LT(NAV, KC_BSPC),		LT(MOUSE, KC_DEL),			LT(SYM, KC_ENT),	LT(NUM, KC_SPC),	LT(FUN, KC_TAB)
    			),
    [NAV] = LAYOUT(
    						XXXXXXX, XXXXXXX, 	XXXXXXX,		XXXXXXX,				XXXXXXX,				XXXXXXX,	 					XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 	XXXXXXX,			XXXXXXX,
    						XXXXXXX, KC_LGUI,		KC_LALT,		KC_LCTL,	 			KC_LSFT,				XXXXXXX,	 					KC_LEFT,			KC_DOWN,			KC_UP,		KC_RIGHT,	KC_CAPS,		XXXXXXX,
    						XXXXXXX,	XXXXXXX,		XXXXXXX,		XXXXXXX,				XXXXXXX,				XXXXXXX,						KC_HOME,		KC_PGDN,			KC_PGUP,	KC_END, 		KC_INSERT, 		XXXXXXX,
    						 								XXXXXXX, 			_______,				XXXXXXX,						KC_ENT,			KC_SPC,				KC_TAB
    			),
    [MOUSE] = LAYOUT(
    						XXXXXXX, XXXXXXX, 	XXXXXXX,		XXXXXXX,				XXXXXXX,				XXXXXXX,	 					XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX,		XXXXXXX,
    						XXXXXXX, KC_LGUI,		KC_LALT,		KC_LCTL,	 			KC_LSFT,				XXXXXXX,	 					KC_MS_LEFT,		KC_MS_DOWN,		KC_MS_UP,	KC_MS_RIGHT,	XXXXXXX,		XXXXXXX,
    						XXXXXXX,	XXXXXXX,		XXXXXXX,		XXXXXXX,				XXXXXXX,				XXXXXXX,						KC_WH_L,		KC_WH_D,			KC_WH_U,	KC_WH_R, 		XXXXXXX, 	XXXXXXX,
    						 								XXXXXXX, 			XXXXXXX,				_______,						KC_MS_BTN2,		KC_MS_BTN1,			KC_MS_BTN3
    			),
    [MEDIA] = LAYOUT(
    						XXXXXXX, XXXXXXX, 	XXXXXXX,		XXXXXXX,				XXXXXXX,				XXXXXXX,	 					XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX,		XXXXXXX,
    						XXXXXXX, KC_LGUI,		KC_LALT,		KC_LCTL,	 			KC_LSFT,				XXXXXXX,	 					KC_MPRV,		KC_VOLD,			KC_VOLU,	KC_MNXT,		XXXXXXX,		XXXXXXX,
    						XXXXXXX,	XXXXXXX,		XXXXXXX,		XXXXXXX,				XXXXXXX,				XXXXXXX,						XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX, 	XXXXXXX,
    						 								_______, 				XXXXXXX,				XXXXXXX,						KC_MSTP,		KC_MPLY,			KC_MUTE
    			),
    [NUM] = LAYOUT(
    						XXXXXXX, KC_LBRC, 	KC_7,		KC_8,				KC_9,				KC_RBRC,	 				XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX,		XXXXXXX,
    						XXXXXXX, KC_QUOT,	KC_4,		KC_5,	 			KC_6,				KC_EQL,	 					XXXXXXX,			KC_RSFT,				KC_RCTL,		KC_RALT,			KC_RGUI,	XXXXXXX,
    						XXXXXXX,	KC_GRAVE,	KC_1,		KC_2,				KC_3,				KC_BACKSLASH,				XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX, 	XXXXXXX,
    						 								KC_DOT, 				KC_0,				KC_MINUS,					XXXXXXX,			_______,				XXXXXXX
    			),
    [SYM] = LAYOUT(
    						XXXXXXX, KC_LCBR, 	KC_AMPR,	KC_ASTR,			KC_LPRN,			KC_RCBR,	 				XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX,		XXXXXXX,
    						XXXXXXX, KC_DQUO,	KC_DLR,		KC_PERC,	 		KC_CIRC,				KC_PLUS,	 				XXXXXXX,			KC_RSFT,				KC_RCTL,		KC_RALT,			KC_RGUI,	XXXXXXX,
    						XXXXXXX,	KC_TILD,		KC_EXLM,	KC_AT,				KC_HASH,			KC_PIPE,						XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX, 	XXXXXXX,
    						 								KC_LPRN, 			KC_RPRN,			KC_UNDS,					_______,			XXXXXXX,				XXXXXXX
    			),
    [FUN] = LAYOUT(
    						XXXXXXX, KC_F12, 		KC_F7,		KC_F8,				KC_F9,				KC_PRINT_SCREEN,	 		XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX,		XXXXXXX,
    						XXXXXXX, KC_F11,		KC_F4,		KC_F5,	 			KC_F6,				KC_SCRL,	 					XXXXXXX,			KC_RSFT,				KC_RCTL,		KC_RALT,			KC_RGUI,	XXXXXXX,
    						XXXXXXX,	KC_F10,		KC_F1,		KC_F2,				KC_F3,				KC_PAUSE,					XXXXXXX,			XXXXXXX,				XXXXXXX,		XXXXXXX, 		XXXXXXX, 	XXXXXXX,
    						 								KC_APP, 				KC_SPC,				KC_TAB,						XXXXXXX,			XXXXXXX,				_______
    			),
    			};
