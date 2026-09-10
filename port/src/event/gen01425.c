/* FF4 source-port — interpreted module for battle_anim_v0_v1_v0_gate_tree_b8.
 * Ground truth: src/battle_anim_v0_v1_v0_gate_tree_b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_v1_v0_gate_tree_b8(void)
{
    /* battle anim: v0 + v1/v0 gate tree; 801825B8/801826C8 rows
       via L182C74. */
    if (io_just() != 0)
        goto L182B60;
    if (io_just() != 0)
        goto L182B60;
L182B60:
    /* v1/v0 gates -> L182BE0 / L182B88 / L182B9C / L182C74 */
    battle_anim_v1_v0_v0_gates_spin_lo();
    battle_anim_spin_loops_l1827a8_l18();
    return;
L182C74:
    return;
}
