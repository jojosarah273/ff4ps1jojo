/* FF4 source-port — interpreted module for func_80167914.
 * Ground truth: src/func_80167914.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80167914(void)
{
    /* shop: 3C3C/3B04 x3 gates; t0/t1 regcmp latch loop; returns
       at L167A14. */
    cell_state_of();
    cell_state(0x7992);
    cell_state_of();
    if (io_just() != 0)
        goto L167A14;
    cell_state_of();
    /* v1/v0 gate -> L167A14 */
    return;
L167A14:
    return;
}
