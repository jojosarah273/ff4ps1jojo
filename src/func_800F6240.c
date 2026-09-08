#include "common.h"
extern u32 D_8019ED50;
void func_800F6240(void)
{
    ((volatile u8 *)(func_800F3B04()))[0x0] = ((u8)((u8)((volatile u8 *)(func_800F3B04()))[0x0] + 0x1));
    return (((volatile u8 *)(D_8019ED50))[0x0] = (((u8)((volatile u8 *)(func_800F3B04()))[0x0] + 0x1) & 0xFF));
}
