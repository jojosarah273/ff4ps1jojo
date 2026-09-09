/* FF4 source-port — interpreted module for func_800F56AC.
 * Ground truth: src/func_800F56AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u16 *D_8019ED54;
void func_800F56AC(u8 *a0)
{
    *D_8019ED50 = *a0;
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == (u8)*D_8019ED54)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < (u8)*D_8019ED54)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
}
