#include "common.h"
extern u32 D_8019ED44;
extern u32 D_8019ED68;
void func_800F9784(u32 a0, u32 a1, u32 a2, u32 a3)
{
    return (((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] & 0xFD));
    if ((((u8)((volatile u8 *)(a0))[0x0] | a2) & a0)) {
    ((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] | 0x2));
    } else {
    ((volatile u8 *)(D_8019ED68))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED68))[0x0] | 0x2));
    }

    if ((((u8)((volatile u8 *)(a0))[0x0] | a2) & a0)) {
    } else {
    });
}
