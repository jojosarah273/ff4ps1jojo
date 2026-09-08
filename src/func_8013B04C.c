#include "common.h"
extern u32 D_8019ED54[8];
extern u8 D_8019EE42[8];
void func_8013B04C(void)
{
    return (D_8019EE42[0] = ((u8)((u32)((u16)((volatile u8 *)(D_8019ED54[0]))[0x0]) >> 12)));
}
