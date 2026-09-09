/* FF4 source-port — interpreted module for func_800F46E8.
 * Ground truth: src/func_800F46E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
extern u32 D_8019ED54;
void func_800F46E8(u32 a0, u32 a1)
{
    return (((volatile u8 *)(D_8019ED40))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x0] & a0)));
}
