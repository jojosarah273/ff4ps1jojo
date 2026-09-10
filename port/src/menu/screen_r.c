/* FF4 source-port — interpreted module for func_800FFEFC.
 * Ground truth: src/func_800FFEFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FFEFC(void)
{
    txt_set(0x1705);
    if (gate(0x202) != 0)
        goto Lf5c;
    row_page(0xA4);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    cell_put(0xC);
    txt_set(0x1707);
    poll_spin();
    goto L014;
Lf5c:
    txt_set(0x1705);
    io_poll(1);
    if (io_just() == 0)
        goto Lfbc;
    row_page(0xA6);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    cell_set50_from40();
    cell_put(0xC);
    txt_set(0x1707);
    goto L014;
Lfbc:
    txt_set(0x1705);
    io_poll(2);
    if (io_just() == 0)
        goto L024;
    row_page(0xA8);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    cell_put(0xC);
    txt_set(0x1707);
    cell_set50_from40();
L014:
    cell_put(0xE);
    goto L064;
L024:
    row_page(0xAA);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    poll_spin();
    cell_put(0xC);
    txt_set(0x1707);
    cell_put(0xE);
L064:
    txt_set(0x711);
    if (gate(0x202) == 0)
        return;
    shop_rows_x1702_x3d_x3e_windows_x1();
    draw_pad_cur();
    page(0x3D);
    for (;;) {
        cell_push_c8();
        if (io_press(cell_state(0xC)) == 0)
            goto L0ec;
        cell_push_c8();
        if (io_press(cell_state(0xE)) != 0)
            goto L140;
    L0ec:
        step2();
        if (io_press(cell_state(0x711)) == 0)
            continue;
        return;
    }
L140:
    tail(0x40);
    sep_a();
    cell_poke0(cell_state(0xFE7));
    txt_draw(0x8FC);
    fn_1x009e8();
    io_poll_cur();
    if (io_just() == 0)
        goto L46c;
    txt_set(0x1705);
    cell_cur_save54();
    txt_cell(0x70C);
    io_poll(0x78);
    if (io_just() == 0)
        goto L250;
    row_page(0xC);
    cell_put(0x3D);
    row_page(0xE);
    cell_put(0x3E);
    page(0x3D);
    latch(0x77);
    cell_pull_c8_off();
    shop_detail_cells_xe_x19_x18_xc_wi();
    label(0x6FE);
    rows_x_f0_cells_x700_x706_texts_vi();
    latch(0x30);
    wnd_fx_pads();
    latch(1);
    cell_put(0xD4);
    latch(1);
    cell_put(0xB2);
    goto L270;
L250:
    latch(0x16);
    cell_put(0xB2);
    latch(0x37);
    wnd_fx_pads();
L270:
    page(0x40);
    cell_push_c8();
    cell_put(9);
    cell_push_c8();
    cell_put(8);
    row_page(9);
    row_read(0x40);
    if (sel(2) != 0)
        goto L374;
    row_page(8);
    cell_put(0xC6);
    txt_set(0x1701);
    cell_put(8);
    row_page(9);
    row_read(0x1F);
    sep_a();
    cell_poke0(cell_state(8));
    sep_a();
    row_open_w(0xC0);
    txt_draw(0x1800);
    latch(1);
    txt_draw(0x1801);
    func_800FD404();
    latch(1);
    cell_put(0x85);
    latch(3);
    cell_put(0xB2);
    goto L44c;
L374:
    row_page(9);
    row_read(0x80);
    if (sel(2) != 0)
        goto L3cc;
    row_page(8);
    txt_draw(0x8FB);
    fn_1x082c8();
    config_sub_screen();
    config_confirm_loop_a();
    battle_help_dialog_x8fb_header_x18();
    return;
L3cc:
    key_page(0xB2);
    row_page(8);
    row_read(0x7F);
    cell_put(0x18);
    open_row(0x19);
    row_page(8);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto L424;
    wnd_open(0xA);
    goto L42c;
L424:
    wnd_open(0x3E8);
L42c:
    tail(0x1A);
    fn_1x74f0c();
    fn_1x196b0();
    battle_stats_x16a0_x16a2_texts_x30();
L44c:
    fn_1x082c8();
    config_sub_screen();
    config_confirm_loop_a();
    return;
L46c:
    txt_set(0x1705);
    cell_cur_save54();
    txt_cell(0x70C);
    io_poll(0x77);
    if (io_just() == 0)
        return;
    latch(4);
    cell_put(0xB2);
    fn_1x082c8();
    config_sub_screen();
    config_confirm_loop_a();
    return;
}
