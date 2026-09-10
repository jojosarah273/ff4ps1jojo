/* FF4 source-port — interpreted module for fn_1x39e34.
 * Ground truth: src/fn_1x39e34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x39e34(void)
{
    config_row_b600();
    draw_pad_cur();
    func_8011FB74();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    latch(0x53);
    txt_draw(0xBB1E);
    latch(0x48);
    txt_draw(0xBB9E);
    latch(0x43);
    txt_draw(0xBC1E);
    wnd_open(0x29E);
    draw_pad_cur();
    rows_x29_window_c_bc_fills_loop_l1();
    wnd_open(0x21E);
    draw_pad_cur();
    rows_x29_window_c_bc_fills_loop_l1();
    fn_1x3b88c();
    draw_pad(0xBB22);
    battle_rows_x41_then_bcx2_loop_on();
    draw_pad(0xBBA2);
    battle_rows_x41_then_bcx2_loop_on();
    draw_pad(0xBC22);
    battle_rows_x41_then_bcx2_loop_on();
    fn_1x26480();
    func_8013A8C4();
    page_open(0x16AA);
    fn_1x3aa08();
    fn_1x26590();
Lf50:
    txt_set(0x16B8);
    fn_1x3b118();
    txt_draw(0x304);
    latch(0x80);
    txt_draw(0x305);
    txt_set(0x16BE);
    fn_1x3b118();
    cell_put(0x45);
    latch(0x30);
    cell_put(0x46);
    config_pad_300();
    fn_1x3b88c();
    txt_set(0x16AC);
    battle_put43();
    latch_cur();
    cell_draw(0xB81F);
    txt_set(0x16AD);
    battle_put43();
    latch_cur();
    cell_draw(0xB89F);
    txt_set(0x1BA7);
    cell_cursor_dec();
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x30);
    cell_put(0x46);
    row_close2();
    io_poll(7);
    if (io_go() == 0)
        goto L098;
    latch(0x68);
    goto L0A0;
L098:
    latch(0x18);
L0A0:
    cell_put(0x45);
    fn_1x1f6ac();
    txt_set(0x1BA8);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x86);
    txt_draw(0x320);
    latch(0xA0);
    txt_draw(0x321);
    txt_set(0x1BA9);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x86);
    txt_draw(0x324);
    latch(0xB0);
    txt_draw(0x325);
    txt_set(0x1BAA);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x86);
    txt_draw(0x328);
    latch(0xC0);
    txt_draw(0x329);
    ability_rows_x1ba9_x1ba8_x1baa_tex();
    page(0x45);
    label(0x16AA);
    func_8012214C();
    latch(4);
    txt_draw(0x322);
    txt_draw(0x326);
    txt_draw(0x32A);
    latch(0x30);
    txt_draw(0x323);
    txt_draw(0x327);
    txt_draw(0x32B);
    txt_set(0x16B6);
    fn_1x3b118();
    txt_draw(0x30C);
    latch(0x60);
    txt_draw(0x30D);
    txt_set(0x16A9);
    fn_1x3b118();
    txt_draw(0x308);
    latch(0x70);
    txt_draw(0x309);
    txt_set(0x16B7);
    fn_1x3b118();
    txt_draw(0x314);
    latch(0x90);
    txt_draw(0x315);
    wnd_open(0x300A);
    label(0x306);
    label(0x30A);
    label(0x30E);
    label(0x316);
    label(0x31A);
    midrow_pad88_run();
    fn_1x26480();
    func_8013A8C4();
    func_8013B7B8(0xFF);
    func_8013B764();
    battle_state_dc400();
    midrow_degen();
    row_page(1);
    row_read(0x80);
    if (sel(2) == 0)
        goto L8B4;
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L36C;
    txt_set(0x1BA7);
    io_poll(4);
    if (io_just() == 0)
        goto L32C;
    txt_set(0x16A9);
    if (gate(2) != 0)
        goto L3BC;
    func_8013AAF0();
L32C:
    io_poll(5);
    if (io_just() == 0)
        goto L36C;
    txt_set(0x16B8);
    if (gate(2) != 0)
        goto L36C;
    ability_spell_screen_x48_x49_windo();
    midrow_paint_c();
L36C:
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L3BC;
    txt_set(0x1BA7);
    poll_spin();
    if (poll_go(0x8080) != 0)
        goto L3B4;
    latch(9);
L3B4:
    txt_draw(0x1BA7);
L3BC:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L414;
    txt_set(0x1BA7);
    cell_set50_from40();
    io_poll(0xA);
    if (io_just() == 0)
        goto L40C;
    sep();
L40C:
    txt_draw(0x1BA7);
L414:
    row_page(1);
    row_read(2);
    if (sel(2) != 0)
        goto L654;
    txt_set(0x1BA7);
    if (gate(0x202) != 0)
        goto L45C;
    fn_1x3b1e8();
    goto L654;
L45C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L4A4;
    txt_set(0x16AC);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L654;
    txt_draw(0x16AC);
    goto L654;
L4A4:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L4EC;
    txt_set(0x16AD);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L654;
    txt_draw(0x16AD);
    goto L654;
L4EC:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L514;
    fn_1x3b160();
    goto L654;
L514:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L53C;
    fn_1x3b228();
    goto L654;
L53C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L564;
    fn_1x3b1a8();
    goto L654;
L564:
    poll_spin();
    if (poll_go(2) != 0)
        goto L62C;
    poll_spin();
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    cell_put_hi9(0x45);
    row_prep_close();
    cell_push_c8_lo(0x45);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L654;
    cell_pull_c8_sel2(0x45);
    goto L654;
L62C:
    txt_set(0x16B7);
    txt_draw(0x16B7);
L654:
    row_page(1);
    row_read(1);
    if (sel(2) != 0)
        goto Lf50;
    txt_set(0x1BA7);
    if (gate(0x202) != 0)
        goto L69C;
    fn_1x3b1e8();
    goto Lf50;
L69C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L6EC;
    txt_set(0x16AC);
    cell_set50_from40();
    io_poll(6);
    if (io_just() != 0)
        goto Lf50;
    txt_draw(0x16AC);
    goto Lf50;
L6EC:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L73C;
    txt_set(0x16AD);
    cell_set50_from40();
    io_poll(6);
    if (io_just() != 0)
        goto Lf50;
    txt_draw(0x16AD);
    goto Lf50;
L73C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L764;
    fn_1x3b160();
    goto Lf50;
L764:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L78C;
    fn_1x3b228();
    goto Lf50;
L78C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L7B4;
    fn_1x3b1a8();
    goto Lf50;
L7B4:
    poll_spin();
    if (poll_go(2) != 0)
        goto L884;
    poll_spin();
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    cell_put_hi9(0x45);
    row_prep_close();
    cell_push_c8_lo(0x45);
    cell_set50_from40();
    io_poll(0x20);
    if (io_just() != 0)
        goto Lf50;
    cell_pull_c8_sel2(0x45);
    goto Lf50;
L884:
    txt_set(0x16B7);
    txt_draw(0x16B7);
    goto Lf50;
L8B4:
    return;
}
