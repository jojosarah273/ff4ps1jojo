#include "common.h"
extern void func_80197C5C(void);
extern void func_80197CC4(void);
extern u8 D_801FEBEC;
extern u32 D_801FEBE8[8];
extern u32 D_801FEBF4[8];
void func_80197BE4(void)
{
    ((volatile u8 *)(D_801FEBEC))[0x0] = func_80197C5C;
    ((volatile u8 *)(D_801FEBEC))[0x4] = func_80197CC4;
    D_801FEBE8[0] = 0;
    return (D_801FEBF4[0] = 0);
}
