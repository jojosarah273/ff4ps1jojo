#include "common.h"
extern u32 D_8019ED60;
void func_800F6848(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x8] = ((u8)(u8)((volatile u8 *)((func_800F3B9C(func_800F3AB4((u16)a0)) + a1)))[0x0]);
    return (((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x9] = ((u8)(u8)((volatile u8 *)((func_800F3B9C(func_800F3AB4((u16)a0)) + a1)))[0x1]));
}
