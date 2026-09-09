/* FF4 source-port — interpreted module for func_80183244.
 * Ground truth: src/func_80183244.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80183244(void)
{
    /* battle anim FSM: v0 + t1/v0 gates route the 80182E54 spin
       loops (L183354/L183368 or L183504/L183518); L183650 branch
       runs 80183048; tail gates to L183A38. */
    if (io_just() == 0)
        goto L183650;
    /* t1/v0 latch -> L183484 */
L183354:
    for (;;) {
        func_80182E54();
        if (io_just() != 0)
            goto L183368;
        if (io_just() != 0)
            goto L183354;
        break;
    }
L183484:
L183504:
    for (;;) {
        func_80182E54();
        if (io_just() != 0)
            goto L183518;
        if (io_just() != 0)
            goto L183504;
        break;
    }
    goto L183A5C;
L183650:
    func_80183048();
    goto L183A38;
L183A38:
    /* v0 gates -> L183774/L1838A0/80183048 */
    return;
L183A5C:
    return;
L183368:
    goto L183354;
L183518:
    goto L183504;
}
