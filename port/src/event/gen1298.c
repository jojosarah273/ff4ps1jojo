/* FF4 source-port — interpreted module for func_80180414.
 * Ground truth: src/func_80180414.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180414(void)
{
    /* battle anim (twin): spin loops then 80194640. */
L180438:
    for (;;) {
        if (io_just() != 0)
            goto L180450;
        if (io_just() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
L180450:
    if (io_just() != 0)
        goto L180450;
    goto L180438;
}
