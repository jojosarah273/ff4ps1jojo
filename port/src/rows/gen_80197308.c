/* FF4 source-port — interpreted module for fn_1x97308.
 * Ground truth: src/fn_1x97308.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x97308(u8 *a0, u32 a1)
{
    u8 v = a0[7];
    if (a1 != 0)
        v |= 0x1;
    else
        v &= 0xFE;
    a0[7] = v;
}
