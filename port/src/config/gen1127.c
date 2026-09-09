/* FF4 source-port — interpreted module for func_801282D4.
 * Ground truth: src/func_801282D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801282D4(void)
{
    txt_set(0x1B47);
    if (gate(0x202) != 0) {
        sep_b();
        return;
    }
    txt_set(0x1A3C);
    if (gate(0x202) != 0) {
        poll_spin();
        func_8012833C();
    }
}
