/* FF4 source-port — interpreted module for shop_b04_gate_loop_on_s0_v1_latch.
 * Ground truth: src/shop_b04_gate_loop_on_s0_v1_latch.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_b04_gate_loop_on_s0_v1_latch(void)
{
    /* shop: 3B04 gate; 5410 loop on s0/v1 latch. */
    cell_state_of();
    do {
        if (io_just() != 0)
            goto L1670F8;
        if (io_just() != 0)
            goto L1670F8;
        sep_a();
    } while (fn_1x97288() != 0);
    return;
L1670F8:
    sep_a();
    return;
}
