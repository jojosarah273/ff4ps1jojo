/* FF4 source-port — interpreted module for fn_1x2ec48.
 * Ground truth: src/fn_1x2ec48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x2ec48(void)
{
    cell_clear_bank(0x1B27);
    fn_1x22ff4();
    row_page(0xE8);
    if (gate(0x8080) == 0)
        return;
    row_page(0xE8);
    midrow_prep_a();
    if (io_just() != 0)
        return;
    row_open();
    fn_1x77224();
    row_close();
    txt_cell(3);
    txt_draw(0x1A86);
    row_read(0xC4);
    if (sel(0x202) != 0)
        goto L3d0;
    txt_cell(1);
    row_read(0xF);
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    battle_put43();
    cell_push_c8();
    func_800F4A7C();
    func_800F4A7C();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L3d0;
    row_open();
    midrow_paint_c();
    row_page(0xE8);
    fn_1x22cf0();
    midrow_pad88_run();
    fn_1x24158();
    func_80122844();
    config_row_26528();
    latch(0x20);
    cell_put(0x3F);
    config_row_d600b();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad(0xDBAB);
    draw_pad_cur();
    wnd_open_cur();
    v0_s0_branch();
    wnd_open(0x952E);
    tail(0xD0);
    wnd_open(0x824F);
    tail(0xCD);
    row_page(0xE8);
    row_picker_x60_x61_windows_x45_x43();
    row_prep(0x20);
    row_prep_close();
    cell_put(0xBA);
    stat_sync();
    cell_put(0xBC);
    open_row(0xB9);
    open_row(0xBB);
    latch(0x28);
    cell_put(0xC2);
    cell_put(0xD2);
    latch(0xC8);
    cell_put(0xB3);
    cell_put(0xBD);
    latch(0x81);
    cell_put(0xB4);
    cell_put(0xBE);
    row_page(0xE7);
    cell_put(0xB7);
    cell_put(0xC0);
    latch(0x68);
    cell_put(0xB0);
    latch(4);
    cell_put(0xAE);
    latch(0x34);
    cell_put(0xAD);
    row_page(0xE8);
    cell_put(0xD3);
    row_close();
    cell_push_c8();
    txt_draw(0x1B7E);
    if (gate(0x80) != 0)
        goto Lf4c;
    draw_pad(0xB214);
    goto Lf54;
Lf4c:
    draw_pad(0xB234);
Lf54:
    battle_rows_29();
    cell_push_c8();
    txt_draw(0x1B7F);
    if (gate(0x80) != 0)
        goto Lf90;
    draw_pad(0xB21C);
    goto Lf98;
Lf90:
    draw_pad(0xB23C);
Lf98:
    battle_rows_29();
    cell_push_c8();
    txt_draw(0x1B80);
    if (gate(0x80) != 0)
        goto Lfd4;
    draw_pad(0xB224);
    goto Lfdc;
Lfd4:
    draw_pad(0xB244);
Lfdc:
    battle_rows_29();
    row_page(0xE8);
    midrow_prep_a();
    io_poll(0x12);
    if (io_just() == 0)
        goto L01c;
    draw_pad(0xB22C);
    battle_rows_29();
L01c:
    config_row_b600();
    draw_pad_cur();
    battle_rows_sync();
L03c:
    for (;;) {
        txt_set(0x1B81);
        battle_put43();
        txt_cell(0x1B7E);
        if (gate(0x8080) != 0)
            break;
        txt_set(0x1B81);
        cell_set50_from40();
        io_poll(3);
        if (io_just() == 0)
            goto L094;
        latch(0);
    L094:
        txt_draw(0x1B81);
    }
    page_paint2(0x1B87);
    func_8012F9D0();
    cell_clear_bank(0x1B87);
    wnd_open(0xFF18);
    tail(0x93);
    shop_row_kick_f0();
    latch(5);
    cell_put(0xAB);
    latch(0x9A);
    cell_put(0xAA);
    func_80126458();
    midrow_paint_b();
    func_801228B4();
    row_page(0xE7);
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    row_prep_close();
    draw_pad_cur();
    v0_s0_branch();
    func_8012F3F0();
    latch(0x30);
    cell_put(0x3F);
    midrow_paint_c();
    config_row_d600b();
    draw_pad(0x20A);
    latch(0xD);
    sep_b();
    func_801222A4();
    config_row_264e8();
    anim_noop();
    latch(0x28);
    cell_put(0xC2);
    latch(1);
    cell_put(0xB4);
    row_page(0xE7);
    cell_put(0xB7);
    cell_put(0xC0);
    latch(0x68);
    cell_put(0xB0);
    latch(0x84);
    cell_put(0xAE);
    latch(0x34);
    cell_put(0xAD);
    latch(6);
    cell_put(0xAB);
    midrow_paint_b();
    row_page(0xE7);
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    row_prep_close();
    wnd_open_cur();
    v0_s0_branch();
    fn_1x240d0();
    rows_x100_x1c_x41_windows_f0_x89_c();
    func_80126458();
    shop_row_kick_f0();
    config_row_d600b();
    draw_pad_cur();
    wnd_open_cur();
    v0_s0_branch();
    config_rows_c_e2c_ef30_f1c_fb74_ro();
    config_row_26528();
    config_row_d600b();
    battle_row_45b();
    fn_1x77284();
    return;
L3d0:
    func_8012EBF8();
    return;
}
