/* FF4 source-port — interpreted module for status_rows_x73_x74_windows_xa_xc.
 * Ground truth: src/status_rows_x73_x74_windows_xa_xc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void status_rows_x73_x74_windows_xa_xc(void)
{
    /* status rows: 0x73/0x74 windows, 0xA/0xC/0x5A/0x5B/0x5D/0x5E
       cells, 80123958/8011F360/8011F3F8 rows. */
    row_sync();
    cell_put(0x73);
    tail(0x74);
    row_open2();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    rows_x1d_window_x73_x75_windows_wi();
    rows_x1d_window_x73_x75_windows_wi();
    page(0x73);
    row_page(0x1D);
    rows_x45_window_loop_l11f370_on_c0();
    io_poll(0xFF);
    if (io_just() == 0)
        goto L1275C0;
    latch(0x80);
L1275C0:
    cell_pull_c8(0xA);
    stat_sync();
    cell_pull_c8(0xC);
    row_prep(0x20);
    row_read2(0x73);
    row_prep_close();
    shared_scroll_column_x5a_window_x3();
    row_page(0x5A);
    cell_pull_c8();
    row_page(0x5B);
    cell_pull_c8(2);
    row_page(0x5D);
    cell_pull_c8(4);
    row_page(0x5E);
    cell_pull_c8(6);
    latch(0xC8);
    cell_pull_c8(8);
    row_pad();
    row_done();
    return;
}
