/* FF4 source-port — interpreted module for battle_anim_v0_gates_f0_l181004_vs.
 * Ground truth: src/battle_anim_v0_gates_f0_l181004_vs.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_gates_f0_l181004_vs(void)
{
    /* battle anim: v0 gates; 801811F0 (L181004) vs 801810B8
       (L181040) rows. */
    if (io_just() == 0)
        goto L180FEC;
    goto L180FEC;
L180FEC:
    if (io_just() == 0)
        goto L18102C;
    battle_anim_v0_gates_bb4_row_loop();
    goto L181060;
L18102C:
    if (io_just() == 0)
        goto L181060;
    battle_anim_bb4_e28_d64_c90_row_lo();
    return;
L181060:
    return;
}
