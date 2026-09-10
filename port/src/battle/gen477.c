/* FF4 source-port — interpreted module for column_cells_x30_x2f_x2d_x31_windo.
 * Ground truth: src/column_cells_x30_x2f_x2d_x31_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void column_cells_x30_x2f_x2d_x31_windo(void)
{
    /* column cells: 0x30/0x2F/0x2D/0x31 windows, 80122334 row;
       loop L11F178 on 5DA0(0x31)/5B8C(0x202). */
    row_sync();
    cell_put(0x30);
    row_page(0x30);
    cell_pull_c8();
    step2();
    row_page(0x2F);
    cell_pull_c8();
    step2();
    row_page(0x2D);
    cell_put(0x31);
    key_page(0x30);
L11f178:
    for (;;) {
        row_page(0x30);
        cell_pull_c8();
        step2();
        row_page(0x2F);
        cell_pull_c8();
        step2();
        poll_pair(0x31);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    key_page(0x30);
    row_page(0x30);
    cell_pull_c8();
    step2();
    row_page(0x2F);
    cell_pull_c8();
    row_done();
    rows_u16_d44_d58_swap_with_c_prep();
    return;
}
