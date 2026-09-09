/* FF4 source-port — interpreted module for func_8018FA00.
 * Ground truth: src/func_8018FA00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018FA00(void)
{
    /* event: s1/v0 + v0/s1 latches; 80190004(1)/80190078/80190088
       rows with 8018F0C8 polls; returns at L18FC9C. */
    if (func_80190004(1) != 0)
        goto L18FA74;
    anim_reg_stub();
    goto L18FC9C;
L18FA74:
    if (func_80190078() == 0)
        goto L18FAB4;
    anim_reg_stub();
    goto L18FC9C;
L18FAB4:
    if (func_80190004(1) != 0)
        goto L18FB0C;
    anim_reg_stub();
    goto L18FC9C;
L18FB0C:
    if (io_just() != 0)
        goto L18FB30;
    anim_reg_stub();
L18FB30:
    if (io_just() == 0)
        goto L18FC44;
    for (;;) {
        if (io_just() == 0)
            goto L18FC44;
        func_80190088();
        if (io_just() != 0)
            goto L18FC2C;
        anim_reg_stub();
        goto L18FC2C;
    L18FC2C:
        if (io_just() == 0)
            goto L18FC6C;
        if (io_just() != 0)
            continue;
        break;
    }
L18FC44:
    if (io_just() == 0)
        goto L18FC6C;
L18FC6C:
    if (io_just() != 0)
        goto L18FC9C;
    anim_reg_stub();
    return;
L18FC9C:
    return;
}
