/* FF4 source-port — interpreted module for fn_1x04934.
 * Ground truth: src/fn_1x04934.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x04934(void)
{
    row_page(0xD5);
    if (gate(0x202) == 0)
        return;
    open_row(0xC4);
    fn_1x02c30();
    row_page(0xB1);
    if (gate(2) == 0) {
        row_page(4);
        cell_put(2);
        row_page(5);
        cell_put(3);
    }
    row_page(0xA1);
    row_read(4);
    if (sel(0x202) == 0) {
        row_page(0xA1);
        row_read(3);
        cell_put(0xD2);
    }
    fn_1x051a8();
    row_page(0xA1);
    row_read(3);
    sep_a();
    row_open_w(4);
    cell_put(0xA);
    row_page(3);
    row_read(1);
    if (sel(2) != 0)
        goto La84;
    row_page(0xCF);
    if (gate(0x202) != 0)
        goto La4c;
    latch(1);
    txt_draw(0x1705);
La4c:
    latch(2);
    txt_draw(0x709);
    fn_1x048ec();
    shop_sell_rows_xb1_xa1_xd2_windows();
    io_poll_cur();
    if (io_just() != 0)
        goto Lc34;
La84:
    row_page(3);
    row_read(2);
    if (sel(2) != 0)
        goto Lb04;
    row_page(0xCF);
    if (gate(0x202) != 0)
        goto Lacc;
    latch(3);
    txt_draw(0x1705);
Lacc:
    latch(4);
    txt_draw(0x709);
    fn_1x048ec();
    shop_sell_rows_xb1_xa1_xd2_windows();
    io_poll_cur();
    if (io_just() != 0)
        goto Lc34;
Lb04:
    row_page(3);
    row_read(4);
    if (sel(2) != 0)
        goto Lb84;
    row_page(0xCF);
    if (gate(0x202) != 0)
        goto Lb4c;
    latch(2);
    txt_draw(0x1705);
Lb4c:
    latch(3);
    txt_draw(0x709);
    fn_1x048ec();
    shop_sell_rows_xb1_xa1_xd2_windows();
    io_poll_cur();
    if (io_just() != 0)
        goto Lc34;
Lb84:
    row_page(3);
    row_read(8);
    if (sel(2) != 0)
        goto Lc04;
    row_page(0xCF);
    if (gate(0x202) != 0)
        goto Lbcc;
    latch_cur();
    txt_draw(0x1705);
Lbcc:
    latch(1);
    txt_draw(0x709);
    fn_1x048ec();
    shop_sell_rows_xb1_xa1_xd2_windows();
    io_poll_cur();
    if (io_just() != 0)
        goto Lc34;
Lc04:
    open_row(0xAB);
    shop_sell_rows_xab_xd2_windows_x6a();
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto Ld8c;
    return;
Lc34:
    row_page(0xE0);
    if (gate(0x202) != 0)
        goto Lc9c;
    txt_set(0x709);
    cell_put(0xAB);
    shop_sell_rows_xab_xd2_windows_x6a();
    row_page(0xEA);
    if (gate(0x202) != 0)
        goto Lc84;
    key_page(0xEA);
Lc84:
    row_page(0xB1);
    if (gate(2) == 0)
        goto Ld8c;
Lc9c:
    row_page(0xAB);
    cell_tick_half();
    if (cell_flags_nz50(0x101) != 0)
        goto Ld8c;
    io_poll_cur();
    if (io_just() == 0)
        goto Ld34;
    txt_set(0x70C);
    io_poll(0x70);
    if (io_just() != 0)
        goto Ld0c;
    io_poll(0x71);
    if (io_just() == 0)
        goto Ld8c;
Ld0c:
    txt_set(0x1707);
    poll_spin();
    cell_put(0xE);
    fn_1x04db4();
    goto Ld8c;
Ld34:
    txt_set(0x70E);
    io_poll(0x70);
    if (io_just() != 0)
        goto Ld6c;
    io_poll(0x71);
    if (io_just() == 0)
        goto Ld8c;
Ld6c:
    txt_set(0x1707);
    cell_set50_from40();
    cell_put(0xE);
    fn_1x04db4();
Ld8c:
    cell_0xffb5c();
    cell_0xffcac();
    fn_1x1c768();
    return;
}
