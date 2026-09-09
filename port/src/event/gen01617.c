/* FF4 source-port — interpreted module for func_80192F34.
 * Ground truth: src/func_80192F34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80192F34(void)
{
    /* event: s2/s4 gate; 80197798(3) + 801977B8 spin rows with s1
       latches; returns at L193058. */
    /* s2/s4 latch -> L19305C */
    if (io_just() != 0)
        goto L192FE4;
    func_80197798(3);
    func_801977B8();
    return;
L192FE4:
    for (;;) {
        /* s1 latches -> L193020/L193038/L193048 */
        if (func_801977B8() != 0)
            continue;
        break;
    }
    return;
L193058:
    return;
}
