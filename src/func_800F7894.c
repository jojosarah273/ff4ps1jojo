#include "common.h"
extern u32 D_8019ED44;
extern u32 D_8019ED50;
void func_800F7894(void)
{
    ((volatile u8*)(D_8019ED50))[0x0] = (u16)((volatile u8*)(D_8019ED44))[0x0];
    return (((volatile u8*)(D_8019ED44))[0x0] = ((u32)((u16)((volatile u8*)(D_8019ED44))[0x0]) >> 1));
}
