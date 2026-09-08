#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED54[8];
void func_8013B0C4(u32 a0)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)(u8)((volatile u8 *)(((u16)((volatile u8 *)(D_8019ED54[0]))[0x0] + D_8019A098)))[0x0]));
}
