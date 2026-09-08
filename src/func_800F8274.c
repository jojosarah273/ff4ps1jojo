#include "common.h"

void func_800F8274(u32 a0)
{
    ((volatile u8 *)(func_800F3C3C((u16)a0)))[0x0] = ((u8)(u8)((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x8]);
    return (((volatile u8 *)(func_800F3C3C((u16)a0)))[0x1] = ((u8)(u8)((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x9]));
}
