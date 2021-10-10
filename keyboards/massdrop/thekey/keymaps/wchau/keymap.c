/* Copyright 2021 William Chau
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum combos {
    C1C2_C4,
    C1C3_C5,
    C2C3_C6,
    C1C2C3_C7,
};

const uint16_t PROGMEM c1c2_combo[] = {
    C(KC_1),    C(KC_2),    COMBO_END
};
const uint16_t PROGMEM c1c3_combo[] = {
    C(KC_1),    C(KC_3),    COMBO_END
};
const uint16_t PROGMEM c2c3_combo[] = {
    C(KC_2),    C(KC_3),    COMBO_END
};
const uint16_t PROGMEM c1c2c3_combo[] = {
    C(KC_1),    C(KC_2),    C(KC_3),    COMBO_END
};

combo_t key_combos[COMBO_COUNT] = {
    [C1C2_C4] = COMBO(c1c2_combo, C(KC_4)),
    [C1C3_C5] = COMBO(c1c3_combo, C(KC_5)),
    [C2C3_C6] = COMBO(c2c3_combo, C(KC_6)),
    [C1C2C3_C7] = COMBO(c1c2c3_combo, C(KC_7)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        C(KC_1),    C(KC_2),    C(KC_3)
    ),

};
