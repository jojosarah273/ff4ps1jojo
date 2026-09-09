/* FF4 source-port — interpreted module for func_801977B8.
 * Ground truth: src/func_801977B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801977B8(void)
{
    /* event: jr-$t2 dispatch; 8018F078 spin loops (L197860/L197908);
       80197A68 tail; returns at L197948. */
    /* jr $t2 -> L197820 / others */
    if (io_just() != 0)
        goto L197820;
    for (;;) {
        if (io_just() == 0)
            goto L197894;
        break;
    }
L197860:
    do {
        func_8018F078();
    } while (io_just() == 0);
    goto L197894;
L197894:
    goto L197948;
L197948:
    return;
L197820:
    if (io_just() == 0)
        goto L197894;
    func_80197A68();
    return;
}
