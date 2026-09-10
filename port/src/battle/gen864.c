/* FF4 source-port — interpreted module for fn_1x03a28.
 * Ground truth: src/fn_1x03a28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x03a28(void)
{
    fn_1x03b38();
    latch(0x80);
    txt_draw(0x2100);
    cell_clear_bank(0x4200);
    cell_clear_bank(0x420C);
    latch(0x32);
    cell_put(0x76);
    wnd_open(0);
    tail(0x47);
    wnd_open(0x8000);
    tail(0x45);
    fn_1x76748();
    latch(2);
    txt_draw(0x1700);
    shop_confirm_rows_x3e_x3d_windows();
    fn_1x03fe8();
    battle_menu_rows_x70_x7_x3d_x3e_wi();
}
