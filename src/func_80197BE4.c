#include "common.h"
extern u32 D_801FEBE8[8];
extern u32 D_801FEBF4[8];
void func_80197BE4(void)
{
    ((volatile u8 *)(D_801FEBEC))[0x0] = func_80197C5C;
    ((volatile u8 *)(D_801FEBEC))[0x4] = func_80197CC4;
    D_801FEBE8[0] = zero;
    return (D_801FEBF4[0] = zero);
}
