/* FF4 source-port — interpreted module for battle_anim_twin_v0_gate_ladders_l.
 * Ground truth: src/battle_anim_twin_v0_gate_ladders_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_twin_v0_gate_ladders_l(void)
{
    /* battle anim: twin v0 gate ladders (L178480..L178504,
       L1785C0..L178644); 80194018(1)/80187D1C/80178890/80178BB4/
       80187B00/80194394/80197708/801776E8 tail chain. */
    /* gate ladders (regcmp v0/v1 + v0 beqz runs) -> L178534/L178570
       then L1786B0 */
    func_80194018(1);
    battle_v0_gates_cd0_row_when_nonze();
    func_80178890();
    fn_1x78bb4();
    func_80187B00();
    cb_slot15();
    func_80197708();
    battle_anim_b8_x2_f9bd0_c8_bec_row();
    return;
}
