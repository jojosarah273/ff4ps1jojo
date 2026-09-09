/* FF4 source-port — interpreted module for func_80119020.
 * Ground truth: src/func_80119020.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119020(void)
{
    /* battle rows: 0x6/0x1003 cells, 80117DF8 row; loop L119040
       on 5958(0x140). */
    func_80117594();
    cell_put(6);
    wnd_open_cur();
L119040:
    for (;;) {
        txt_cell(0x1003);
        func_800F5ECC(cell_state(6));
        cell_draw(0x1003);
        func_80117DF8();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(1);
    cell_put(0xCC);
    func_800FE778();
    return;
}
