/* FF4 source-port — interpreted module for ability_rows_x41_window_d4_b04_gat.
 * Ground truth: src/ability_rows_x41_window_d4_b04_gat.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x41_window_d4_b04_gat(void)
{
    /* ability rows: 0x41 window, 54D4(3B04) gate routes the 0x1441/
       0xE3 check; loops L134968 (5EA0/5C64(0x202)) and L134998. */
    row_sync();
    draw_pad(0x30);
    page(0x41);
L134968:
    for (;;) {
        if (io_press(cell_state_of()) != 0)
            goto L1349E0;
    L134998:
        for (;;) {
            cell_step();
            cell_step();
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_done();
        latch(1);
        cell_flags_scr();
        return;
    L1349E0:
        cell_cursor_dec();
        txt_cell(0x1441);
        if (io_press(cell_state(0xE3)) == 0)
            goto L134A20;
        row_close2();
        goto L134998;
    L134A20:
        row_close2();
        row_done();
        latch_cur();
        cell_flags_scr();
        return;
    }
}
