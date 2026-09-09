/* FF4 source-port — interpreted module for func_801460A4.
 * Ground truth: src/func_801460A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801460A4(void)
{
    /* battle: 3C3C/3B04/3B9C gates; s0/v0+v1 regcmp latches on the
       5480 row; returns at L1462C0. */
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
    /* s0 latches -> L146158 / L1461C0 / L1461AC */
    sep_b();
    /* v0 gates -> L14629C / L1462C0 */
    return;
}
