/* FF4 source-port — interpreted module for fn_1x8ca18.
 * Ground truth: src/fn_1x8ca18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019B0A4[8];
extern u32 D_8019B130[8];
void fn_1x8ca18(u32 a0)
{
    u32 r = 0;
    if (a0 == 1)
        r = 1;
    D_8019B0A4[0] = a0;
    D_8019B130[0] = r;
}
