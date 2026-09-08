#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED60[8];
void func_80140C8C(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED60[0]))[0x0]));
}
