/* FF4 source-port — interpreted module for func_80119C7C.
 * Ground truth: src/func_80119C7C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119C7C(void)
{
    /* event: v0 spin loop L119CEC; 8017F5C0 tail. */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    func_8017F5C0();
    return;
}
