#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED44[8];
extern u32 D_8019ED54[8];
void func_8016694C(u32 a1)
{
    ((volatile u8 *)(D_8019ED54[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED44[0]))[0x0];
    return (((volatile u8 *)(None))[0x0] = ((u8)func_8014D528(D_8019ED40[0])));
}
