/* FF4 source-port — interpreted module for shop_buy_rows_x1705_x7a_x79_window.
 * Ground truth: src/shop_buy_rows_x1705_x7a_x79_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_buy_rows_x1705_x7a_x79_window(void)
{
    /* shop buy rows: 0x1705/0x7A/0x79 windows, 0x6F8/0x1701/0x171B/
       0x1706/0x1719 texts, 800FF024 row; loop L104724 on 5574
       keys. */
    latch(3);
    txt_draw(0x1705);
    open_row(0x7A);
    open_row(0x79);
L104724:
    for (;;) {
        cell_clear_pad();
        shop_buy_run();
        row_page(0x79);
        cell_cur_save54();
        txt_draw(0x6F8);
        shop_view_run();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x20);
        if (io_just() == 0)
            goto L1047D4;
        cell_clear_bank(0x6D0);
        txt_set(0x1701);
        txt_draw(0x171B);
        page_open(0x1706);
        label(0x1719);
    L1047D4:
        row_page(0x79);
        io_poll(0x40);
        if (io_just() != 0)
            break;
    }
    return;
}
