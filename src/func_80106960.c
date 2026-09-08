#include "common.h"
extern u8 D_8019FFE8;
extern u32 D_8019ED54;
void func_80106960(void)
{
    ((volatile u8 *)(D_8019FFE8))[0x34] = func_800F654C();
    ((volatile u8 *)(D_8019FFE8))[0x2A] = 0;
    return (((volatile u8 *)(D_8019FFE8))[0x2C] = func_800F8FB8());
}
