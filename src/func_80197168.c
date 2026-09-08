#include "common.h"

void func_80197168(u32 a0, u32 a1, u32 a2, u32 a3)
{
    ((volatile u8*)((a0 + zero)))[0x0] = a1;
    ((volatile u8*)((a0 + zero)))[0x2] = a2;
    ((volatile u8*)((a0 + zero)))[0x4] = a3;
    ((volatile u8*)((a0 + zero)))[0x8] = zero;
    ((volatile u8*)((a0 + zero)))[0xA] = zero;
    ((volatile u8*)((a0 + zero)))[0xC] = zero;
    ((volatile u8*)((a0 + zero)))[0xE] = zero;
    ((volatile u8*)((a0 + zero)))[0x11] = ((u8)zero);
    ((volatile u8*)((a0 + zero)))[0x10] = ((u8)zero);
    ((volatile u8*)((a0 + zero)))[0x13] = ((u8)zero);
    ((volatile u8*)((a0 + zero)))[0x12] = ((u8)zero);
    return (((volatile u8*)((a0 + zero)))[0x6] = ((volatile u32*)(sp))[0x10]);
}
