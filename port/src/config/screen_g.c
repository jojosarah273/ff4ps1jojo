/* FF4 source-port — interpreted module for fn_1x28d4c.
 * Ground truth: src/fn_1x28d4c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x28d4c(void)
{
    cell_push_c8_cur(0x1B49);
    if (gate(0x202) != 0)
        goto dE8;
    fn_1x23d3c();
    fn_1x25a64();
    config_row_d600b();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad(0x1040);
    latch(0x30);
    txt_draw(0x1C1);
    txt_set(0x1B18);
    fn_1x24704();
    goto E00;
dE8:
    draw_pad_cur();
    battle_rows_sync();
E00:
    draw_pad_cur();
    battle_rows_sync();
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_sync();
    func_80129AD4();
    row_prep(0x20);
    row_sync2(0x800);
    wnd_open(0xD600);
    draw_pad(0xB600);
    battle_wait_just(0x7E7E);
    row_prep_close();
    config_row_d600b();
    txt_set(0x1B49);
    if (gate(2) == 0) {
        draw_pad_cur();
        battle_rows_sync();
    }
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    wnd_open(0x1B00);
    latch(0xA);
    for (;;) {
        page_paint_cur();
        poll_spin();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_clear_bank(0x1B08);
    wnd_open(0x1B0A);
    draw_pad(6);
    for (;;) {
        txt_cell_cur();
        cell_draw(7);
        cell_step();
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        page_paint2(0x1B08);
    }
    poll_pair_cur();
    if (poll_go(0x202) != 0)
        goto fEC;
    cell_dec_bank(0x1B08);
    txt_set(0x1B08);
    txt_draw(0x1B09);
    fn_1x29aac();
    fn_1x29c54();
    latch(2);
    txt_draw(0x1B06);
    config_row_264e8();
    fn_1x26458();
    config_row_26528();
    latch(0x19);
    cell_pull_c8_lo(0x212C);
    wnd_open(0xFFFC);
    tail(0x90);
    tail(0x9C);
    shop_row_kick_f0();
    anim_noop();
    fn_1x26590();
    cell_clear_bank(0x1BBA);
    goto L5C0;
fEC:
    fn_1x29dfc();
ff4:
    func_80129808();
    txt_set(0x1B06);
    row_sel_cell_cur();
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    row_prep(0x20);
    sep_a();
    cell_pos_fwd(0xDBBA);
    cell_put_hi9(0x5A);
    row_sync2(1);
    cell_put_hi9(0x5C);
    row_prep_close();
    txt_set(0x1B06);
    cell_put(0x45);
    row_sel_cell_cur();
    cell_put(0x45);
    open_row(0x46);
    row_prep(0x20);
    row_read2(0x45);
    sep_a();
    cell_pos_fwd(0x1B00);
    cell_put_hi9(0x5D);
    row_done2();
    cell_put_hi9(0x60);
    row_prep_close();
L10C:
    fn_1x29c54();
    cell_push_c8_lo(0x5D);
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    cell_push_c8();
    cell_put(0x48);
    cell_push_c8_lo(0x60);
    sep_a();
    row_open_w(0x50);
    cell_put(0x49);
    page(0x48);
    draw_pad(0x300);
    row_latch_7e();
    fn_1x29d2c();
    midrow_pad88_run();
    config_row_7800();
    midrow_degen();
    row_page_cur();
    row_read(0x40);
    if (sel(2) != 0)
        goto L218;
    txt_set(0x1B06);
    io_poll(1);
    if (io_just() == 0)
        goto L208;
    latch(0xFF);
    txt_draw(0x1B06);
L208:
    fn_1x29e94();
    goto ff4;
L218:
    row_page(1);
    window_state_byte_variant_d50_a0_x(8);
    if (io_just() != 0)
        goto L298;
    for (;;) {
        cell_push_c8_lo(0x60);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto L260;
        latch(7);
   L260:
        cell_pull_c8_sel2(0x60);
        rows_x41_x60_x45_x5d_windows_f38_c();
        if (io_just() != 0)
            continue;
        io_poll(0xFF);
        if (io_just() != 0)
            continue;
        break;
    }
L298:
    row_page(1);
    window_state_byte_variant_d50_a0_x(4);
    if (io_just() != 0)
        goto L320;
    for (;;) {
        cell_push_c8_lo(0x60);
        cell_set50_from40();
        io_poll(8);
        if (io_go() == 0)
            goto L2E8;
        sep();
   L2E8:
        cell_pull_c8_sel2(0x60);
        rows_x41_x60_x45_x5d_windows_f38_c();
        if (io_just() != 0)
            continue;
        io_poll(0xFF);
        if (io_just() != 0)
            continue;
        break;
    }
L320:
    row_page(1);
    window_state_byte_variant_d50_a0_x(2);
    if (io_just() != 0)
        goto L3C0;
    cell_push_c8_lo(0x5D);
    poll_spin();
    if (poll_go(0x8080) == 0)
        goto L408;
    cell_pull_c8_sel2(0x5D);
    rows_x41_x60_x45_x5d_windows_f38_c();
    for (;;) {
        if (io_just() != 0)
            goto L408;
        io_poll(0xFF);
        if (io_just() == 0)
            goto L3C0;
        cell_push_c8_lo(0x5D);
        poll_spin();
        cell_pull_c8_sel2(0x5D);
        rows_x41_x60_x45_x5d_windows_f38_c();
    }
L3C0:
    row_page(1);
    window_state_byte_variant_d50_a0_x(1);
    if (io_just() != 0)
        goto L498;
    cell_push_c8_lo(0x5D);
    cell_set50_from40();
    io_poll(0xA);
    if (io_go() == 0)
        goto L418;
L408:
    cell_clear_bank(0x1B07);
    goto L5B8;
L418:
    cell_pull_c8_sel2(0x5D);
    rows_x41_x60_x45_x5d_windows_f38_c();
    for (;;) {
        if (io_just() != 0)
            goto L478;
        io_poll(0xFF);
        if (io_just() == 0)
            goto L498;
        cell_push_c8_lo(0x5D);
        cell_set50_from40();
        cell_pull_c8_sel2(0x5D);
        rows_x41_x60_x45_x5d_windows_f38_c();
    }
L478:
    cell_push_c8_lo(0x5D);
    poll_spin();
    cell_pull_c8_sel2(0x5D);
    goto L408;
L498:
    row_page_cur();
    window_state_byte_variant_d50_a0_x(0x80);
    if (io_just() != 0)
        goto L528;
    txt_set(0x1B08);
    cell_set50_from40();
    io_poll(6);
    if (io_go() != 0)
        goto L528;
    txt_draw(0x1B08);
    rows_x41_x60_x45_x5d_windows_f38_c();
    cell_cursor_dec();
    txt_set(0x1B08);
    cell_put(0x45);
    open_row(0x46);
    cell_fmt2(0x45);
    row_close2();
    cell_pull_c8(0x1B0A);
L528:
    row_page(1);
    window_state_byte_variant_d50_a0_x(0x80);
    if (io_just() != 0)
        goto L10C;
    txt_set(0x1B08);
    if (gate(0x80) != 0)
        goto L5A8;
    poll_spin();
    txt_draw(0x1B08);
    cell_set50_from40();
    cell_put(0x45);
    open_row(0x46);
    cell_fmt2(0x45);
    latch(0xFF);
    cell_pull_c8(0x1B0A);
    goto L10C;
L5A8:
    fn_1x29838();
    goto L10C;
L5B8:
    fn_1x29d64();
L5C0:
    func_80129808();
L5C8:
    txt_set(0x1B06);
    battle_put43();
    cell_put(0x46);
    latch(0xC);
    cell_put(0x45);
    config_pad_300();
    fn_1x29d2c();
    midrow_pad88_run();
    midrow_degen();
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L6F4;
    txt_set(0x1B06);
    io_poll(2);
    if (io_just() == 0)
        goto L6CC;
    txt_set(0x1B08);
    if (gate(0x80) != 0)
        goto L69C;
    battle_row_88();
    return;
L69C:
    fn_1x29838();
    fn_1x29c54();
    config_row_264e8();
    fn_1x1ff40();
    battle_row_88();
    return;
L6CC:
    txt_set(0x1BBA);
    if (gate(0x202) != 0)
        goto L7DC;
    fn_1x29ef4();
    goto L7DC;
L6F4:
    row_page(1);
    window_state_byte_variant_d50_a0_x(8);
    if (io_just() != 0)
        goto L754;
    txt_set(0x1B06);
    poll_spin();
    txt_draw(0x1B06);
    if (poll_go(0x8080) != 0)
        goto L744;
    latch(2);
L744:
    txt_draw(0x1B06);
    func_80129808();
L754:
    row_page(1);
    window_state_byte_variant_d50_a0_x(4);
    if (io_just() != 0)
        goto L77C;
    fn_1x29e94();
L77C:
    row_page(1);
    window_state_byte_variant_d50_a0_x(3);
    if (io_just() != 0)
        goto L5C8;
    txt_set(0x1BBA);
    if (gate(0x202) != 0)
        goto L7BC;
    fn_1x29ef4();
L7BC:
    txt_set(0x1B06);
    io_poll(2);
    if (io_go() != 0)
        goto L5C8;
L7DC:
    latch(1);
    txt_draw(0x1B07);
    goto fEC;
}
