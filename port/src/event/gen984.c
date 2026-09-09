/* FF4 source-port — interpreted module for func_801922D8.
 * Ground truth: src/func_801922D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801922D8(void)
{
    /* event flow: 80192888/801928E8 spins, 80191838/80191858/
       80192858/801919B4 rows; gates at L192300/L192380. */
    if (io_just() != 0)
        func_80192888();
L192300:
    /* v0 gates -> L192324 / L192380 / L192AC */
    for (;;) {
        func_801928E8();
        if (io_just() == 0)
            goto L192324;
        if (io_just() != 0)
            continue;
        break;
    }
L192380:
    func_801928E8();
    goto L192380;
L1923A8:
L1923AC:
    if (io_just() == 0)
        goto L192464;
    func_80191858();
    if (io_just() == 0)
        goto L1923EC;
    func_80192858();
L1923EC:
    func_80191838(9);
    func_801919B4();
    if (io_just() == 0)
        goto L192464;
    func_801928E8();
L19243c:
    for (;;) {
        func_801928E8();
        if (io_just() == 0)
            goto L192344;
        if (io_just() != 0)
            continue;
        break;
    }
L192464:
    return;
L192324:
    func_80191838();
    return;
L192344:
    func_80191838();
    return;
}
