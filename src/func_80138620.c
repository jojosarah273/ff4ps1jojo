#include "common.h"
extern u16 D_801CFD68[16384];

void func_80138620(u32 a0)
{
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5330] = (0 + 0x2061);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5332] = (0 + 0x205C);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5334] = (0 + 0x2064);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5336] = (0 + 0x2067);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5338] = (0 + 0x2060);
    return (((volatile u8*)(((D_801CFD68) + (0x8000))))[0x533A] = (0 + 0x205F));
}
