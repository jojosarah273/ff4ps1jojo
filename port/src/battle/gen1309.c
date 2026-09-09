/* FF4 source-port — interpreted module for func_8014B5A8.
 * Ground truth: src/func_8014B5A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014B5A8(void)
{
    for (;;) {
        func_8007259C();
        func_80149394();
        if (io_go() != 0)
            break;
        page_open(0xF118);
        label(0xF321);
    }
}
