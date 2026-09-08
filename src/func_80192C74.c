#include "common.h"
extern u32 D_8019CEFC[8];
void func_80192C74(u32 a0)
{
    return (((volatile u8*)(D_8019CEFC[0]))[0x0] = a0);
}
