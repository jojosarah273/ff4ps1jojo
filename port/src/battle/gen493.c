/* FF4 source-port — interpreted module for shop_rows_x7a_xb9_windows_e78_rows.
 * Ground truth: src/shop_rows_x7a_xb9_windows_e78_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x7a_xb9_windows_e78_rows(void)
{
    /* shop rows: 0x7A/0xB9 windows, 80102E78 rows, 6FB/AD cells,
       8017559C / 801038D4 / 80103790 sub-screens; loops L103678 and
       L1036C0 chain. */
    open_row(0x7A);
    open_row(0xB9);
L103678:
    for (;;) {
        fn_1x02e78();
        row_page(0x79);
        io_poll(0x20);
        if (io_go() != 0)
            goto L1036C0;
        cell_tick_half();
        txt_draw(0x6FD);
        key_page(0x79);
    }
L1036C0:
    key_page(0xB9);
    key_page(0xB9);
    row_page(0xB9);
    sep_a();
    row_open_w(0x10);
    cell_put(0xAD);
    row_page(0xB9);
    cell_tick_half();
    shop_buy_list();
    key_page(0x79);
    row_page(0x79);
    io_poll(0x30);
    if (io_just() == 0)
        goto L103678;
    txt_set(0x6C3);
    if (gate(0x202) == 0)
        return;
    cell_clear_bank(0x6C3);
    txt_set(0x1700);
    if (gate(2) != 0)
        goto L103778;
    shop_buy_rows_x1706_x170c_texts_x5();
    return;
L103778:
    shop_rows_alt_of_d4_x1706_x1708_x5();
    return;
}
