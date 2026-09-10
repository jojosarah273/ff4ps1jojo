/* FF4 source-port — interpreted module for column_rows_x29_x2b_x31_x33_window.
 * Ground truth: src/column_rows_x29_x2b_x31_x33_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void column_rows_x29_x2b_x31_x33_window(void)
{
    /* column rows: 0x29/0x2B/0x31/0x33 windows, 0xF7/0xFC codes,
       8011F118/8011F210 rows; loop L11F0D8 on 5DA0(0x32). */
    row_prep(0x20);
    row_read2(0x29);
    sep_a();
    cell_peek0(cell_state(0x2B));
    row_read2(0x2D);
    cell_put_hi9(0x31);
    row_prep_close();
    latch(0xF7);
    column_cells_x30_x2f_x2d_x31_windo();
    cell_cursor_dec();
    row_page(0x33);
    if (gate(2) != 0)
        goto L11F0D0;
    row_close2();
    return;
L11F0D0:
    row_close2();
L11f0d8:
    for (;;) {
        func_8011F210();
        poll_pair(0x32);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0xFC);
    column_cells_x30_x2f_x2d_x31_windo();
    return;
}
