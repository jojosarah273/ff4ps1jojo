/* FF4 source-port — interpreted module for battle_anim_chain_e8_c_c14_ef0c_fe.
 * Ground truth: src/battle_anim_chain_e8_c_c14_ef0c_fe.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_chain_e8_c_c14_ef0c_fe(void)
{
    /* battle anim chain: 80194394/801928E8/80194988/8017841C/
       80178C14/8011EF0C/800FEF7C/801947B8/8017D078/8017E220/
       8017E740/80178D00; linear. */
    cb_slot15();
    event_spin_wait();
    fn_1x94988();
    battle_anim_twin_v0_gate_ladders_l();
    status_table_init();
    battle_state_dc400();
    shop_battle_v0_v1_v0_gates_pick_fe();
    battle_anim_v0_gates_returns_at_l1();
    selection_screen_driver_register_g();
    battle_anim_chain_x520_a0_v1_latch();
    fn_1x7e740();
    battle_row_commit_seven_e794_write();
    return;
}
