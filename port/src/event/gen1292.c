/* FF4 source-port — interpreted module for battle_anim_v1_v0_v0_gates_spin_lo.
 * Ground truth: src/battle_anim_v1_v0_v0_gates_spin_lo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v1_v0_v0_gates_spin_lo(void)
{
    /* battle anim: v1/v0 + v0 gates; spin loops L182608/L18266C. */
    if (io_just() != 0)
        goto L182668;
    if (io_just() != 0)
        goto L182668;
    return;
L182668:
    for (;;) {
        if (io_just() != 0)
            goto L182668;
        break;
    }
    return;
}
