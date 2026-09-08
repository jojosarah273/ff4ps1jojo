#include "common.h"
extern u32 D_8019ED44[8];
extern u32 D_8019ED54[8];
void func_801222C4(void)
{
    ((volatile u8 *)(None))[0x0] = func_800F5410(D_8019ED44[0]);
    return (((volatile u8 *)(None))[0x0] = func_800F9410(D_8019ED54[0]));
}
