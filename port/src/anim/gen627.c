/* FF4 source-port — interpreted module for shop_rows_xd4_window_x2115_x6fe_x7.
 * Ground truth: src/shop_rows_xd4_window_x2115_x6fe_x7.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_xd4_window_x2115_x6fe_x7(void)
{
    /* shop rows: 0xD4 window, 0x2115/0x6FE/0x700 texts + 0x6FE/0x6FF
       window rows; gate 6434(0x202). */
    row_page(0xD4);
    if (gate(0x202) == 0)
        return;
    open_row(0xD4);
    latch(0x80);
    txt_draw(0x2115);
    page_open(0x6FE);
    page_open(0x700);
    page_open(0x6FE);
    txt_set_cur();
    sep_a();
    row_open_w(0x20);
    txt_draw(0x6FE);
    txt_set(0x6FF);
    row_open_w0();
    txt_draw(0x6FF);
    page_open(0x6FE);
    page_open(0x704);
    page_open(0x702);
    return;
}
