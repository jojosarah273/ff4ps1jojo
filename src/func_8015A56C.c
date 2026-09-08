#include "common.h"

void func_8015A56C(u32 a0, u32 a1)
{
    return (if ((((u8)((volatile u8 *)((func_800F3C3C(0) + zero)))[0xAB] | ((u8)((volatile u8 *)((func_800F3C3C(0) + zero)))[0xAC] << 8)) & 0x8000)) {
        if ((((u8)((volatile u8 *)((func_800F3C3C(0) + zero)))[0xAB] | ((u8)((volatile u8 *)((func_800F3C3C(0) + zero)))[0xAC] << 8)) & 0x8000)) {
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD4] = ((u8)(zero + zero));
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD5] = ((u8)((u32)((zero + zero)) >> 8));
    } else {
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD4] = ((u8)(zero + zero));
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD5] = ((u8)((u32)((zero + zero)) >> 8));
    }

    } else {
        if ((((u8)((volatile u8 *)((func_800F3C3C(0) + zero)))[0xAB] | ((u8)((volatile u8 *)((func_800F3C3C(0) + zero)))[0xAC] << 8)) & 0x8000)) {
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD4] = ((u8)(zero + zero));
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD5] = ((u8)((u32)((zero + zero)) >> 8));
    } else {
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD4] = ((u8)(zero + zero));
    ((volatile u8 *)((func_800F3C3C(0) + zero)))[0xD5] = ((u8)((u32)((zero + zero)) >> 8));
    }

    });
}
