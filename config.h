/*
    FLinguenheld 2023
*/

#pragma once

/* Select hand configuration */
// #define MASTER_LEFT
#define MASTER_RIGHT

/* Flash */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET              // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

/* OLED */
#undef OLED_FONT_H
#define OLED_FONT_H "./font/glcdfont.c"

#define  OLED_TIMEOUT 25000
#define OLED_BRIGHTNESS 60 // Protect my eyesss
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_OLED_ENABLE

/* Auto shift ♥ */
#define AUTO_SHIFT_TIMEOUT 115

/* Redefine CTRL + space (See space cadet shift) */
#define LCPO_KEYS KC_LCTL, KC_TRNS, KC_SPC

/* Unicode */
// #define UNICODE_SELECTED_MODES UC_LNX
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

/* leader */
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 280
#define LEADER_NO_TIMEOUT

/* Mouse */
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_0 1
#define MK_C_INTERVAL_0 12

#define MK_C_OFFSET_1 4
#define MK_C_INTERVAL_1 18

#define MK_C_OFFSET_UNMOD 13
#define MK_C_INTERVAL_UNMOD 15

#define MK_C_OFFSET_2 25
#define MK_C_INTERVAL_2 10


#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 160

#define MK_W_OFFSET_1 2
#define MK_W_INTERVAL_1 120

#define MK_W_OFFSET_UNMOD 4
#define MK_W_INTERVAL_UNMOD 70

#define MK_W_OFFSET_2 10
#define MK_W_INTERVAL_2 30
