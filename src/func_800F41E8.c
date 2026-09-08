#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED44[8];
extern u8 *D_8019ED68;
void func_800F41E8(void)
{
    if (((u16)*(volatile u8*)(D_8019ED44 + 0x0) != 0))
        *D_8019ED68 = (u8)(((((u8)*(volatile u8*)(D_8019ED68 + 0x0) & 0x7D) | ((u8)*(volatile u8*)(D_8019ED40 + 0x1) & 0x80)) & 0xFF));
    else
        *D_8019ED68 = (u8)(((((u8)*(volatile u8*)(D_8019ED68 + 0x0) & 0x7D) | ((u8)*(volatile u8*)(D_8019ED40 + 0x1) & 0x80)) & 0xFF));
}
