#include "common.h"
extern u32 D_8019ED4C;
extern u32 D_8019ED50;
void func_800F3CC4(u32 a0, u32 a1, u32 a2)
{
    return (if (((s32)((zero + 0x7FFF)) < (s32)(((u16)((volatile u8 *)(D_8019ED4C))[0x0] + a0)))) {
        if (((s32)((zero + 0x7FFF)) < (s32)(((u16)((volatile u8 *)(D_8019ED4C))[0x0] + a0)))) {
    ((volatile u8 *)(D_8019ED50))[0x0] = (u8)((volatile u8 *)(0x800D0000))[0x0];
    ((volatile u8 *)(D_8019ED50))[0x0] = (((volatile u32 *)(D_8019ED50))[0x0] | ((u8)((volatile u8 *)(0x800D0000))[0x1] << 8));
    } else {
    ((volatile u8 *)(D_8019ED50))[0x0] = (u8)((volatile u8 *)(0x800D0000))[0x0];
    ((volatile u8 *)(D_8019ED50))[0x0] = (((volatile u32 *)(D_8019ED50))[0x0] | ((u8)((volatile u8 *)(0x800D0000))[0x1] << 8));
    }

    } else {
        if (((s32)((zero + 0x7FFF)) < (s32)(((u16)((volatile u8 *)(D_8019ED4C))[0x0] + a0)))) {
    ((volatile u8 *)(D_8019ED50))[0x0] = (u8)((volatile u8 *)(0x800D0000))[0x0];
    ((volatile u8 *)(D_8019ED50))[0x0] = (((volatile u32 *)(D_8019ED50))[0x0] | ((u8)((volatile u8 *)(0x800D0000))[0x1] << 8));
    } else {
    ((volatile u8 *)(D_8019ED50))[0x0] = (u8)((volatile u8 *)(0x800D0000))[0x0];
    ((volatile u8 *)(D_8019ED50))[0x0] = (((volatile u32 *)(D_8019ED50))[0x0] | ((u8)((volatile u8 *)(0x800D0000))[0x1] << 8));
    }

    });
}
