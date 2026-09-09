/* FF4 source-port — interpreted module for func_80194700.
 * Ground truth: src/func_80194700.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80194700(void)
{
    /* battle anim: 801943FC gates -> L1947A0 / L194758. */
    if (func_801943FC() == 0)
        goto L1947A0;
    if (io_just() != 0)
        goto L194758;
    return;
L194758:
    return;
L1947A0:
    return;
}
