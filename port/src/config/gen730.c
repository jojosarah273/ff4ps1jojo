/* FF4 source-port — interpreted module for rows_x16a4_x73_x16a5_x74_texts_win.
 * Ground truth: src/rows_x16a4_x73_x16a5_x74_texts_win.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x16a4_x73_x16a5_x74_texts_win(void)
{
    /* rows: 0x16A4/0x73/0x16A5/0x74 texts/windows, 80123958 (x2) +
       80123908/8011F360/80123878 rows; 53C0 gate. */
    txt_set(0x16A4);
    cell_put(0x73);
    page_open(0x16A5);
    tail(0x74);
    rows_x1d_window_x73_x75_windows_wi();
    rows_x1d_window_x73_x75_windows_wi();
    page(0x73);
    poll_t(0x3E7);
    if (io_go() == 0)
        goto L123828;
    draw_pad_cur();
    fn_1x23908();
    row_page(0x5B);
    cell_pull_c8(0x56C);
    return;
L123828:
    cell_fmt2(0x41);
    row_page(0x1D);
    rows_x45_window_loop_l11f370_on_c0();
    io_poll(0xFF);
    if (io_just() == 0)
        goto L123860;
    latch(0x80);
L123860:
    fn_1x23878();
    return;
}
