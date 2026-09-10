/* FF4 source-port — interpreted module for fn_1x36494.
 * Ground truth: src/fn_1x36494.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x36494(void)
{
    txt_set(0x1B7A);
    if (gate(2) != 0)
        goto L4c8;
    txt_set(0x1B7C);
    poll_spin();
L4c8:
    cell_set50_from40();
    cell_put(0x45);
    txt_draw(0x1B75);
    txt_set(0x1B7B);
    battle_put43();
    txt_cell(0x1B56);
    cell_put(0x37);
    txt_cell(0x1B57);
    cell_put(0x38);
    txt_cell(0x1B58);
    cell_put(0x39);
    open_row(0x3A);
    open_row(0x3B);
    open_row(0x3C);
    open_row(0x3D);
    open_row(0x3E);
L560:
    for (;;) {
        row_prep(0x20);
        row_read2(0x37);
        sep_a();
        cell_peek0(cell_state(0x3B));
        cell_put_hi9(0x3B);
        row_read2(0x39);
        cell_peek0(cell_state(0x3D));
        cell_put_hi9(0x3D);
        row_prep_close();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_open(0x16A0);
    tail(0x37);
    txt_set(0x16A2);
    cell_put(0x39);
    open_row(0x3A);
    row_prep(0x20);
    row_read2(0x37);
    sep_b();
    cell_pos_sub16(cell_state(0x3B));
    cell_put_hi9(0x37);
    row_read2(0x39);
    cell_pos_sub16(cell_state(0x3D));
    cell_put_hi9(0x39);
    row_prep_close();
    row_page(0x3A);
    if (gate(0x8080) != 0)
        goto L758;
    wnd_open(0x50C0);
    label(0x1A71);
    status_row_x16a8_x1a71_x1a73_texts();
    latch(9);
    txt_draw(0xFE01);
    txt_draw(0xFE05);
    txt_draw(0xFE09);
    txt_draw(0xFE0D);
    txt_draw(0xFE11);
    txt_draw(0xFE15);
    txt_draw(0xFE19);
    txt_draw(0xFE1D);
    txt_draw(0xFE21);
    txt_draw(0xFE25);
    cell_clear_bank(0x1A73);
    sub_menu_x1a73_x1a75_texts_row_loo();
    midrow_pad88_run();
    config_row_b600();
    draw_pad_cur();
    fn_1x1fb74();
    battle_row_45b();
    fn_1x2219c();
    fn_1x1ff40();
    wnd_open(0x48C0);
    label(0x1A71);
    status_row_x16a8_x1a71_x1a73_texts();
    fn_1x240d0();
    fn_1x26458();
    return;
L758:
    latch_cur();
    ability_rows_x41_window_d4_b04_gat();
    io_poll_cur();
    if (io_just() == 0)
        goto L890;
    row_open();
    row_page(0x37);
    txt_draw(0x16A0);
    page(0x38);
    label(0x16A1);
    row_close();
    txt_set(0x1B7B);
    cell_put(0x43);
    cell_fmt2(0x43);
    cell_push_c8_d58(0x1B55);
    cell_draw(0x1440);
    txt_set(0x1B75);
    cell_draw(0x1441);
    config_row_b600();
    draw_pad_cur();
    fn_1x1fb74();
    sub_menu_x1a73_x1a75_texts_row_loo();
    midrow_pad88_run();
    latch(0x2B);
    fn_1x2224c();
    fn_1x26458();
    fn_1x1ff40();
    for (;;) {
        midrow_pad88_run();
        midrow_degen();
        row_page(2);
        cell_tick_or(cell_state(3));
        if (ticker_reblend2(0x202) != 0)
            continue;
        break;
    }
    return;
L890:
    sub_menu_x1a73_x1a75_texts_row_loo();
    animation_row_300b();
    midrow_pad88_run();
    config_row_b600();
    draw_pad_cur();
    fn_1x1fb74();
    battle_row_45b();
    fn_1x1ff40();
    return;
}
