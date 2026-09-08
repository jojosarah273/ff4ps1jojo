#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED54[8];
void func_801268C0(u32 a0)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)func_800F824C()));
}
