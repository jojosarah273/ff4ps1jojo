/* FF4 source-port — interpreted module for func_80180314.
 * Ground truth: src/func_80180314.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180314(void)
{
    /* battle anim: v0 spin loops (L180338/L180350) then 80194640. */
L180338:
    for (;;) {
        if (io_just() != 0)
            goto L180350;
        if (io_just() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
L180350:
    if (io_just() != 0)
        goto L180350;
    goto L180338;
}
