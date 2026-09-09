/* FF4 source-port — interpreted module for func_80180504.
 * Ground truth: src/func_80180504.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180504(void)
{
    /* battle anim (twin): spin loops then 80194640. */
L180524:
    for (;;) {
        if (io_just() != 0)
            goto L180534;
        if (io_just() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
L180534:
    if (io_just() != 0)
        goto L180534;
    goto L180524;
}
