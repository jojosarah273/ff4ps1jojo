#include "common.h"
extern u32 D_8019ED5C;
void func_800F7210(void)
{
    ((volatile u8 *)(D_8019ED5C))[0x0] = ((u8)(u8)((volatile u8 *)(func_800F3B04()))[0x0]);
    return (((volatile u8 *)(D_8019ED5C))[0x1] = ((u8)(u8)((volatile u8 *)(func_800F3B04()))[0x1]));
}
