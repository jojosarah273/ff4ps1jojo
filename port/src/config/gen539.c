/* FF4 source-port — interpreted module for options_seed_row_x393b_x393a_texts.
 * Ground truth: src/options_seed_row_x393b_x393a_texts.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_seed_row_x393b_x393a_texts(void)
{
    /* options seed row: 0x393B/0x393A texts, 0xA9/0xAD/0xAB windows,
       80152EAC/8015CC80 rows; 5C64(2) gate. */
    row_open();
    txt_set(0x393B);
    cell_tick_or(cell_state(0x393A));
    fn_1x52eac();
    cell_set50_from54();
    if (poll_go(2) != 0)
        goto L15CC68;
    sep();
    txt_set(0x393B);
    cell_put(0xA9);
    cell_put(0xAD);
    wnd_open(5);
    tail(0xAB);
    options_save_row_xaa_window_xa9_x2();
    row_page(0xAD);
    txt_draw(0x393B);
    txt_set(0x393A);
    cell_put(0xA9);
    cell_put(0xAD);
    wnd_open(0xD);
    tail(0xAB);
    options_save_row_xaa_window_xa9_x2();
    row_page(0xAD);
    txt_draw(0x393A);
    return;
L15CC68:
    row_close();
    return;
}
