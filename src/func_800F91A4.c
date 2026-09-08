#include "common.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED4C;
void func_800F91A4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    D_800D0000[0] = ((u8)(u8)((volatile u8 *)(func_800F3B04(func_800F3A70((u16)a0))))[0x0]);
    ((volatile u8 *)(((u16)((volatile u8 *)(D_8019ED4C))[0x0] + a1)))[0x7FFF] = ((u8)(u8)((volatile u8 *)(func_800F3B04(func_800F3A70((u16)a0))))[0x1]);
    return (((volatile u8 *)(D_8019ED4C))[0x0] = ((u16)((volatile u8 *)(D_8019ED4C))[0x0] + -0x2));
}
