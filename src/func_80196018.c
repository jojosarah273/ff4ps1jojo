#include "common.h"
extern u32 D_8019DC5C[8];
void func_80196018(u32 a0)
{
    return (((volatile u8*)(D_8019DC5C[0]))[0x0] = a0);
}
