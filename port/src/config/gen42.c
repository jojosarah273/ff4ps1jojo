/* FF4 source-port — interpreted module for fn_1x391d4.
 * Ground truth: src/fn_1x391d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x391d4(u32 a0)
{
    if (a0 != 0)
        goto L922c;
    battle_anim_chain_e8_c_c14_ef0c_fe();
    battle_anim_chain_e8_c_c14_ef0c_fe();
L91f4:
    for (;;) {
        midrow_degen();
        ability_rows_x1bb0_x1bb1_texts_x5b();
        ability_rows_ca4_preps_x1baf_text();
        wnd_open(0x3188);
        fn_1x26070();
        midrow_pad88_run();
        config_row_7800();
    L922c:
        row_read2(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto L926c;
        wnd_open(0x1340);
        party_form_formation_screen_x1d_x1();
        sep_a();
        return;
    L926c:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L92c4;
        row_page(0xE2);
        io_poll(0x11);
        if (io_just() != 0)
            goto L92bc;
        ability_detail_x1340_x1440_texts_x();
        goto L92c4;
    L92bc:
        ability_stat_cast_x1440_x1340_x144();
    L92c4:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto L9314;
        txt_set(0x1BB1);
        if (gate(2) != 0)
            goto L930c;
        cell_clear_bank(0x1BB1);
        goto L9454;
    L930c:
        page_paint2(0x1BB1);
    L9314:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto L9364;
        txt_set(0x1BB1);
        if (gate(0x202) != 0)
            goto L935c;
        page_paint2(0x1BB1);
        goto L9384;
    L935c:
        cell_clear_bank(0x1BB1);
    L9364:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L9434;
    L9384:
        txt_set(0x1BB0);
        if (gate(0x202) != 0)
            goto L942c;
        txt_set(0x1BB2);
        if (gate(2) != 0)
            goto L9434;
        cell_dec_bank(0x1BB2);
        latch(8);
        for (;;) {
            row_prep(0x20);
            cell_dec_cell(0x99);
            cell_dec_cell(0x99);
            row_prep_close();
            cell_cursor_dec();
            ability_rows_x1bb0_x1bb1_texts_x5b();
            midrow_pad88_run();
            config_row_7800();
            row_close2();
            poll_spin();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        goto L950c;
    L942c:
        cell_dec_bank(0x1BB0);
    L9434:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L91f4;
    L9454:
        txt_set(0x1BB0);
        io_poll(6);
        if (io_just() == 0)
            goto L952c;
        txt_set(0x1BB2);
        if (io_press(cell_state(0xE2)) != 0)
            goto L91f4;
        page_paint2(0x1BB2);
        latch(8);
        for (;;) {
            row_prep(0x20);
            cell_inc_cell(0x99);
            cell_inc_cell(0x99);
            row_prep_close();
            cell_cursor_dec();
            ability_rows_x1bb0_x1bb1_texts_x5b();
            midrow_pad88_run();
            config_row_7800();
            row_close2();
            poll_spin();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
    L950c:
        midrow_degen();
        page(2);
        tail_cur();
        goto L922c;
    L952c:
        page_paint2(0x1BB0);
        goto L91f4;
    }
    return;
}
