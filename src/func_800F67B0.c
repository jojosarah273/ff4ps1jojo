#include "common.h"
extern u32 D_8019ED60;
void func_800F67B0(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)((func_800F3B9C(func_800F3AB4((u16)a0)) + a0)))[0x0]);
}
