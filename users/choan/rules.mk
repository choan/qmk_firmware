TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes

# SRC += choan.c
INTROSPECTION_KEYMAP_C = choan.c # keymaps
ifeq ($(strip $(COMBO_ENABLE)), yes)
    SRC += combos.c
endif
