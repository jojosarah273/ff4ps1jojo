/* FF4 source-port — interpreted module for func_801681C0.
 * Ground truth: src/func_801681C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801681C0(void)
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
