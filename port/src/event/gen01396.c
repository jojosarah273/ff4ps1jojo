/* FF4 source-port — interpreted module for func_8019584C.
 * Ground truth: src/func_8019584C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8019584C(void)
{
    /* event: 80196898 gate; 801968CC spin loop L1958E8. */
    if (func_80196898() == 0)
        goto L195918;
    do {
        func_801968CC();
        if (io_just() != 0)
            goto L195918;
    } while (io_just() != 0);
    return;
L195918:
    return;
}
