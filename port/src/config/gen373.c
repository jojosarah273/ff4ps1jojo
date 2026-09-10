/* FF4 source-port — interpreted module for v1_v0_branch.
 * Ground truth: src/v1_v0_branch.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void v1_v0_branch(void)
{
    txt_set(0x1A02);
    if (gate(0x202) != 0)
        goto L7c00;
    fn_1x2219c();
    return;
L7c00:
    battle_row_88();
L7c08:
    fn_1x37b18();
    func_80178BB4();
    battle_anim_e8_fc_preps_v1_v0_gate();
L7c24:
    /* v1/v0 branch */
    func_80178BB4();
    return;
    /* v1/v0 branch */
    fn_1x38788();
    fn_1x37b18();
    /* v1/v0 branch */
    func_80187CD0();
    fn_1x38730();
    latch(1);
    txt_draw(0x1B47);
    latch(1);
    txt_draw(0x1A3C);
    rows_x46_x45_windows_x1000_x7ff_x7();
    config_rows_e4();
    status_row_x30_xc1_x1d_x1e_x1a3c_x();
    goto L7d40;
L7cc8:
    party_stat_block_x1b9a_gate_main_p();
    latch(1);
    txt_draw(0x1B47);
    txt_set(0x1A3C);
    if (gate(0x202) != 0)
        goto L7d10;
    latch(1);
    txt_draw(0x1A3C);
L7d10:
    rows_x46_x45_windows_x1000_x7ff_x7();
    config_rows_e4();
    status_row_x30_xc1_x1d_x1e_x1a3c_x();
    ability_move_sub_screen_a3c_b47_te();
    if (io_go() == 0)
        goto L7ec0;
L7d40:
    s2_branch();
    if (io_go() == 0)
        goto L80dc;
    /* beqz/v1-s1 branch */
    battle_anim_e8_fc_preps_v1_v0_gate();
    /* v1/s1 branch */
    fn_1x38788();
    goto L7c00;
    rows_x1a3c_text_ccc_spin_loop_l138();
    txt_set(0x1A3C);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L7e88;
    cell_put(0x46);
    open_row(0x45);
    cell_fmt2(0x45);
    wnd_open(0xF600);
    row_open2();
    row_prep(0x20);
    row_sync2(0x7FF);
    battle_wait_just(0x7E70);
    row_prep_close();
    row_pad();
    fn_1x38788();
    func_8013813C();
    /* v1/v0 branch */
    func_80187CD0();
L7e88:
    config_row_221ec();
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    goto L7ed8;
L7ec0:
    draw_pad_cur();
L7ed8:
    battle_rows_29();
    fn_1x38788();
    /* v1/v0 + s2 branches */
    status_pane_build();
    battle_anim_chain_e8_c_c14_ef0c_fe();
    battle_anim_chain_e8_c_c14_ef0c_fe();
    battle_anim_chain_e8_c_c14_ef0c_fe();
    battle_anim_e8_fc_preps_v1_v0_gate();
    /* v1/v0 branch */
    rows_x1a3c_text_ccc_spin_loop_l138();
    ability_status_details_screen_head();
    config_row_221ec();
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    fn_1x38788();
    /* v1/v0 + s2 branches */
    func_8013836C();
L7fcc:
    config_row_f320();
    /* v0/s0, v0/s1 branches */
    func_80145AA0();
    func_80145AA0();
    func_80138620();
    /* v1/v0 branch */
    func_801383B8();
    /* s3/s2 branches */
    fn_1x1ff40();
    /* v0/s1 branch */
    func_80138408();
    battle_row_88();
    /* v1/v0 + s2 branches */
    func_80178BB4();
    battle_anim_e8_fc_preps_v1_v0_gate();
    /* v1/v0 + s2 branches */
    fn_1x38730();
    goto L7c24;
L80dc:
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_row_88();
    fn_1x38788();
    goto L7c08;
    return;
}
