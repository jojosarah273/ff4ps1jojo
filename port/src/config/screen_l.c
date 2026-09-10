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
    animation_row_310();
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    ability_rows_x1d_x1e_windows_x45_x();
    txt_set(0x1B85);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B85));
    cell_poke0(cell_state(0x1B86));
    ability_rows_x1d_x1e_windows_x45_x();
    txt_cell(0x1560);
    cell_cursor_dec();
    cell_push_c8_d58(0x1560);
    cell_draw(0x1560);
    row_close2();
    cell_pull_c8(0x1560);
    fn_1x30884();
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
    open_depth_guard_in_the_menu_regio();
    return;
L1E4:
    func_80131294();
    fn_1x2219c();
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
    config_row_b600();
    cell_clear_bank(0x1B88);
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    ability_rows_x1d_x1e_windows_x45_x();
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
    fn_1x26b88();
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
    fn_1x26b88();
    func_800F52BC(8);
    if (io_just() != 0)
        goto L1E4;
    txt_set(0x1B89);
    io_poll(0x1A);
    if (io_just() == 0)
        goto L1E4;
L394:
    fn_1x32428();
    if (cell_flags_hi7() == 0)
        goto L3C4;
    fn_1x320e8();
    fn_1x2219c();
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
    animation_row_310();
    animation_row_300b();
    fn_1x320e8();
    midrow_paint_c();
    midrow_pad88_run();
    ability_equip_screen_twin_of_c74_b();
    battle_row_45b();
    midrow_pad88_run();
    cell_clear_bank(0x1B8B);
    cell_clear_bank(0x1B8C);
    cell_clear_bank(0x1B8D);
    cell_clear_bank(0x1B8E);
    cell_clear_bank(0x1B8F);
    cell_clear_bank(0x1BBB);
L484:
    txt_set(0x1B8A);
    fn_1x2d1d0();
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
    animation_row_300b();
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
    config_pad_300();
L59C:
    draw_pad(0x310);
    ability_spell_screen_x1b9b_x1b8b_t();
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
    fn_1x30884();
    func_8012F9A0();
    fn_1x32130();
    latch_cur();
    cell_put(0xC1);
    animation_row_310();
    animation_row_300b();
    config_row_b600();
    midrow_pad88_run();
    fn_1x26480();
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
    ability_wrapper_preps_config_dispa();
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
        fn_1x2d1d0();
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
        fn_1x2d1d0();
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
