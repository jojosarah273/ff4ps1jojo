/* FF4 source-port — interpreted module for ability_status_screen_s0_cursor_v0.
 * Ground truth: src/ability_status_screen_s0_cursor_v0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_status_screen_s0_cursor_v0(void)
{
    /* ability/status screen. s0 = cursor; v0/s0 regcmp gates route the
       cursor-row recompute (L26FB4 vs L27048); the v1/v0 latch at L2712C
       loops back to L26F74 while unequal. */
    latch(0x15);
    txt_draw(0x1E01);
    latch(1);
    txt_draw(0x1E00);
    battle_cb_86120();
    fn_1x23d3c();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L26ef0:
    battle_anim_gate_a();
    cb_slot15();
    latch(0x30);
    cell_put(0xC1);
    shop_status_x48_x49_windows_c_rows();
    cell_clear_bank(0x1B47);
    goto L26F74;
L27080:
    txt_set(0x1A3C);
    if (gate(0x202) != 0)
        goto L270E8;
    battle_row_88();
    fn_1x28c4c();
    fn_1x3aaa8();
    row_prep(0x20);
    row_sync2(0x1BE4);
    cell_pull9_hi(0x17FE);
    row_prep_close();
    cell_clear_bank(0x17FB);
    fn_1x28264();
    return;
L26F74:
    for (;;) {
        fn_1x23fb4();
        midrow_paint_c();
        anim_noop();
        txt_set(0x1A3C);
        rows_x46_x45_windows_x1000_x7ff_x7();
        /* v0/s0 gate -> L26FB4 (or L26F74 tail) */
        fn_1x3836c(1);
    L26FB4:
        config_rows_e4();
        status_row_x30_xc1_x1d_x1e_x1a3c_x();
        status_c_header_f0_b0_cells_x_b8();
        midrow_paint_a();
        draw_pad_cur();
        battle_rows_29();
        config_row_q18();
        /* v0/s0 gate -> L27048 / L270E8 */
        fn_1x28750();
        shop_row_kick_f0();
        goto L270E8;
    L27048:
        party_stat_block_x1b9a_gate_main_p();
        ability_move_sub_screen_a3c_b47_te();
        /* v0/s0 gate -> return */
        break;
    L270E8:
        s2_branch();
        if (io_go() != 0) {
            fn_1x3b04c();
            fn_1x3aaa8();
            fn_1x87c20();
            battle_row_88();
            return;
        }
        fn_1x87c20();
        battle_row_88();
        /* v1/v0 latch -> L26F74 while unequal, else return */
        continue;
    }
    return;
}
