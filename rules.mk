LTO_ENABLE = yes
CONVERT_TO = elite_pi

SRC += features/auto_shift.c
SRC += features/cap_word.c
INTROSPECTION_KEYMAP_C = features/combo.c # Replace SRC, see issue #21137
SRC += features/leader.c
SRC += oled/oled.c

OLED_ENABLE = yes
OLED_DRIVER = ssd1306

MOUSEKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
AUTO_SHIFT_MODIFIERS = no
COMBO_ENABLE = yes
LEADER_ENABLE = yes
CAPS_WORD_ENABLE = yes

UNICODE_ENABLE = yes
SEND_STRING_ENABLE = yes
