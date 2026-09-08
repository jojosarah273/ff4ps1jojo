#include "common.h"

void func_800F6E30(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(func_800F3B04(func_800F3A70((u16)a0))))[0x0]);
}
