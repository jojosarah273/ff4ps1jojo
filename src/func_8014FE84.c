#include "common.h"
extern u32 D_8019ED44[8];
extern u32 D_8019ED54[8];
void func_8014FE84(u32 a0)
{
    return (((volatile u8 *)(D_8019ED54[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED44[0]))[0x0]);
}
