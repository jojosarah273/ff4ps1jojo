/* FF4 source-port — interpreted module for shop_rows_x88_window_x2100_x2115_t.
 * Ground truth: src/shop_rows_x88_window_x2100_x2115_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x88_window_x2100_x2115_t(void)
{
    /* shop rows: 0x88 window + 0x2100/0x2115 titles; linear. */
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    latch(0x80);
    txt_draw(0x2100);
    cell_put(0x88);
    latch(0x80);
    txt_draw(0x2115);
    row_pad();
    return;
}
