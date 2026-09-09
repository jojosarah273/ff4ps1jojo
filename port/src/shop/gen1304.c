/* FF4 source-port — interpreted module for func_80165B94.
 * Ground truth: src/func_80165B94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80165B94(void)
{
    /* shop: 3B04/3C3C(8) gates; s0/a0+s0/s4 latch loops with
       80165C7C rows; 5410 tail. */
    cell_state_of();
    cell_state(8);
    /* s0/a0 latch -> L165BD0; s0/s4 latch -> L165BF4 */
    func_80165C7C();
    sep_a();
    return;
}
