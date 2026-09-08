#include "common.h"
extern u32 D_8019ED50;
extern u32 D_8019ED54;
void func_800F6364(u32 a0)
{
    ((volatile u8*)(D_8019ED54))[0x0] = ((u16)((volatile u8*)(D_8019ED54))[0x0] + 0x1);
    return (((volatile u8*)(D_8019ED50))[0x0] = (u16)((volatile u8*)(D_8019ED54))[0x0]);
}
