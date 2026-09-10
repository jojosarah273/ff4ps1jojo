/* FF4 source-port — interpreted module for battle_anim_a0x2_x2_pairs_linear.
 * Ground truth: src/battle_anim_a0x2_x2_pairs_linear.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_a0x2_x2_pairs_linear(void)
{
    /* battle anim: 80194640/80194394/801946A0x2/80194700x2/
       80194518 pairs; linear. */
    cb_slot2();
    cb_slot15();
    func_801946A0();
    func_801946A0();
    cb_slot15();
    battle_anim_gate_a();
    battle_anim_gate_a();
    cb_slot15();
    fn_1x94518();
    cb_slot15();
    return;
}
