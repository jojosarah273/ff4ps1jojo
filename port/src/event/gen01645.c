/* FF4 source-port — interpreted module for func_80180D64.
 * Ground truth: src/func_80180D64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180D64(void)
{
    /* battle anim (twin): v0 spin (L180DBC) then 80194640. */
L180D9C:
L180DBC:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    return;
}
