/* FF4 source-port — interpreted module for battle_v0_gate_picks_eac8_vs_f148.
 * Ground truth: src/battle_v0_gate_picks_eac8_vs_f148.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_v0_gate_picks_eac8_vs_f148(void)
{
    /* battle: v0 gate picks 8017EAC8 vs 8017F148 rows. */
    if (io_just() == 0)
        goto L17F60C;
    battle_anim_wide_v0_gate_ladder_l1();
    return;
L17F60C:
    func_8017F148();
    return;
L17F630:
    return;
}
