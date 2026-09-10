/* FF4 source-port — interpreted module for shop_rows_b8_twin_of_x7a_xb8_windo.
 * Ground truth: src/shop_rows_b8_twin_of_x7a_xb8_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_b8_twin_of_x7a_xb8_windo(void)
{
    /* shop rows (B8 twin of 80103310): 0x7A/0xB8 windows,
       80102E78/8017559C rows. */
    open_row(0x7A);
    open_row(0xB8);
L1034F8:
    for (;;) {
        fn_1x02e78();
        row_page(0x79);
        io_poll(0x20);
        if (io_go() != 0)
            goto L103540;
        cell_tick_half();
        txt_draw(0x6FD);
        key_page(0x79);
    }
L103540:
    key_page(0xB8);
    row_page(0xB8);
    sep_a();
    row_open_w(0x10);
    cell_put(0xAD);
    row_page(0xB8);
    shop_buy_list();
    key_page(0x79);
    row_page(0x79);
    io_poll(0x30);
    if (io_just() == 0)
        goto L1034F8;
    return;
}
