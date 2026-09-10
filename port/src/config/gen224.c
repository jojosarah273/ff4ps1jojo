/* FF4 source-port — interpreted module for ability_spell_screen_x48_x49_windo.
 * Ground truth: src/ability_spell_screen_x48_x49_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_spell_screen_x48_x49_windo(void)
{
    /* ability/spell screen: 0x48/0x49 windows, 0x1BC7 text, 801210AC/
       80124EAC/80120A0C/801224F8/80122518/80122334/801241B8/8011F684/
       80120B6C/801263F0/8011F6A4/8011F884 rows; loops L13B2CC,
       L13B3BC, L13B458/L13B4D0, L13B638, L13B6A0. */
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    func_8011FB74();
    open_row(0x48);
    open_row(0x49);
    draw_pad(0x212);
L13b2cc:
    for (;;) {
        page(0x48);
        cell_push_c8();
        row_sync();
        cell_cur_save54_b();
        txt_cell_cur();
        shop_row_x29_x45_windows_x41_x1500();
        row_done();
        row_sync();
        func_801224F8();
        func_80122518();
        draw_pad_cur();
        battle_rows_100();
        row_done();
        rows_u16_d44_d58_swap_with_c_prep();
        rows_u16_d44_d58_swap_with_c_prep();
        key_page(0x48);
        row_page(0x48);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x1BC7);
    cell_put(0x45);
L13b3bc:
    for (;;) {
        row_page(0x45);
        fn_1x2d1d0();
        if (io_just() == 0)
            goto L13B414;
        key_page(0x45);
        row_page(0x45);
        io_poll(5);
        if (io_just() == 0)
            continue;
        open_row(0x45);
    }
L13B414:
    row_page(0x45);
    txt_draw(0x1BC7);
    midrow_paint_c();
    midrow_pad88_run();
    battle_row_45b(1);
L13b458:
    for (;;) {
        func_8013B764();
        func_8013B7B8(0xFF);
        txt_set(0x1BC7);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x4A);
        cell_put(0x46);
        latch(0x38);
        cell_put(0x45);
        config_pad_300();
        open_row(0x45);
        open_row(0x46);
    L13b4d0:
        for (;;) {
            row_page(0x45);
            row_sel_cell_cur();
            battle_put43();
            row_prep(0x20);
            row_prep_close();
            row_page(0x45);
            fn_1x3b804();
            cell_tick_half();
            sep_a();
            row_open_w(0x81);
            cell_pull_c8();
            key_page(0x45);
            row_page(0x45);
            io_poll(5);
            if (io_just() == 0)
                continue;
            break;
        }
        func_8013B764();
        config_row_f320();
        anim_noop();
        midrow_degen();
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto L13B618;
        func_8013B764();
        func_8013B7B8(0xFF);
        func_801263C8();
        return;
    L13B618:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L13B680;
    L13b638:
        for (;;) {
            txt_set(0x1BC7);
            poll_spin();
            if (poll_go_cur() != 0)
                goto L13B660;
            latch(4);
        L13B660:
            txt_draw(0x1BC7);
            fn_1x3b840();
            if (io_just() != 0)
                continue;
            goto L13B680;
        }
    L13B680:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L13B6F0;
    L13b6a0:
        for (;;) {
            txt_set(0x1BC7);
            cell_set50_from40();
            io_poll(5);
            if (io_just() == 0)
                goto L13B6D0;
            latch_cur();
        L13B6D0:
            txt_draw(0x1BC7);
            fn_1x3b840();
            if (io_just() != 0)
                continue;
            break;
        }
    L13B6F0:
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            continue;
        fn_1x3b7c0();
        poll_spin();
        poll_spin();
        if (poll_go_cur() != 0)
            goto L13B740;
        latch(2);
    L13B740:
        cell_draw(0x16B9);
        continue;
    }
    return;
}
