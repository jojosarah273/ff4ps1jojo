#include "common.h"
extern u32 D_8019ED40;
extern u32 D_8019ED50;
void func_800F7864(void)
{
    ((volatile u8*)(D_8019ED50))[0x0] = (u8)((volatile u8*)(D_8019ED40))[0x0];
    return (((volatile u8*)(D_8019ED40))[0x0] = ((u8)((u32)((u8)((volatile u8*)(D_8019ED40))[0x0]) >> 1)));
}
