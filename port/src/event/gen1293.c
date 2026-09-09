/* FF4 source-port — interpreted module for func_80181498.
 * Ground truth: src/func_80181498.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80181498(void)
{
    /* battle anim: 801824D8 spin loops (L181500/L181578), 80194640
       closes. */
    do {
        func_801824D8();
    } while (io_just() != 0);
    for (;;) {
        if (io_just() != 0)
            goto L181578;
        break;
    }
    cb_slot2();
    return;
L181578:
    do {
        func_801824D8();
    } while (io_just() != 0);
    cb_slot2();
    return;
}
