/* FF4 source-port — interpreted module for ability_move_sub_screen_a3c_b47_te.
 * Ground truth: src/ability_move_sub_screen_a3c_b47_te.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_move_sub_screen_a3c_b47_te(void)
{
    /* ability-move sub-screen: 1A3C/1B47 texts, two browse loops
       (L127294 equip, L127354 detail) with 801282D4 row-commit; exits via
       80136148 or the 80135BE4/80136014 left-route. */
    ability_when_the_panel_cell_is_run();
L127178:
    for (;;) {
        txt_set(0x1A3C);
        io_poll(5);
        if (io_go() == 0)
            goto L1271A0;
        cell_clear_bank(0x1A3C);
    L1271A0:
        midrow_pad88_run();
        battle_state_dc400();
        latch(0x1F);
        cell_pull_c8_lo(0x212C);
        page_paint2(0x16A7);
        midrow_degen();
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L127210;
        sep_b();
        fn_1x36148();
        return;
    L127210:
        /* v1/v0 gate */
        ability_v1_v0_gates_pick_ee4_f0e8();
        sep_a();
        ability_x_a8_cell_rows_linear();
        return;
    L127264:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L127324;
        latch(0xF);
        cell_pull_c8_lo(0x212C);
    L127294:
        for (;;) {
            txt_set(0x1B47);
            if (gate(2) != 0)
                goto L1272D4;
            txt_set(0x1A3C);
            poll_spin();
            if (poll_go(2) != 0)
                goto L1272F4;
            goto L1272FC;
        L1272D4:
            txt_set(0x1A3C);
            poll_spin();
            if (poll_go_cur() != 0)
                goto L1272FC;
        L1272F4:
            latch(4);
        L1272FC:
            txt_draw(0x1A3C);
            fn_1x282d4();
            if (io_go() == 0)
                continue;
            break;
        }
        goto L1273A4;
    L127324:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L1273C4;
        latch(0xF);
        cell_pull_c8_lo(0x212C);
    L127354:
        for (;;) {
            txt_set(0x1A3C);
            cell_set50_from40();
            io_poll(5);
            if (io_just() == 0)
                goto L127384;
            txt_set(0x1B47);
        L127384:
            txt_draw(0x1A3C);
            fn_1x282d4();
            if (io_go() == 0)
                continue;
            break;
        }
    L1273A4:
        txt_set(0x1A3C);
        rows_x46_x45_windows_x1000_x7ff_x7();
        config_rows_e4();
        status_row_x30_xc1_x1d_x1e_x1a3c_x();
    L1273C4:
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0) {
            sep_a();
            fn_1x36148();
            return;
        }
        continue;
    }
}
