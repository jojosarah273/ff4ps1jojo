/* FF4 source-port — interpreted module for battle_anim_twin_spin_loops_then.
 * Ground truth: src/battle_anim_twin_spin_loops_then.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_twin_spin_loops_then(void)
{
    /* battle anim (twin): spin loops then 80194640. */
L180524:
    for (;;) {
        if (io_just() != 0)
            goto L180534;
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    return;
L180534:
    if (io_just() != 0)
        goto L180534;
    goto L180524;
}
