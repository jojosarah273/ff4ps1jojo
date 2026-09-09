/* FF4 source-port — interpreted module for func_80167074.
 * Ground truth: src/func_80167074.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80167074(void)
{
    /* shop: 3B04 gate; 5410 loop on s0/v1 latch. */
    cell_state_of();
    do {
        if (io_just() != 0)
            goto L1670F8;
        if (io_just() != 0)
            goto L1670F8;
        sep_a();
    } while (func_80197288() != 0);
    return;
L1670F8:
    sep_a();
    return;
}
