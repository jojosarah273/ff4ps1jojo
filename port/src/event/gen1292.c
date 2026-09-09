/* FF4 source-port — interpreted module for func_801825B8.
 * Ground truth: src/func_801825B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801825B8(void)
{
    /* battle anim: v1/v0 + v0 gates; spin loops L182608/L18266C. */
    if (io_just() != 0)
        goto L182668;
    if (io_just() != 0)
        goto L182668;
    return;
L182668:
    for (;;) {
        if (io_just() != 0)
            goto L182668;
        break;
    }
    return;
}
