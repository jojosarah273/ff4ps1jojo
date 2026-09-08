#include "common.h"
extern u32 D_8019ED40[8];
void func_8014BAA4(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)func_800F824C()));
}
