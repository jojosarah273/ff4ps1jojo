/* FF4 source-port — interpreted module for shop_sell_rows_xab_xd2_windows_x6a.
 * Ground truth: src/shop_sell_rows_xab_xd2_windows_x6a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_sell_rows_xab_xd2_windows_x6a(void)
{
    /* shop sell rows: 0xAB/0xD2 windows, 0x6A1/0x6A1 texts + 0x1706/
       0x1707 texts with 0xC/0xE/0xAE windows, 8010D4EC row;
       4120(2) gates. */
    row_page(0xAB);
    row_sel_cell_cur();
    cell_cur_save58();
    cell_push_c8_d58(0x6A1);
    row_read(4);
    if (sel(2) != 0)
        goto L105100;
    cell_push_c8_d58(0x6A1);
    row_read(3);
    cell_tick_and(0xD2);
    if (sel(2) != 0)
        return;
L105100:
    row_page(0xAB);
    cell_cur_save58();
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    latch(0xFF);
    cell_put(0xAE);
    fn_1x0d4ec();
    return;
}
