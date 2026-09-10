/* FF4 source-port — interpreted module for shop_c3c_b04_x2000_b9c_gates_c_loo.
 * Ground truth: src/shop_c3c_b04_x2000_b9c_gates_c_loo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_c3c_b04_x2000_b9c_gates_c_loo(void)
{
    /* shop: 3C3C/3B04(0x2000)/3B9C gates; 971C loop on s2 latch. */
    cell_state_of();
    cell_state(0x2000);
    cell_peek_cur();
    sep();
    do {
        sep();
    } while (func_80197288() != 0);
    sep();
    return;
}
