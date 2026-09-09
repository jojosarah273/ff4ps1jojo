/* FF4 source-port — interpreted module for func_8014654C.
 * Ground truth: src/func_8014654C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014654C(void)
{
    /* battle: 3C3C/3B04/3B9C gate tree with v1/v0 + a0/v1 + a2/v0
       latches; returns at L1466CC. */
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
    /* v0 gates -> L1466CC / L1465D8 */
    /* v1/v0 + a0/v1 + a2/v0 latch tree -> L146610/L14662C/L146648 */
    if (io_just() == 0)
        goto L1466A0;
    return;
L1466A0:
    goto L1466CC;
L1466CC:
    return;
}
