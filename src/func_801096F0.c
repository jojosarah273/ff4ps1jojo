#include "common.h"
extern u32 D_8019ED54[8];
void func_801096F0(void)
{
    ((volatile u8 *)(D_8019FFE8))[0x34] = func_800F654C();
    ((volatile u8 *)(D_8019FFE8))[0x2A] = zero;
    return (((volatile u8 *)(D_8019FFE8))[0x2C] = func_800F8FB8());
}
