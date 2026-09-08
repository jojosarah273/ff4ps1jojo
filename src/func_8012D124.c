#include "common.h"
extern u32 D_8019ED4C[8];
extern u32 D_8019ED54[8];
void func_8012D124(void)
{
    return (((volatile u8 *)(D_8019ED4C[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED54[0]))[0x0]);
}
