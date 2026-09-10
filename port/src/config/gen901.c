/* FF4 source-port — interpreted module for rows_x29_window_c_bc_fills_loop_l1.
 * Ground truth: src/rows_x29_window_c_bc_fills_loop_l1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x29_window_c_bc_fills_loop_l1(void)
{
    /* rows: 0x29 window, 885C/63BC fills; loop L12244C on
       6434(2). */
    row_open2();
    row_pad();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
L12244c:
    for (;;) {
        if (gate(2) != 0)
            goto L1224B8;
        cell_pull_c8_off();
        step2();
    }
L1224B8:
    row_pad();
    return;
}
