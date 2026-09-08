#include "common.h"
extern u32 D_8019ED54;
void func_800F86F0(u32 a0, u32 a1)
{
    ((volatile u8 *)((func_800F3C3C((u16)a0) + a0)))[0x0] = ((u8)(u8)((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x8]);
    return (((volatile u8 *)((func_800F3C3C((u16)a0) + a0)))[0x1] = ((u8)(u8)((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x9]));
}
