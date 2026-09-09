/* FF4 source-port — interpreted module for func_80170198.
 * Ground truth: src/func_80170198.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80170198(void)
{
    /* shop: 3C3C/3B04(0x1000)x2/3B9C gates; a0/a2 latch |
       v0 gates; returns at L1702C4. */
    cell_state_of();
    cell_state(0x1000);
    cell_state(0x1000);
    cell_peek_cur();
    /* v0 gates -> L170258 / L17026C */
    /* a0/a2 latch -> L170298 / L170284 */
    return;
L1702C4:
    return;
}
