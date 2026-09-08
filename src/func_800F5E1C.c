#include "common.h"
extern u32 D_8019ED50;
extern u32 D_8019ED5C;
void func_800F5E1C(u32 a0)
{
    ((volatile u8*)(D_8019ED5C))[0x0] = ((u8)((u8)((volatile u8*)(D_8019ED5C))[0x0] + -0x1));
    return (((volatile u8*)(D_8019ED50))[0x0] = (u8)((volatile u8*)(D_8019ED5C))[0x0]);
}
