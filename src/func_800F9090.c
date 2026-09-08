#include "common.h"
extern u32 D_8019ED54;
void func_800F9090(u32 a0)
{
    ((volatile u8 *)((func_800F3C3C((u16)a0) + a0)))[0x0] = ((u8)zero);
    return (((volatile u8 *)((func_800F3C3C((u16)a0) + a0)))[0x1] = ((u8)zero));
}
