/* FF4 source-port — interpreted module for event_a0_v0_latch_chain_l18e2e0_l1.
 * Ground truth: src/event_a0_v0_latch_chain_l18e2e0_l1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_a0_v0_latch_chain_l18e2e0_l1(void)
{
    /* event: a0/v0 latch chain (L18E2E0/L18E314/L18E35C); 8018F0C8
       row inside; returns at L18E3F4. */
    /* a0/v0 latch -> L18E35C */
L18E314:
    for (;;) {
        if (io_just() != 0)
            goto L18E334;
        anim_reg_stub();
        goto L18E3F4;
    L18E334:
        if (io_just() != 0)
            goto L18E314;
        break;
    }
    goto L18E3F4;
L18E3F4:
    return;
}
