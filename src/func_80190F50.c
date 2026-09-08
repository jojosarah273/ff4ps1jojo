#include "common.h"
extern u32 D_8019BCB0[8];
extern u32 D_8019BCB4[8];
extern u32 D_8019BCBC[8];
extern u32 D_8019BCC0[8];
void func_80190F50(u32 a0)
{
    ((volatile u8 *)(D_8019BCB0[0]))[0x0] = ((u8)(zero + 0x2));
    ((volatile u8 *)(D_8019BCC0[0]))[0x0] = ((u8)(u8)((volatile u8 *)(a0))[0x0]);
    ((volatile u8 *)(D_8019BCB4[0]))[0x0] = ((u8)(u8)((volatile u8 *)(a0))[0x1]);
    ((volatile u8 *)(D_8019BCB0[0]))[0x0] = ((u8)(zero + 0x3));
    ((volatile u8 *)(D_8019BCBC[0]))[0x0] = ((u8)(u8)((volatile u8 *)(a0))[0x2]);
    ((volatile u8 *)(D_8019BCC0[0]))[0x0] = ((u8)(u8)((volatile u8 *)(a0))[0x3]);
    return (((volatile u8 *)(D_8019BCB4[0]))[0x0] = ((u8)(zero + 0x20)));
}
