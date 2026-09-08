#include "common.h"

void func_80179248(u32 a0, u32 a1, u32 a2, u32 a3)
{
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x0] = a0;
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x4] = ((volatile u32 *)(sp))[0x10];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x8] = a2;
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0xC] = (u16)((volatile u8 *)((a3 + zero)))[0x0];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0xE] = (u16)((volatile u8 *)((a3 + zero)))[0x2];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x10] = (u16)((volatile u8 *)((a3 + zero)))[0x4];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x12] = (u16)((volatile u8 *)((a3 + zero)))[0x6];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x14] = (u16)((volatile u8 *)((a1 + zero)))[0x0];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x16] = (u16)((volatile u8 *)((a1 + zero)))[0x2];
    ((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x18] = (u16)((volatile u8 *)((a1 + zero)))[0x4];
    ((volatile u8 *)(sp))[0x0] = a0;
    ((volatile u8 *)(sp))[0x4] = a1;
    ((volatile u8 *)(sp))[0x8] = a2;
    ((volatile u8 *)(sp))[0xC] = a3;
    return (((volatile u8 *)(((volatile u32 *)(sp))[0x14]))[0x1A] = (u16)((volatile u8 *)((a1 + zero)))[0x6]);
}
