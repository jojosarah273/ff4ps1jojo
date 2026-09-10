/* FF4 source-port — interpreted module for shop_status_x48_x49_windows_c_rows.
 * Ground truth: src/shop_status_x48_x49_windows_c_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_status_x48_x49_windows_c_rows(void)
{
    /* shop/status: 0x48/0x49 windows, 80127718/8012833C rows; loop
       L1284A0 on 5574(4); 0x1000/0x7FF/0x7E70 gates. */
    fn_1x27718();
    open_row(0x48);
    open_row(0x49);
L1284a0:
    for (;;) {
        row_page(0x48);
        shop_rows_x51_x46_x45_windows_d8_r();
        if (io_go() != 0)
            goto L128558;
        row_prep(0x20);
        row_open2();
        row_read2(0x48);
        stat_sync();
        row_sync();
        wnd_open(0x1000);
        row_sync2(0x7FF);
        battle_wait_just(0x7E70);
        row_close();
        row_sync2(0x2000);
        cell_stamp8_9(0x6AA);
        row_pad();
        row_prep_close();
    L128558:
        row_page(0x48);
        cell_set50_from40();
        cell_put(0x48);
        io_poll(4);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
