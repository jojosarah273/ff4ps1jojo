/* FF4 source-port — interpreted module for func_80187DAC.
 * Ground truth: src/func_80187DAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80187DAC(void)
{
    /* battle: 800FF0AC row loop L187DC0. */
    do {
        func_800FF0AC();
    } while (io_just() != 0);
    return;
}
