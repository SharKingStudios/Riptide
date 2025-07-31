#include "riptide.h"

void keyboard_pre_init_kb(void) {
    setPinOutput(GP27); // for RGB
    keyboard_pre_init_user();
}
