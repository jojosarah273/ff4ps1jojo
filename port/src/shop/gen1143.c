/* FF4 source-port — interpreted module for func_80166E58.
 * Ground truth: src/func_80166E58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166E58(void)
{
    /* shop: 3C3C/3B04(0x2000)x2 gates; s0/v0 + a1/v0 latch loops
       with 9330/95A0 rows. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    /* s0/v0 latch -> L166ED4 / L166F78 */
    row_open();
    row_close();
    return;
L166EA8:
    /* a1/v0 latch -> loop */
    return;
}
