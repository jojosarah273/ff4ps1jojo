/* FF4 source-port — interpreted module for func_80181DA4.
 * Ground truth: src/func_80181DA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80181DA4(void)
{
    /* battle anim: 801824D8 spin loops L181E04/L181FF4 with
       80194640 rows; returns at L1820CC. */
    for (;;) {
        if (func_801824D8() != 0)
            continue;
        break;
    }
    if (io_just() == 0)
        goto L181F60;
    func_80194640();
L181F60:
    if (io_just() == 0)
        goto L1820CC;
    for (;;) {
        if (func_801824D8() != 0)
            continue;
        break;
    }
    func_80194640();
L1820CC:
    return;
}
