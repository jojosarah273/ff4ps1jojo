#include "common.h"

void func_800F8FD8(u32 a0)
{
    ((volatile u8 *)(func_800F3C3C((u16)a0)))[0x0] = ((u8)zero);
    return (((volatile u8 *)(func_800F3C3C((u16)a0)))[0x1] = ((u8)zero));
}
