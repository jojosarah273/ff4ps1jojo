/* FF4 source-port — interpreted module for func_8018E2C8.
 * Ground truth: src/func_8018E2C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018E2C8(void)
{
    /* event: a0/v0 latch chain (L18E2E0/L18E314/L18E35C); 8018F0C8
       row inside; returns at L18E3F4. */
    /* a0/v0 latch -> L18E35C */
L18E314:
    for (;;) {
        if (io_just() != 0)
            goto L18E334;
        func_8018F0C8();
        goto L18E3F4;
    L18E334:
        if (io_just() != 0)
            goto L18E314;
        break;
    }
    goto L18E3F4;
L18E3F4:
    return;
}
