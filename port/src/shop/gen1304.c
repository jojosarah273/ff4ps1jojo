/* FF4 source-port — interpreted module for shop_b04_c3c_gates_s0_a0_s0_s4.
 * Ground truth: src/shop_b04_c3c_gates_s0_a0_s0_s4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_b04_c3c_gates_s0_a0_s0_s4(void)
{
    /* shop: 3B04/3C3C(8) gates; s0/a0+s0/s4 latch loops with
       80165C7C rows; 5410 tail. */
    cell_state_of();
    cell_state(8);
    /* s0/a0 latch -> L165BD0; s0/s4 latch -> L165BF4 */
    shop_c3c_row();
    sep_a();
    return;
}
