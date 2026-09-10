/* FF4 source-port — interpreted module for shop_rows_x7a_xb7_windows_e78_c_ro.
 * Ground truth: src/shop_rows_x7a_xb7_windows_e78_c_ro.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x7a_xb7_windows_e78_c_ro(void)
{
    /* shop rows: 0x7A/0xB7 windows, 80102E78/8017559C rows; loops
       L103328 and L103370 (4008(0x10) reads). */
    open_row(0x7A);
    open_row(0xB7);
L103328:
    for (;;) {
        fn_1x02e78();
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
