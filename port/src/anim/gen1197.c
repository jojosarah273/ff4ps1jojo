/* FF4 source-port — interpreted module for battle_substate_router_early_v1_v0.
 * Ground truth: src/battle_substate_router_early_v1_v0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_substate_router_early_v1_v0(void)
{
    /* battle substate router. Early v1/v0 gates select 80184AF8 variants;
       the main chunk then dispatches to 80183A80 / 80185380 / (80183244 |
       80183F40) depending on register gates, all converging on 8017E794. */
    draw_pad(0x2030);
    row_info(0x86);
    draw_pad_cur();
    cb_slot15();
    event_spin_wait();
    /* v1/v0 gates -> L77A9C / L77AB8 */
    battle_anim_chain_s2_s1_v0_registe();
L77acc:
    fn_1x94988();
    battle_anim_twin_v0_gate_ladders_l();
    status_table_init();
    battle_dispatch_v0_v1_v0_gates_pic();
    shop_battle_v0_v1_v0_gates_pick_fe();
    /* L77B2C/L77B88 gates converge into the main chunk */
    battle_cutscene_b9c_gate_rows_with();
    fn_1x949f8();
    battle_input_gate_locks_clears_the();
    battle_anim_register_gates_route_f();
    battle_anim_v0_gates_returns_at_l1();
    selection_screen_driver_register_g();
    battle_anim_chain_x520_a0_v1_latch();
    battle_anim_v1_v0_v0_gates_rows();
    fn_1x7e740();
    battle_row_commit_seven_e794_write();
    /* L77BC8 (v1==v0) runs 80183A80; L77CB0 (v1!=v0) picks 80183244 or
       80183F40 (L77D0C/D20/D44 gates) or 80185380 (L77D6C). The register
       gates are not yet reconstructed: all routes merge at L77D54. */
    battle_anim_spin_loop_l17e8cc_gate();
    return;
}
