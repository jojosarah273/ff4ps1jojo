/* FF4 source-port — interpreted module for func_8016D3E0.
 * Ground truth: src/func_8016D3E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016D3E0(void)
{
    /* shop: 3C3C/3B9C gates; 8016D160 row with 5480/5410 tails. */
    cell_state_of();
    cell_peek_cur();
    func_8016D160();
    sep_b();
    goto L16D4C8;
L16D490:
    func_8016D160();
    sep_a();
    return;
L16D4C8:
    return;
}
