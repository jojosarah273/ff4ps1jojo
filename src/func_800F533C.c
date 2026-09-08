#include "common.h"
extern u32 D_8019ED44;
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void func_800F533C(u32 a0, u32 a1)
{
    return (((volatile u8 *)(D_8019ED50))[0x0] = (a0 & 0xFFFF);
    ((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] & 0x3D));
    ((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] | ((s32)((((volatile u32 *)(D_8019ED50))[0x0] & 0xC000)) >> 8)));
    ((volatile u8 *)(D_8019ED50))[0x0] = (((volatile u32 *)(D_8019ED50))[0x0] & a0);
    if ((u16)((volatile u8 *)(D_8019ED50))[0x0]) {
    ((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] | 0x2));
    } else {
    ((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] | 0x2));
    }

    if ((u16)((volatile u8 *)(D_8019ED50))[0x0]) {
    } else {
    });
}
