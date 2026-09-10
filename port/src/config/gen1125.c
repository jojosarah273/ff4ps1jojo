/* FF4 source-port — interpreted module for fn_1x2baf8.
 * Ground truth: src/fn_1x2baf8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void fn_1x2baf8(void) {
    config_row_x30_x3f_windows_x1b22_t();
    battle_row_45b();
    latch(0x30);
    cell_put(0x3F);
    item_equip_sub_screen_x1b3e_x1b22();
    latch(0x20);
    cell_put(0x3F);
    fn_1x2b0b0();
    fn_1x26878();
    config_row_f320();
    battle_state_dc400();;
}
