/* FF4 source-port — interpreted module for func_8015AACC.
 * Ground truth: src/func_8015AACC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015AACC(void)
{
    /* options: 3C3C/3B04(0x2000)/3B9C gates; s0/v0 latch picks
       8015A5B8 vs 8015236C/8015254C rows; closes 8015ABEC/8015A56C. */
    cell_state_of();
    cell_state(0x2000);
    cell_peek_cur();
    /* s0/v0 latch -> L15ABB8 / L15ABBC */
    func_8015A5B8();
L15ab3c:
    /* v0 gate -> L15AB7C */
    func_8015236C();
    goto L15ABC4;
L15AB7C:
    func_8015254C();
L15ABBC:
    goto L15ABC4;
L15ABC4:
    func_8015ABEC();
    func_8015A56C();
    return;
}
