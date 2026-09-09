/* FF4 source-port — interpreted module for func_800F560C.
 * Ground truth: src/func_800F560C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u8 *D_8019ED5C;
void func_800F560C(u8 *a0)
{
    u32 v = *a0;
    *D_8019ED50 = v;
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == *D_8019ED5C)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < *D_8019ED5C)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
    (void)v;
}
