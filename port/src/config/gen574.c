/* FF4 source-port — interpreted module for rows_x29_window_cells_x5a_x5b_x5d.
 * Ground truth: src/rows_x29_window_cells_x5a_x5b_x5d.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x29_window_cells_x5a_x5b_x5d(void)
{
    /* rows: 0x29 window cells, 0x5A/0x5B/0x5D/0x5E windows,
       8011F3F8 row; ends on 0x95A0+8960 writes. */
    stat_sync();
    latch_cur();
    stat_sync();
    row_open();
    row_prep_close();
    row_sync();
    shared_scroll_column_x5a_window_x3();
    row_prep(0x20);
    cell_cursor_adv2();
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_page(0x5A);
    cell_pull_c8();
    row_page(0x5B);
    cell_pull_c8(2);
    row_page(0x5D);
    cell_pull_c8(4);
    row_page(0x5E);
    cell_pull_c8(6);
    row_close();
    return;
}
