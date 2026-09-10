/* FF4 source-port — interpreted module for fn_1x00d50.
 * Ground truth: src/fn_1x00d50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x00d50(void)
{
    open_row(0xCD);
    row_page(0xAB);
    if (gate(0x202) != 0)
        goto Ld80;
    open_row(0x7B);
Ld80:
    row_page(0xAC);
    cell_cur_save54();
    row_page(0x7B);
    if (sel(2) != 0)
        goto Lde0;
    open_row(0xD5);
    return;
Lde0:
    latch(1);
    cell_put(0xD5);
    fn_1x02c30();
    row_page(0xA1);
    row_read(8);
    txt_draw(0x1A02);
    txt_set(0x1706);
    if (gate(0x80) != 0)
        goto L1214;
    io_poll(0x20);
    if (io_go() != 0)
        goto L1214;
    txt_set(0x1707);
    if (gate(0x80) != 0)
        goto L1214;
    io_poll(0x20);
    if (io_go() != 0)
        goto L1214;
    row_page(0xA2);
    if (gate(0x80) != 0)
        goto Lee0;
    row_page(0xA2);
    row_read(0x10);
    if (sel(0x202) != 0)
        goto Lee0;
    row_page(0xA1);
    row_read(8);
    if (sel(0x202) != 0)
        goto Lee0;
    latch(1);
    cell_put(0xD6);
    return;
Lee0:
    row_page(0xD6);
    if (gate(0x202) == 0)
        return;
    open_row(0xD6);
    row_page(0xA1);
    row_read(8);
    if (sel(2) != 0)
        goto Lf6c;
    latch(1);
    cell_put(0xB1);
    latch_cur();
    fn_1x163e8();
    open_row(0xB1);
    return;
Lf6c:
    row_page(0xA2);
    if (gate(0x80) == 0)
        goto L1214;
    txt_set(0x1702);
    cell_put(0x3D);
    open_row(0x3E);
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    txt_set(0x1701);
    if (gate(2) != 0)
        goto Lfec;
    key_page(0x3E);
    key_page(0x3E);
Lfec:
    page(0x3D);
    cell_push_c8();
    cell_put(0x3D);
    cell_push_c8();
    cell_put(0x3E);
    page(0x3D);
L1024:
    for (;;) {
        cell_push_c8();
        if (io_press(cell_state(0x1706)) == 0)
            goto L107c;
        cell_push_c8();
        if (io_press(cell_state(0x1707)) != 0)
            goto L1098;
    L107c:
        ;
    }
L1098:
    cell_push_c8();
    io_poll(0xFF);
    if (io_just() == 0)
        goto L10d8;
    cell_push_c8();
    battle_item_select_right_side_vari();
    return;
L10d8:
    shop_own_row_x172c_text_x1700_x170();
    cell_push_c8();
    io_poll(0xFB);
    if (io_go() == 0)
        goto L1190;
    row_open();
    cell_0xfd6b8();
    cell_0xfec74();
    row_close();
    cell_push_c8();
    sep_b();
    cell_pos_back(0xFB);
    txt_draw(0x1700);
    cell_push_c8();
    txt_draw(0x1706);
    cell_push_c8();
    txt_draw(0x1707);
    key_page(0xCD);
    wnd_open_cur();
    label(0x172C);
    return;
L1190:
    txt_draw(0x1702);
    cell_push_c8();
    row_read(0x3F);
    txt_draw(0x1706);
    cell_push_c8();
    row_read(0xC0);
    txt_draw(0x1705);
    cell_push_c8();
    txt_draw(0x1707);
    cell_0xfec74();
    latch(3);
    txt_draw(0x1700);
L1214:
    key_page_cur();
    return;
}
