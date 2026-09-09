/* FF4 source-port — interpreted module for func_80180E28.
 * Ground truth: src/func_80180E28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180E28(void)
{
    /* battle anim (twin): v0 spin (L180E74) then 80194640. */
L180E5C:
L180E74:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    return;
}
