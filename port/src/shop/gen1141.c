/* FF4 source-port — interpreted module for shop_c3c_b04_x3_gates_t0_t1_regcmp.
 * Ground truth: src/shop_c3c_b04_x3_gates_t0_t1_regcmp.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_c3c_b04_x3_gates_t0_t1_regcmp(void)
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
