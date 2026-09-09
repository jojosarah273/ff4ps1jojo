/* FF4 source-port — interpreted module for func_80130058.
 * Ground truth: src/func_80130058.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80130058(void)
{
    page_open(0x1B83);
    cell_flags_cmp(cell_state(0x1B85));
    if (io_just() != 0)
        goto L234;
    cell_clear_bank(0x1B88);
    func_8012B0D8();
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    func_801308B4();
    txt_set(0x1B85);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B85));
    cell_poke0(cell_state(0x1B86));
    func_801308B4();
    txt_cell(0x1560);
    cell_cursor_dec();
    cell_push_c8_d58(0x1560);
    cell_draw(0x1560);
    row_close2();
    cell_pull_c8(0x1560);
    func_80130884();
    func_8012F9A0();
    return;
L194:
    cell_clear_bank(0x1B87);
    cell_clear_bank(0x1B88);
    goto L1FC;
L1AC:
    cell_clear_bank(0x1B87);
    cell_clear_bank(0x1B88);
    sep_b();
    cell_pos_back(0x16);
    wnd_open(0xB770);
    func_80120070();
    return;
L1E4:
    func_80131294();
    func_8012219C();
    return;
L1FC:
    txt_set(0x1A04);
    row_read(0x10);
    if (sel(2) != 0)
        goto L1E4;
    latch(3);
    func_80132310();
    return;
L234:
    cell_clear_bank(0x1B87);
    func_80120FBC();
    cell_clear_bank(0x1B88);
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    func_801308B4();
    cell_push_c8_d58(0x1560);
    io_poll(0xE);
    if (io_go() == 0)
        goto L1E4;
    io_poll(0x1C);
    if (io_go() != 0)
        goto L1E4;
    txt_draw(0x1B89);
    io_poll(0x12);
    if (io_just() != 0)
        goto L394;
    func_80126B88();
    row_read(0x28);
    if (sel(2) != 0)
        goto L394;
    func_800F52BC(0x20);
    if (io_just() != 0)
        goto L354;
    txt_set(0x1B89);
    io_poll(0x19);
    if (io_just() != 0)
        goto L394;
L354:
    func_80126B88();
    func_800F52BC(8);
    if (io_just() != 0)
        goto L1E4;
    txt_set(0x1B89);
    io_poll(0x1A);
    if (io_just() == 0)
        goto L1E4;
L394:
    func_80132428();
    if (cell_flags_hi7() == 0)
        goto L3C4;
    func_801320E8();
    func_8012219C();
    goto L5DC;
L3C4:
    cell_push_c8_d58(0x1560);
    io_poll(0x16);
    if (io_just() != 0)
        goto L1AC;
    io_poll(0x17);
    if (io_just() != 0)
        goto L1AC;
    io_poll(0x1B);
    if (io_just() != 0)
        goto L194;
    func_8012B0D8();
    func_8012B168();
    func_801320E8();
    midrow_paint_c();
    midrow_pad88_run();
    func_80130F90();
    func_80120B6C();
    midrow_pad88_run();
    cell_clear_bank(0x1B8B);
    cell_clear_bank(0x1B8C);
    cell_clear_bank(0x1B8D);
    cell_clear_bank(0x1B8E);
    cell_clear_bank(0x1B8F);
    cell_clear_bank(0x1BBB);
L484:
    txt_set(0x1B8A);
    func_8012D1D0();
    if (io_just() == 0)
        goto L4E4;
    txt_set(0x1B8A);
    cell_set50_from40();
    io_poll(5);
    if (io_just() == 0)
        goto L4D4;
    latch(0);
L4D4:
    txt_draw(0x1B8A);
    goto L484;
L4E4:
    txt_set(0x1BBB);
    if (gate(2) != 0)
        goto L50C;
    func_8012B168();
    goto L59C;
L50C:
    txt_set(0x1B8A);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B8A));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x20);
    cell_put(0x46);
    latch(0x40);
    cell_put(0x45);
    func_8011F6D4();
L59C:
    draw_pad(0x310);
    func_80131358();
    midrow_pad88_run();
    midrow_degen();
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto L654;
L5DC:
    func_80120F94();
    draw_pad_cur();
    battle_rows_sync();
    func_80130884();
    func_8012F9A0();
    func_80132130();
    latch_cur();
    cell_put(0xC1);
    func_8012B0D8();
    func_8012B168();
    func_80120FBC();
    midrow_pad88_run();
    func_80126480();
    return;
L654:
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L6A4;
    txt_set(0x1B8A);
    battle_put43();
    latch(0xFF);
    cell_draw(0x1B8B);
    func_80131534();
    goto L5DC;
L6A4:
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L70C;
    for (;;) {
        txt_set(0x1B8A);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto L6EC;
        latch(4);
    L6EC:
        txt_draw(0x1B8A);
        func_8012D1D0();
        if (io_just() != 0)
            continue;
        break;
    }
L70C:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L77C;
    for (;;) {
        txt_set(0x1B8A);
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            goto L75C;
        latch(0);
    L75C:
        txt_draw(0x1B8A);
        func_8012D1D0();
        if (io_just() != 0)
            continue;
        break;
    }
L77C:
    row_page(1);
    row_read(3);
    if (sel(2) != 0)
        goto L4E4;
    txt_set(0x1B90);
    if (gate(2) != 0)
        goto L4E4;
    draw_pad(4);
    for (;;) {
        func_80132178();
        txt_cell_cur();
        row_read(0x3F);
        if (sel(2) != 0)
            goto L834;
        txt_cell(0x1B8B);
        cell_draw(0x1B8B);
    L834:
        poll_pair_cur();
        if (poll_go(0x8080) != 0)
            continue;
        break;
    }
    latch(0xFF);
    cell_tick_xor(cell_state(0x1BBB));
    txt_draw(0x1BBB);
    goto L4E4;
}
