TAP_DANCE_ENABLE = yes

SRC += choan.c

ifeq ($(strip $(COMBO_ENABLE)), yes)
    SRC += combos.c
endif
