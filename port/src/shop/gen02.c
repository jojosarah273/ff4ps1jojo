/* FF4 source-port — interpreted module for fn_1x6ef88.
 * Ground truth: src/fn_1x6ef88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x6ef88(u32 a0)
{
    if (a0 != 0) {
        for (;;) {
            if (a0 == 0)
                break;
        }
    }
    fn_1x6b6d0();
    fn_1x6b650();
    fn_1x6ae94();
    shop_rows_c4a0_prep_xa_x8_windows();
    fn_1x69614();
    shop_seed_x64_window_x1b_x2107_tex();
    config_map_name_screen_x64_x2_x4_x();
    open_row(0x95);
    wnd_open(0x8000);
    tail(0x57);
    sep();
    tail(0x66);
    row_page(0x64);
    io_poll(1);
    if (io_just() != 0)
        goto f0dc;
    io_poll(2);
    if (io_just() != 0)
        goto f0b4;
    shop_rows_x66_x53_x55_xa_windows_x();
    shop_store_run();
    goto f0dc;
f0b4:
    wnd_open(0x50);
    tail(0x96);
    fn_1x6a080();
    shop_rows_x2303_x2883_cells_via_lo();
    shop_store_run();
f0dc:
    cell_clear_bank(0x7D1F);
    cell_clear_bank(0x7D20);
    cell_clear_bank(0x3303);
    key_page(0x63);
    latch(0x11);
    txt_draw(0x7D28);
    cell_pull_c8_lo(0x212C);
    latch(0x81);
    cell_pull_c8_lo(0x4200);
    battle_loop_f098_intro_x9a_window();
    sep();
    label(0x68);
    for (;;) {
        shop_row_41();
        page_open(0x68);
        cell_step();
        label(0x68);
        cell_flags_cmp(cell_state(0x6A));
        if (io_go() == 0)
            continue;
        break;
    }
    row_page(0x64);
    io_poll(2);
    if (io_just() == 0)
        goto f8dc;
    page_paint2(0x7D1F);
    wnd_open(0x100);
    for (;;) {
        shop_row_41();
        shop_rows_x3319_x371b_x331b_x3719();
        sep_b();
        cell_pos_back(8);
        poll_t(0x78);
        if (io_just() != 0)
            break;
    }
    sep();
    tail(0x9C);
    wnd_open(1);
    fn_1x70084();
    wnd_open(0x100);
    tail(0x9E);
    sep();
    tail(0x9A);
    for (;;) {
        shop_row_41();
        row_prep(0x20);
        row_read2(0x9C);
        sep_b();
        cell_pos_back2(8);
        cell_put_hi9(0x9C);
        cell_dec_cell(0x9E);
        cell_dec_cell(0x9E);
        row_read2(0x9E);
        cell_put_hi9(0xE);
        row_read2(0x9C);
        sep_a();
        cell_pos_fwd(0x80);
        config_x1ff_ec_gates_x14_x20_windo();
        row_prep(0x20);
        row_read2(0x14);
        cell_put_hi9();
        cell_put_hi9(6);
        row_read2(0x9E);
        cell_put_hi9(0xE);
        row_read2(0x9C);
        config_x1ff_ec_gates_x14_x20_windo();
        row_prep(0x20);
        cell_inc_cell(0x9A);
        row_read2(0x9A);
        cell_pos_mask(3);
        if (cell_flags_pos0(0x202) != 0)
            goto f3f4;
        cell_push9(0x2105);
        if (cell_flags_pos0(2) != 0)
            goto f3f4;
        sep_b();
        cell_pos_back2(0x421);
        cell_pull9_hi(0x2105);
        fn_1x773fc();
    f3f4:
        row_read2(0x14);
        cell_put_hi9(2);
        cell_put_hi9(4);
        rows_x_dc_cell_pairs_x3319_x371b_x();
        row_prep_close();
        txt_set(0x2105);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    shop_row_41();
    latch(0x10);
    txt_draw(0x7D28);
    wnd_open(0x7FFF);
    label(0x2105);
    wnd_open(0xCC0);
    label(0x2107);
    sep();
    shop_row_41();
    sep();
    for (;;) {
        cell_draw(0x3D19);
        cell_step();
        poll_t(0x1000);
        if (io_just() != 0)
            break;
    }
    shop_row_41();
    sep();
    for (;;) {
        cell_draw(0x3D19);
        cell_step();
        poll_t(0x2000);
        if (io_just() != 0)
            break;
    }
    shop_row_41();
    sep();
    for (;;) {
        cell_draw(0x3D19);
        cell_step();
        poll_t(0x3000);
        if (io_just() != 0)
            break;
    }
    shop_row_41();
    sep();
    for (;;) {
        cell_draw(0x3D19);
        cell_step();
        poll_t(0x4000);
        if (io_just() != 0)
            break;
    }
    latch(0xC0);
    cell_put_cur();
    latch(0xCC);
    cell_put(2);
    sep();
    for (;;) {
        row_page_cur();
        cell_draw(0x43A3);
        row_page(2);
        cell_draw(0x4423);
        key_page_cur();
        key_page(2);
        cell_step();
        poll_t(0xC);
        if (io_just() != 0)
            break;
    }
    shop_row_41();
    sep();
    tail(0x66);
    tail(0x92);
    wnd_open(0x70);
    tail(0x8E);
    wnd_open(0x3D19);
    tail(0x90);
    page_paint2(0x7D20);
    for (;;) {
        shop_row_41();
        txt_set(0x7D20);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    wnd_open_cur();
    tail(2);
    tail(4);
    wnd_open(0x4000);
    tail_cur();
    tail(6);
    rows_x_dc_cell_pairs_x3319_x371b_x();
    shop_row_41();
    latch(0x80);
    cell_put(0xA0);
    latch(0x11);
    txt_draw(0x7D28);
    sep();
    tail(0x9C);
    wnd_open(0x800);
    tail(0x9E);
    for (;;) {
        shop_row_41();
        row_prep(0x20);
        row_read2(0x9E);
        sep_b();
        cell_pos_back2(0x10);
        cell_put_hi9(0x9E);
        row_read2(0x9E);
        cell_put_hi9(0xE);
        row_read2(0x9C);
        sep_a();
        cell_pos_fwd(0x80);
        config_x1ff_ec_gates_x14_x20_windo();
        row_prep(0x20);
        row_read2(0x14);
        cell_put_hi9();
        cell_put_hi9(6);
        row_read2(0x9E);
        cell_put_hi9(0xE);
        row_read2(0x9C);
        config_x1ff_ec_gates_x14_x20_windo();
        row_prep(0x20);
        row_read2(0x14);
        cell_put_hi9(2);
        cell_put_hi9(4);
        rows_x_dc_cell_pairs_x3319_x371b_x();
        row_prep_close();
        page(0x9E);
        poll_t(0x200);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open(0xB4);
    fn_1x70084();
    latch(1);
    cell_pull_c8_lo(0x1E00);
    latch(0x15);
    cell_pull_c8_lo(0x1E01);
    battle_cb_86120();
    fn_1x6e490();
    page_paint2(0x7D25);
    for (;;) {
        shop_row_41();
    }
f8dc:
    fn_1x69228();
    sep();
    cell_pull_c8_lo(0x4200);
    cell_pull_c8_lo(0x420B);
    cell_pull_c8_lo(0x420C);
    latch(0x80);
    cell_pull_c8_lo(0x2100);
    cell_cursor_read();
    row_pad();
    return;
}
