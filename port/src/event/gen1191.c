/* FF4 source-port — interpreted module for func_80192478.
 * Ground truth: src/func_80192478.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80192478(void)
{
    /* event: 801928E8 spins, 80191838/80191858/80192858 rows, then
       801928E8/80192718/80191AE8(9)/801920F0 tail. */
    if (io_just() != 0)
        func_801928E8();
L1924cc:
    for (;;) {
        func_801928E8();
        if (io_just() == 0)
            goto L192524;
        if (io_just() != 0)
            continue;
        break;
    }
L1924F4:
    /* v1/v0 gates -> L192550 / L19255C */
L192524:
    func_80191838();
    goto L1924F4;
L192568:
    func_80191838();
    func_80191858();
    func_80192858();
L1925bc:
    for (;;) {
        func_801928E8();
        func_80192718();
        if (io_just() == 0)
            goto L1925E8;
        func_80191AE8(9);
        break;
    }
L1925E8:
    func_801920F0();
    return;
}
