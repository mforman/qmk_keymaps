SRC 			+= $(USER_PATH)/mforman.c \
					$(USER_PATH)/switcher/switcher.c

ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += $(USER_PATH)/oled/oled.c
endif

VPATH			+= keyboards/gboards/

BOOTMAGIC_ENABLE = yes  # Enable Bootmagic Lite
COMBO_ENABLE	 = yes
MOUSEKEY_ENABLE  = no
EXTRAKEY_ENABLE  = yes
TAP_DANCE_ENABLE = no
CAPS_WORD_ENABLE = yes



