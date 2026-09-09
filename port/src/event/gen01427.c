/* FF4 source-port — interpreted module for func_801820F4.
 * Ground truth: src/func_801820F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801820F4(void)
{
    /* battle anim: 80194640 row + v0 spin loops L18220C/L182200. */
    func_80194640();
    for (;;) {
        if (io_just() != 0)
            goto L18220C;
        if (io_just() != 0)
            continue;
        break;
    }
    goto L18225C;
L18220C:
    func_80194640();
    return;
L18225C:
    return;
}
