#include "common.h"
extern u8 *D_8019ED68;
void func_800F7170(void)
{
    if (((u16)*(volatile u8*)(D_8019ED54 + 0x0) != 0))
        *D_8019ED68 = (u8)(((((u8)*(volatile u8*)(D_8019ED68 + 0x0) & 0x7D) | ((u8)*(volatile u8*)(D_8019ED5C + 0x1) & 0x80)) & 0xFF));
    else
        *D_8019ED68 = (u8)(((((u8)*(volatile u8*)(D_8019ED68 + 0x0) & 0x7D) | ((u8)*(volatile u8*)(D_8019ED5C + 0x1) & 0x80)) & 0xFF));
}
