/* FF4 source-port — interpreted module for battle_rows_loop_l14c67c_on_x40_wi.
 * Ground truth: src/battle_rows_loop_l14c67c_on_x40_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_loop_l14c67c_on_x40_wi(void)
{
    /* battle rows: loop L14C67C on 5958(0x40) with 80094D14 row. */
    row_open();
    wnd_open_cur();
L14c67c:
    for (;;) {
        txt_cell_cur();
        cell_put_cur();
        txt_cell_cur();
        cell_put(1);
        latch(1);
        func_80094D14();
        row_page_cur();
        cell_draw_cur();
        row_page(1);
        cell_draw_cur();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    return;
}
