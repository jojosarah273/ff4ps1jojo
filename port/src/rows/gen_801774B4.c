/* FF4 source-port — interpreted module for battle_anim_chain_f94_af8_f538_dd0.
 * Ground truth: src/battle_anim_chain_f94_af8_f538_dd0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_chain_f94_af8_f538_dd0(void)
{
    /* battle anim chain: 80189F94/80192AF8/8018F538/80178DD0 preps,
       80194018(1)+8019418C+80178BB4+80178730 core, then 6 splash
       rows (801782C0x2/8017835C/801780B4x2/80178220) and the
       801799F0/80179670/801847D8/80185030 drivers; ends 80178890/
       80179930/801977A8/801776E8. */
    func_80189F94();
    func_80192AF8();
    event_f5c8_v0_v1_s0_v0_latch_loop();
    func_80178DD0();
    func_80194018(1);
    func_8019418C();
    fn_1x78bb4();
    battle_anim_a8_x3_x2_rows_e8_spin();
    func_801782C0();
    func_801782C0();
    func_8017835C();
    battle_anim_d8_preps_loop_l17815c();
    battle_anim_d8_preps_loop_l17815c();
    func_80178220();
    func_801799F0();
    func_80178A58();
    func_80178F20();
    func_8018600C();
    func_80178988();
    func_80179670();
    func_801847D8();
    func_80185030();
    func_80178890();
    func_80179930();
    func_801977A8();
    battle_anim_b8_x2_f9bd0_c8_bec_row();
    return;
}
