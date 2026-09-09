/* FF4 source-port — interpreted module for func_80147434.
 * Ground truth: src/func_80147434.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED44[8];
extern u32 D_8019ED54[8];
void func_80147434(u32 a0)
{
    ((volatile u8 *)(D_8019ED44[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED54[0]))[0x0];
    ((volatile u8 *)(D_8019ED44[0]))[0x0] = ((u16)((volatile u8 *)(D_8019ED44[0]))[0x0] << 7);
    return (((volatile u8 *)(D_8019ED54[0]))[0x0] = sep(D_8019ED44[0]));
}
