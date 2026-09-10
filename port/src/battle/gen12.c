/* FF4 source-port — interpreted module for fn_1x06370.
 * Ground truth: src/fn_1x06370.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x06370(void)
{
L378:
    for (;;) {
        row_page(0xCC);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    latch(1);
    cell_put(0xDA);
    cell_put(0xEB);
    open_row(0xBA);
    open_row(0x8B);
    open_row(0x8C);
    latch(0x70);
    cell_put(0xBB);
    config_rows_x712_x1440_x1441_texts();
    wnd_fx_7d();
    fn_1x07830();
L3e8:
    wnd_fx_7d();
    for (;;) {
        row_page(0x7F);
        io_poll(2);
        if (io_just() != 0)
            break;
    }
    key_page(0xDA);
    row_page(0xDA);
    io_poll(8);
    if (io_just() == 0)
        goto L3e8;
L438:
    wnd_fx_7d();
L440:
    for (;;) {
        latch(1);
        cell_put(0x7D);
        row_page(3);
        row_read(0x80);
        if (sel(2) != 0)
            goto L488;
        fn_1x06830();
        latch(0xFF);
        goto L508;
    L488:
        row_page(2);
        row_read(0x80);
        if (sel(2) != 0)
            goto L518;
        fn_1x06830();
        row_page(0xBA);
        sep_a();
        cell_poke0(cell_state(0x8C));
        row_sel_cell_cur();
        sep_a();
        cell_poke0(cell_state(0x8B));
        row_sel_cell_cur();
        cell_cur_save54();
        txt_cell(0x712);
    L508:
        txt_draw(0x8FB);
        goto L7b8;
    L518:
        row_page(3);
        row_read(1);
        if (sel(2) != 0)
            goto L5a8;
        fn_1x06860();
        key_page(0xE7);
        row_page(0x8B);
        cell_set50_from40();
        row_read(1);
        cell_put(0x8B);
        if (sel(0x202) != 0)
            goto L438;
        row_page(0x8C);
        io_poll(3);
        if (io_just() != 0)
            goto L6a8;
        cell_set50_from40();
        goto L628;
    L5a8:
        row_page(3);
        row_read(2);
        if (sel(2) != 0)
            goto L638;
        fn_1x06860();
        key_page(0xE7);
        row_page(0x8B);
        poll_spin();
        row_read(1);
        cell_put(0x8B);
        if (sel(2) != 0)
            goto L438;
        row_page(0x8C);
        if (gate(2) != 0)
            goto L770;
        poll_spin();
    L628:
        cell_put(0x8C);
        goto L438;
    L638:
        row_page(0x8C);
        io_poll(3);
        if (io_just() != 0)
            goto L688;
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L6f8;
        key_page(0x8C);
        goto L738;
    L688:
        row_page(3);
        row_read(4);
        if (sel(2) != 0)
            goto L6f8;
    L6a8:
        row_page(0xBA);
        io_poll(0x11);
        if (io_just() != 0)
            goto L438;
        key_page(0xE7);
        key_page(0xBA);
        fn_1x06830();
        fn_1x07830();
        fn_1x06908();
        goto L440;
    L6f8:
        row_page(0x8C);
        if (gate(0x202) == 0)
            goto L750;
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L438;
        poll_pair(0x8C);
    L738:
        key_page(0xE7);
        fn_1x06860();
        goto L438;
    L750:
        row_page(3);
        row_read(8);
        if (sel(2) != 0)
            goto L438;
    L770:
        row_page(0xBA);
        if (gate(0x202) == 0)
            goto L438;
        key_page(0xE7);
        poll_pair(0xBA);
        fn_1x06830();
        fn_1x07830();
        fn_1x068b0();
        goto L440;
    }
L7b8:
    wnd_fx_7d();
    for (;;) {
        row_page(0x7F);
        io_poll(2);
        if (io_just() != 0)
            break;
    }
    poll_pair(0xDA);
    row_page(0xDA);
    io_poll_cur();
    if (io_just() == 0)
        goto L7b8;
    latch(1);
    cell_put(0xEC);
    open_row(0xDA);
    return;
}
