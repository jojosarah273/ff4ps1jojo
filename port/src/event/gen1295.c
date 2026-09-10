/* FF4 source-port — interpreted module for battle_anim_v0_gates_bb4_row_loop.
 * Ground truth: src/battle_anim_v0_gates_bb4_row_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_gates_bb4_row_loop(void)
{
    /* battle anim: v0 gates; 80180BB4 row loop L1812B0. */
    if (io_just() != 0)
        goto L181240;
    goto L181240;
L181240:
    if (io_just() == 0)
        goto L1812E4;
    do {
        if (battle_anim_d8_spin_row() == 0)
            goto L1812E4;
    } while (io_just() != 0);
    return;
L1812E4:
    return;
}
