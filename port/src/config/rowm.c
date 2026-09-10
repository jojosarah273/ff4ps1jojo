/* FF4 source-port — interpreted module for func_80136A58.
 * Ground truth: src/func_80136A58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80136A58(void)
{
    fn_1x378b0();
    wnd_open(0xFFB8);
    tail(0x9F);
    fn_1x24130();
    ability_summary_x48c0_x1a71_x1a01();
    midrow_paint_c();
    config_row_264e8();
    anim_noop();
    config_row_b600();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    draw_pad_cur();
    battle_rows_29();
    midrow_paint_b();
    shop_row_kick_f0();
    fn_1x2aac0();
    config_row_26528();
    config_row_b600();
    midrow_pad88_run();
    fn_1x26480();
    battle_row_45b();
Lb24:
    for (;;) {
        latch(0x20);
        cell_put(0x3F);
        txt_set(0x1B7A);
        if (gate(2) != 0)
            goto Lb5c;
        wnd_open(0x3058);
        goto Lb64;
    Lb5c:
        wnd_open(0x3040);
    Lb64:
        draw_pad(0x300);
        latch_cur();
        row_latch_7e();
        txt_set(0x1B7C);
        draw_pad(0x19A);
        rows_f360_prep_x29_x1d_x1e_window();
        midrow_pad88_run();
        fn_1x26480();
        midrow_degen();
        ability_page_four_gated_blocks_eac();
        row_page_cur();
        row_read(0x80);
        if (sel(2) == 0)
            goto Lbfc;
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            return;
    }
Lbfc:
    draw_pad(0x310);
    fn_1x376b0();
Lc0c:
    for (;;) {
        latch(0x20);
        cell_put(0x3F);
        txt_set(0x1B94);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x58);
        cell_put(0x46);
        txt_set(0x1B95);
        if (gate(2) != 0)
            goto Lc84;
        latch(0x78);
        goto Lc8c;
    Lc84:
        latch(8);
    Lc8c:
        cell_put(0x45);
        config_pad_300();
        midrow_pad88_run();
        midrow_degen();
    Lcac:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto Lcdc;
        sep_a();
        return;
    Lcdc:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto Ld74;
        func_80136FFC();
        if (io_go() == 0)
            goto Ld4c;
        midrow_paint_c();
        fn_1x20db4();
        fn_1x2aac0();
        config_row_26528();
        fn_1x352f0();
        config_row_264e8();
        fn_1x263c8();
    Ld4c:
        latch(0x20);
        cell_put(0x3F);
        config_row_d600b();
        draw_pad(0x31C);
        fn_1x2b100();
    Ld74:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto Ldc4;
        txt_set(0x1B95);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1B95);
        if (sel(2) != 0)
            goto Lf14;
    Ldc4:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto Le14;
        txt_set(0x1B95);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1B95);
        if (sel(0x202) != 0)
            goto Le34;
    Le14:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto Lef4;
    Le34:
        txt_set(0x1B94);
        poll_spin();
        if (poll_go(0x80) != 0)
            goto Le64;
        txt_draw(0x1B94);
        goto Lef4;
    Le64:
        txt_set(0x1B96);
        poll_spin();
        if (poll_go(0x80) != 0)
            goto Lef4;
        txt_draw(0x1B96);
        latch(8);
        cell_put(0x45);
        for (;;) {
            row_prep(0x20);
            cell_dec_cell(0x9F);
            cell_dec_cell(0x9F);
            row_prep_close();
            fn_1x266c8();
            poll_pair(0x45);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        fn_1x1f7d4();
        if (io_go() == 0)
            goto Lcac;
    Lef4:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto Lc0c;
    Lf14:
        txt_set(0x1B94);
        cell_set50_from40();
        io_poll(8);
        if (io_just() != 0)
            goto Lf4c;
        txt_draw(0x1B94);
        goto Lc0c;
    Lf4c:
        txt_set(0x1B96);
        cell_set50_from40();
        io_poll(0x11);
        if (io_just() != 0)
            goto Lc0c;
        txt_draw(0x1B96);
        latch(8);
        cell_put(0x45);
        for (;;) {
            row_prep(0x20);
            cell_inc_cell(0x9F);
            cell_inc_cell(0x9F);
            row_prep_close();
            fn_1x266c8();
            poll_pair(0x45);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        fn_1x1f7d4();
        if (io_go() == 0)
            goto Lcac;
        goto Lc0c;
    }
}
