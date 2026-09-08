#include "common.h"

void func_800F6EA8(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(func_800F3B9C((func_800F3AB4((u16)a0) + zero), 1)))[0x0]);
}
