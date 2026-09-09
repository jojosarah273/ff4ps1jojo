/* FF4 source-port — interpreted module for func_80181300.
 * Ground truth: src/func_80181300.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80181300(void)
{
    /* battle anim: v1/v0 gates; 801813C0 row at L18138C. */
    if (io_just() != 0)
        goto L1813B0;
    func_801813C0();
    return;
L1813B0:
    return;
}
