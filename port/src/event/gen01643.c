/* FF4 source-port — interpreted module for battle_anim_v1_v0_gates_c0_row_at.
 * Ground truth: src/battle_anim_v1_v0_gates_c0_row_at.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v1_v0_gates_c0_row_at(void)
{
    /* battle anim: v1/v0 gates; 801813C0 row at L18138C. */
    if (io_just() != 0)
        goto L1813B0;
    battle_anim_v0_gates_d8_row_loop_l();
    return;
L1813B0:
    return;
}
