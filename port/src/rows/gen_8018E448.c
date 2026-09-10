/* FF4 source-port — interpreted module for fn_1x8e448.
 * Ground truth: src/fn_1x8e448.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019B150;
void fn_1x8e448(u32 a0)
{
    u32 old = *D_8019B150;
    if (a0 != old) {
        *D_8019B150 = a0;
        func_8018E488();
    }
    return old;
}
