/* FF4 source-port — interpreted module for func_800F712C.
 * Ground truth: src/func_800F712C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED5C;
extern u8 *D_8019ED68;
void func_800F712C(void)
{
    if (((u16)*(volatile u8*)(D_8019ED54 + 0x0) != 0))
        *D_8019ED68 = (u8)((((u8)*(volatile u8*)(D_8019ED68 + 0x0) & 0x7D) | ((u8)*(volatile u8*)(D_8019ED5C + 0x1) & 0x80)));
    else
        *D_8019ED68 = (u8)((((((u8)*(volatile u8*)(D_8019ED68 + 0x0) & 0x7D) | ((u8)*(volatile u8*)(D_8019ED5C + 0x1) & 0x80)) & 0xFF) & 0xFF));
}
