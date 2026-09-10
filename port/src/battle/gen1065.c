/* FF4 source-port — interpreted module for battle_c3c_b9c_gates_a1_v0_latch_l.
 * Ground truth: src/battle_c3c_b9c_gates_a1_v0_latch_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b9c_gates_a1_v0_latch_l(void)
{
    /* battle: 3C3C/3B9C gates; a1/v0 latch loops L11E044/L11E068. */
    cell_state_of();
    cell_peek_cur();
L11E044:
    if (io_just() == 0)
        goto L11E0A0;
    if (io_just() == 0)
        goto L11E144;
    if (io_just() != 0)
        goto L11E044;
    goto L11E0A0;
L11E0A0:
    /* a1/v0 latches -> L11E0DC */
    if (io_just() == 0)
        goto L11E144;
    if (io_just() != 0)
        goto L11E044;
    return;
L11E144:
    return;
}
