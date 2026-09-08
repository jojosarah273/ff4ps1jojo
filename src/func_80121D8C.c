#include "common.h"
extern u32 D_8019ED54[8];
void func_80121D8C(void)
{
    return (((volatile u8 *)(D_8019ED54[0]))[0x0] = func_800F654C());
}
