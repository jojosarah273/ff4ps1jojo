/* FF4 source-port — interpreted module for func_80103310.
 * Ground truth: src/func_80103310.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80103310(void)
{
    /* shop rows: 0x7A/0xB7 windows, 80102E78/8017559C rows; loops
       L103328 and L103370 (4008(0x10) reads). */
    open_row(0x7A);
    open_row(0xB7);
L103328:
    for (;;) {
        func_80102E78();
        row_page(0x79);
        io_poll(0x20);
        if (io_go() != 0)
            goto L103370;
        cell_tick_half();
        txt_draw(0x6FD);
        key_page(0x79);
    }
L103370:
    key_page(0xB7);
    row_page(0xB7);
    sep_a();
    row_open_w(0x10);
    cell_put(0xAD);
    row_page(0xB7);
    shop_buy_list();
    key_page(0x79);
    row_page(0x79);
    io_poll(0x30);
    if (io_just() == 0)
        goto L103328;
    return;
}
