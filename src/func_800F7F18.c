#include "common.h"
extern u32 D_8019ED44;
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void func_800F7F18(u32 a0, u32 a1)
{
    ((volatile u8*)(D_8019ED44))[0x0] = ((u32)(((u16)((volatile u8*)(D_8019ED44))[0x0] + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 16))) >> 1);
    return (((volatile u8*)(D_8019ED50))[0x0] = ((u16)((volatile u8*)(D_8019ED44))[0x0] + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 16)));
}
