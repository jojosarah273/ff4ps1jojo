/* FF4 source-port — interpreted module for fn_1x01350.
 * Ground truth: src/fn_1x01350.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x01350(void)
{
    open_row(0xCD);
    row_page(0xAB);
    if (gate(0x202) != 0)
        goto L1380;
    open_row(0x7B);
L1380:
    row_page(0xAC);
    cell_cur_save54();
    row_page(0x7B);
    if (sel(2) != 0)
        goto L13e0;
    open_row(0xD5);
    return;
L13e0:
    latch(1);
    cell_put(0xD5);
    fn_1x02c30();
    cell_clear_bank(0x1A02);
    txt_set(0x1704);
    if (gate(0x202) != 0)
        goto L1420;
    page_paint2(0x1A02);
L1420:
    txt_set(0x1704);
    io_poll(4);
    if (io_just() == 0)
        goto L14c0;
    txt_set(0x6B7);
    io_poll(0x10);
    if (io_just() == 0)
        goto L14c0;
    txt_set(0x1700);
    io_poll_cur();
    if (io_just() == 0)
        goto L1490;
    latch(0x2D);
    goto L1610;
L1490:
    txt_set(0x1700);
    io_poll(1);
    if (io_just() == 0)
        goto L14c0;
    latch(0x2F);
    goto L1610;
L14c0:
    row_page(0xA2);
    if (gate(0x80) != 0)
        goto L14f0;
    latch(1);
    cell_put(0xD6);
    return;
L14f0:
    txt_set(0x1704);
    if (gate(2) == 0)
        return;
    row_page(0xD6);
    if (gate(0x202) == 0)
        return;
    open_row(0xD6);
    txt_set(0x1700);
    row_sel_cell_cur();
    cell_cur_save54();
    cell_push_c8();
    cell_put(0x3D);
    cell_push_c8();
    cell_put(0x3E);
    page(0x3D);
L1570:
    for (;;) {
        cell_push_c8();
        if (io_press(cell_state(0x1706)) == 0)
            goto L15c8;
        cell_push_c8();
        if (io_press(cell_state(0x1707)) != 0)
            goto L15e4;
    L15c8:
        ;
    }
L15e4:
    cell_push_c8();
    io_poll(0xFF);
    if (io_just() == 0)
        goto L1620;
    cell_push_c8();
L1610:
    battle_item_select_right_side_vari();
    return;
L1620:
    row_open();
    page_open(0x172C);
    txt_set(0x1700);
    if (gate(2) == 0)
        latch(1);
    txt_draw(0x1701);
    txt_set(0x1700);
    sep_a();
    row_open_w(0xFB);
    cell_draw(0x172E);
    cell_push_c8_cur(0x1706);
    cell_draw(0x172F);
    txt_set(0x1707);
    cell_draw(0x1730);
    poll_t(0xC0);
    if (io_go() == 0)
        goto L16cc;
    wnd_open_cur();
L16cc:
    label(0x172C);
    row_close();
    cell_push_c8();
    txt_draw(0x1702);
    cell_push_c8();
    row_read(0x3F);
    txt_draw(0x1706);
    cell_push_c8();
    txt_draw(0x1707);
    cell_push_c8();
    row_read(0xC0);
    txt_draw(0x1705);
    cell_0xfd6b8();
    cell_0xfec74();
    key_page(0xCD);
    latch(3);
    txt_draw(0x1700);
    return;
}
