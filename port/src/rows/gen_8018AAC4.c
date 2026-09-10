/* FF4 source-port — interpreted module for fn_1x8aac4.
 * Ground truth: src/fn_1x8aac4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019B114;
extern u32 D_8019B13C;
void fn_1x8aac4(u32 a0, u16 a1, u32 a2)
{
    if (a2 != 0)
        D_8019B114[a0] = (u16)(a1 >> D_8019B13C);
    else
        D_8019B114[a0] = a1;
}
