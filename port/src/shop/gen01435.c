/* FF4 source-port — interpreted module for shop_b04_x7000_x2_v1_t0_latch_loop.
 * Ground truth: src/shop_b04_x7000_x2_v1_t0_latch_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_b04_x7000_x2_v1_t0_latch_loop(void)
{
    /* shop: 3B04(0x7000) x2 + v1/t0 latch loop. */
    cell_state(0x7000);
    cell_state_of();
    for (;;) {
        if (func_80197288() != 0)
            continue;
        break;
    }
    return;
}
