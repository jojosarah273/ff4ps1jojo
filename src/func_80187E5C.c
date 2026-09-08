#include "common.h"
extern u8 D_801F6678[];
s32 func_80187E5C(u32 a0, u32 a1, u32 a2, u32 a3, u16 sp10,
                  u16 sp14, u8 sp18, u8 sp1C, u8 sp20, u8 sp24, u32 sp28)
{
    /* menu-box author: rejects when the box is already active;
       fills the D_801F6678 box record. */
    if (*(u32 *)D_801F6678 != 0)
        return -1;
    D_801F6678[0x1A] = sp24;
    *(u32 *)&D_801F6678[0x4] = a0;
    *(u32 *)&D_801F6678[0x8] = a1;
    *(u32 *)&D_801F6678[0xC] = a2;
    *(u32 *)&D_801F6678[0x10] = a3;
    D_801F6678[0x14] = sp10 & 0xFF;
    D_801F6678[0x15] = sp10 >> 8;
    D_801F6678[0x16] = sp14 & 0xFF;
    D_801F6678[0x17] = sp14 >> 8;
    D_801F6678[0x19] = sp18;
    D_801F6678[0x18] = sp1C;
    D_801F6678[0x1B] = sp20;
    *(u32 *)&D_801F6678[0x1C] = sp28;
    return 0;
}
