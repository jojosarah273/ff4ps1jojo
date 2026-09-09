/* FF4 source-port — interpreted module for func_80147020.
 * Ground truth: src/func_80147020.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80147020(void)
{
    /* battle: 3C3C/3B9C gates; 800728AC rows + 5480/5410 tails. */
    cell_state_of();
    cell_peek_cur();
    if (io_just() == 0)
        goto L1470B0;
    func_800728AC();
L1470A0:
    sep_b();
    goto L1470D4;
L1470B0:
    func_800728AC();
    if (io_just() != 0)
        goto L1470A0;
    sep_a();
    return;
L1470D4:
    return;
}
