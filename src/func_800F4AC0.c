#include "common.h"
extern u32 D_8019ED40;
extern u32 D_8019ED5C;
void func_800F4AC0(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8 *)(D_8019ED40))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x0] & a0));
    return (((volatile u8 *)(D_8019ED40))[0x1] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x1] & a0)));
}
