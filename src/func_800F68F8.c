#include "common.h"
extern u32 D_8019ED5C;
void func_800F68F8(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(func_800F3B04()))[0x0]);
}
