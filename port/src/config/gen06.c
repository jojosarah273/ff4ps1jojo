/* FF4 source-port — interpreted module for func_801324F8.
 * Ground truth: src/func_801324F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801324F8(void)
{
    func_80123D3C();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    for (;;) {
        func_80194700();
        if (cb_slot15() == 0)
            break;
    }
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    page_paint2(0x1B49);
    config_row_d600b();
    func_80123FB4();
    midrow_paint_c();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    func_8011FB74();
    wnd_open(0x188);
    draw_pad_cur();
    func_801223A4();
    func_80124298();
    func_801280D4();
    func_80132C0C();
    latch(0xFF);
    txt_draw(0x1B4A);
    config_row_7800();
    func_80132CA4();
    battle_mode_dispatch();
    anim_noop();
    battle_state_dc400();
    func_80126590();
    cell_clear_bank(0x1B48);
L6d8:
    for (;;) {
        txt_set(0x1B48);
        if (gate(0x202) != 0)
            goto L700;
        wnd_open(0x3010);
        goto L708;
    L700:
        wnd_open(0x3040);
    L708:
        sep();
        draw_pad(0x300);
        row_latch_7e();
        func_80132C0C();
        midrow_pad88_run();
        config_row_7800();
        midrow_degen();
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L790;
        txt_set(0x1B48);
        if (gate(0x202) != 0)
            goto L7f8;
        open_row_cur();
        open_row(1);
        goto L848;
    L790:
        row_page(1);
        row_read(0x80);
        if (sel(0x202) != 0)
            goto L7f8;
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            goto L6d8;
        page_paint2(0x1B48);
        txt_set(0x1B48);
        row_read(1);
        txt_draw(0x1B48);
        goto L6d8;
    L7f8:
        draw_pad_cur();
        battle_rows_sync();
        draw_pad_cur();
        battle_rows_29();
        midrow_pad88();
        config_row_7800();
        func_8011FF40();
        battle_row_88();
        return;
    L848:
        open_row(0x45);
        for (;;) {
            row_page(0x45);
            midrow_prep_a();
            if (io_just() == 0)
                break;
            key_page(0x45);
            row_page(0x45);
            io_poll(5);
            if (io_just() == 0)
                goto L850;
            open_row(0x45);
        L850:
            ;
        }
    La8:
        row_page(0x45);
        txt_draw(0x1B4A);
        latch(1);
        txt_draw(0x1A73);
        draw_pad_cur();
        battle_rows_sync();
        draw_pad_cur();
        battle_rows_29();
        draw_pad_cur();
        battle_rows_sync();
        midrow_pad88();
        config_row_7800();
    L918:
        for (;;) {
            func_80132C0C();
            txt_set(0x1B4A);
            cell_cur_save54_b();
            tail(0x60);
            cell_push_c8_lo(0x60);
            draw_pad(0x152);
            func_80120A0C();
            func_801264C0();
            anim_noop();
            midrow_degen();
            row_page(1);
            row_read(1);
            if (sel(2) != 0)
                goto La00;
        L988:
            for (;;) {
                latch(1);
                txt_draw(0x1A73);
                txt_set(0x1B4A);
                cell_set50_from40();
                io_poll(5);
                if (io_just() == 0)
                    goto L9c8;
                sep();
            L9c8:
                txt_draw(0x1B4A);
                cell_cur_save54_b();
                tail(0x45);
                cell_push_c8_lo(0x45);
                row_read(0x3F);
                if (sel(2) != 0)
                    continue;
                break;
            }
        La00:
            row_page(1);
            row_read(2);
            if (sel(2) != 0)
                goto La90;
            for (;;) {
                latch(1);
                txt_draw(0x1A73);
                txt_set(0x1B4A);
                poll_spin();
                if (poll_go(0x8080) != 0)
                    goto La58;
                latch(4);
            La58:
                txt_draw(0x1B4A);
                cell_cur_save54_b();
                tail(0x45);
                cell_push_c8_lo(0x45);
                row_read(0x3F);
                if (sel(2) != 0)
                    continue;
                break;
            }
        La90:
            row_page_cur();
            row_read(0x80);
            if (sel(2) == 0)
                goto Lad8;
            row_page(1);
            row_read(0x80);
            if (sel(2) == 0)
                goto L7f8;
            continue;
        Lad8:
            txt_set(0x1B4A);
            midrow_prep_a();
            poll_spin();
            battle_put43();
            cell_put(0x43);
            row_prep(0x20);
            row_read2(0x43);
            row_arm_s_cur();
            cell_put_hi9(0x45);
            row_arm_s_cur();
            row_arm_s2_cur();
            cell_peek0(cell_state(0x45));
            cell_pos_fwd(0x1500);
            row_sync2(5);
            draw_pad(0x1B0A);
            row_sync();
            row_open();
            battle_wait_just(0x7E7E);
            row_prep_close();
            func_80128D4C();
            row_done();
            row_close();
            row_prep(0x20);
            row_sync2(5);
            battle_wait_just(0x7E7E);
            row_prep_close();
            return;
        }
    }
}
