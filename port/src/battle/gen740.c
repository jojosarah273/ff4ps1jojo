/* FF4 source-port — interpreted module for func_801035B0.
 * Ground truth: src/func_801035B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801035B0(void)
{
    latch(6);
    txt_draw(0x1704);
    latch(3);
    cell_put(0xAC);
    row_page(0xE1);
    if (gate(2) == 0) {
        latch(0x30);
        cell_put(0xAD);
        latch(0x20);
        cell_put(0xB9);
        cell_tick_half();
        shop_buy_list();
        latch(0xF);
        txt_draw(0x6FD);
    } else {
        battle_rows_run();
        open_row(0x79);
        func_80103660();
    }
}
