/* FF4 source-port — interpreted module for func_801896C0.
 * Ground truth: src/func_801896C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801896C0(void)
{
    /* event: 80191838/801928A8/80191858 rows + v0 spin. */
    func_80191838();
    func_801928A8();
    func_80191858();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    return;
}
