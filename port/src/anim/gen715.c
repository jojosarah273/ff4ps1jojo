/* FF4 source-port — interpreted module for shop_rows_xddb_cells_loops_l175ccc.
 * Ground truth: src/shop_rows_xddb_cells_loops_l175ccc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_xddb_cells_loops_l175ccc(void)
{
    /* shop rows: 0xDDB cells; loops L175CCC/L175CD0/L175D20 on
       4120(0x202)/5A90(0x80). */
    draw_pad_cur();
    wnd_open_cur();
L175CCC:
    for (;;) {
    L175cd0:
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0xDDB);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L175CCC;
            break;
        }
    L175d20:
        for (;;) {
            latch_cur();
            cell_pull_c8(0xDDB);
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
