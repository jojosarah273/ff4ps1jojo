#include "common.h"
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void func_800F7A40(u32 a0, u32 a1)
{
    ((volatile u8*)(a0))[0x0] = ((u8)(((u8)((volatile u8*)(a0))[0x0] << 1) + ((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1)));
    return (((volatile u8*)(D_8019ED50))[0x0] = (((u8)((volatile u8*)(a0))[0x0] << 1) + ((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1)));
}
