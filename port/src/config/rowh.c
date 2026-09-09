/* FF4 source-port — interpreted module for func_8012B190.
 * Ground truth: src/func_8012B190.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED58[8];
extern u32 D_8019EF0C[8];
extern u32 D_800D1E05[8];
void func_8012B190(void)
{
    txt_set(0x1B23);
    sep_a();
    cell_poke0(cell_state(0x1B1A));
    if (io_press(cell_state(0x1B25)) == 0)
        goto L410;
    txt_set(0x1B22);
    if (io_press(cell_state(0x1B24)) == 0)
        goto L410;
    txt_set(0x1B25);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B24));
    row_sel_cell_cur();
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    txt_cell(0x1441);
    if (gate(2) != 0)
        goto L814;
    txt_cell(0x1440);
    io_poll(0xFE);
    if (io_just() == 0)
        goto L2B8;
    latch(0x63);
    cell_put(0xE3);
    wnd_open(0x1440);
    func_8012E844();
    config_row_221ec();
    return;
L2B8:
    func_8012AE00();
    row_page(0x60);
    row_read(8);
    if (sel(0x202) != 0)
        goto L38C;
    txt_cell(0x1440);
    txt_draw(0x1B3B);
    label(0x1B3C);
    *(u8 *)D_800D1E05[0] = *(u8 *)D_8019EF0C[0];
    io_poll(0xED);
    if (io_just() == 0)
        goto L35C;
    func_800F5B2C(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    if (poll_go(0x202) != 0)
        goto L850;
    page_paint(0x1440);
    goto L850;
L35C:
    io_poll(0xCE);
    if (io_go() == 0)
        goto L38C;
    io_poll(0xEB);
    if (io_go() == 0)
        goto L690;
L38C:
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
L3C0:
    func_801263F0();
    func_8011FF40();
    func_8012B0B0();
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    return;
L410:
    func_8012B0B0();
    txt_set(0x1B23);
    sep_a();
    cell_poke0(cell_state(0x1B1A));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B22));
    row_sel_cell_cur();
    cell_put(0x45);
    open_row(0x46);
    cell_fmt2(0x45);
    txt_set(0x1B25);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B24));
    row_sel_cell_cur();
    cell_put(0x45);
    page(0x45);
    cell_push_c8_d58(0x1440);
    io_poll(0xFF);
    if (io_just() == 0)
        goto L560;
    txt_cell(0x1440);
    if (gate(2) != 0)
        goto L560;
    io_poll(0xED);
    if (io_just() != 0)
        goto L670;
    io_poll(0x19);
    if (io_just() != 0)
        goto L550;
    io_poll(0xC8);
    if (io_just() != 0)
        goto L550;
    io_poll(0xEC);
    if (io_go() == 0)
        goto L670;
L550:
    func_8012219C();
    goto L5F8;
L560:
    txt_cell(0x1440);
    if (io_press(cell_state(0x1440 + *(u16 *)D_8019ED58[0])) != 0)
        goto L620;
L598:
    txt_cell(0x1440);
    cell_cursor_dec();
    txt_cell(0x1441);
    cell_cursor_dec();
    cell_push_c8_d58(0x1440);
    cell_draw(0x1440);
    cell_push_c8_d58(0x1441);
    cell_draw(0x1441);
    row_close2();
    cell_pull_c8(0x1441);
    row_close2();
    cell_pull_c8(0x1440);
L5F8:
    func_80120FBC();
    func_8012AAC0();
    func_8012B0B0();
    midrow_paint_a();
    return;
L620:
    cell_push_c8_d58(0x1441);
    sep_a();
    cell_poke0(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    io_poll(0x64);
    if (io_go() != 0)
        goto L598;
    cell_pull_c8(0x1441);
L670:
    latch_cur();
    cell_draw(0x1440);
    cell_draw(0x1441);
    goto L5F8;
L690:
    io_poll(0xDE);
    if (io_just() != 0)
        goto L6F0;
    io_poll(0xE2);
    if (io_go() != 0)
        goto L6F0;
    func_8012BAF8();
    row_page(0xE8);
    if (gate(0x80) != 0)
        goto L7DC;
    cell_cur_save54_b();
    tail(0x60);
L6F0:
    page_open(0x1B3C);
    func_800F5B2C(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    if (poll_go(0x202) != 0)
        goto L730;
    page_paint(0x1440);
L730:
    txt_set(0x1B3B);
    sep_b();
    cell_pos_back(0xCE);
    wnd_open(0xA67C);
    func_80120070();
    txt_set(0x1B3B);
    io_poll(0xDE);
    if (io_just() != 0)
        goto L7DC;
    io_poll(0xE2);
    if (io_go() != 0)
        goto L7DC;
    txt_set(0x1A82);
    if (gate(0x202) != 0)
        goto L7DC;
    func_8012BA14();
    func_801263F0();
    func_8011FF40();
L7DC:
    cell_clear_bank(0x1A82);
    func_8012102C();
    draw_pad_cur();
    func_8011FB74();
    func_801263F0();
    return;
L814:
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    goto L3C0;
L850:
    txt_set(0x1E05);
    cell_cursor_dec();
    cell_clear_bank(0x1B19);
    latch(1);
    txt_draw(0x1A88);
    page(0x93);
    label(0x1BA5);
    latch(0x85);
    txt_draw(0x1E00);
    battle_cb_86120();
    battle_row_88();
    latch(0x4C);
    func_8012224C();
    latch(0xF0);
    for (;;) {
        midrow_pad88();
        poll_spin();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0x30);
    func_80138A34();
    func_80138A6C();
    row_close2();
    func_80138A34();
    latch_cur();
    stat_sync();
    page_open(0x1A65);
    return;
}
