#include "common.h"
extern u32 D_8019ED60;
void func_800F8E24(u32 a0)
{
    return (((volatile u8 *)(func_800F3B04()))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED60))[0x0]));
}
