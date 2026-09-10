/* FF4 source-port — interpreted module for battle_anim_v0_spin_loops_l180338.
 * Ground truth: src/battle_anim_v0_spin_loops_l180338.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_spin_loops_l180338(void)
{
    /* battle anim: v0 spin loops (L180338/L180350) then 80194640. */
L180338:
    for (;;) {
        if (io_just() != 0)
            goto L180350;
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    return;
L180350:
    if (io_just() != 0)
        goto L180350;
    goto L180338;
}
