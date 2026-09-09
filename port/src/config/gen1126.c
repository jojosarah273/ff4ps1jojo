/* FF4 source-port — interpreted module for func_801298A0.
 * Ground truth: src/func_801298A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801298A0(void)
{
    txt_set(0x1B06);
    if (gate(2) != 0) {
        page(0x41);
        func_80129910();
    } else {
        poll_spin();
        if (poll_go(2) != 0)
            wnd_open(0x50);
    }
}
