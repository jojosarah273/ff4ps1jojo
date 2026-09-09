/* FF4 source-port — interpreted module for func_80119020.
 * Ground truth: src/func_80119020.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119020(void)
{
    /* battle rows: 0x6/0x1003 cells, 80117DF8 row; loop L119040
       on 5958(0x140). */
    battle_tick_text();
    cell_put(6);
    wnd_open_cur();
L119040:
    for (;;) {
        txt_cell(0x1003);
        cell_tick_xor(cell_state(6));
        cell_draw(0x1003);
        rows_swap44_54();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(1);
    cell_put(0xCC);
    wnd_fx_7d();
    return;
}
