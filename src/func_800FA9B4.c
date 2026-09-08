#include "common.h"
extern u32 D_8019ED40;
extern u32 D_8019ED54;
void func_800FA9B4(u32 a0)
{
    return (((volatile u8 *)(D_8019ED40))[0x0] = ((u8)func_800F824C()));
}
