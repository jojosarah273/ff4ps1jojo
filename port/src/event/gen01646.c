/* FF4 source-port — interpreted module for func_80180C90.
 * Ground truth: src/func_80180C90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180C90(void)
{
    /* battle anim (twin): v0 spin (L180CE8) then 80194640. */
L180CC8:
L180CE8:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
}
