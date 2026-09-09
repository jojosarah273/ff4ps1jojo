/* FF4 source-port — interpreted module for func_8017F148.
 * Ground truth: src/func_8017F148.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017F148(void)
{
    /* battle anim: wide v0 gate ladder (L17F1EC..L17F398 spins),
       L17F25C main loop; closes with 2x 80194640. */
    /* v0 gates -> L17F1E8/L17F1EC/L17F1DC */
    for (;;) {
        /* L17F2E4..L17F398 spin run */
    }
L17F4A4:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L17F508:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    cb_slot2();
    return;
}
