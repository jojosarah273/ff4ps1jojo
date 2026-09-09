/* FF4 source-port — interpreted module for func_801820F4.
 * Ground truth: src/func_801820F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801820F4(void)
{
    /* battle anim: 80194640 row + v0 spin loops L18220C/L182200. */
    cb_slot2();
    for (;;) {
        if (io_just() != 0)
            goto L18220C;
        if (io_just() != 0)
            continue;
        break;
    }
    goto L18225C;
L18220C:
    cb_slot2();
    return;
L18225C:
    return;
}
