#include "common.h"
extern u32 D_8019ED50;
void func_800F5DA0(u32 a0)
{
    ((volatile u8 *)(func_800F3C3C((u16)a0)))[0x0] = ((u8)((u8)((volatile u8 *)(func_800F3C3C((u16)a0)))[0x0] + -0x1));
    return (((volatile u8 *)(D_8019ED50))[0x0] = (((u8)((volatile u8 *)(func_800F3C3C((u16)a0)))[0x0] + -0x1) & 0xFF));
}
