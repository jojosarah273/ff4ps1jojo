/* FF4 source-port — interpreted module for self_test_loop.
 * Ground truth: src/self_test_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void self_test_loop(void)
{
    s32 acc = 0xD;
    s32 n = 0;
    do {
        acc = 13 * acc;
        n++;
    } while (n < 0x3C);
}
