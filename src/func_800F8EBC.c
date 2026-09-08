#include "common.h"
extern u32 D_8019ED60;
void func_800F8EBC(u32 a0)
{
    ((volatile u8 *)(func_800F3C3C((u16)a0)))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED60))[0x0]);
    return (((volatile u8 *)(func_800F3C3C((u16)a0)))[0x1] = ((u8)(u8)((volatile u8 *)(D_8019ED60))[0x1]));
}
