/* FF4 source-port — interpreted module for func_8019822C.
 * Ground truth: src/func_8019822C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8019822C(void)
{
    /* event: v0 gates; 801982E8 + v0/s4 latch rows. */
    if (io_just() == 0)
        goto L19827C;
    func_801982E8();
    /* v0/s4 latch -> L1982A0 / L1982C0 */
    return;
L19827C:
    func_801982E8();
    /* v0/s4 latch -> L1982A0 / L1982C0 */
    return;
L1982A0:
    return;
L1982C0:
    return;
}
