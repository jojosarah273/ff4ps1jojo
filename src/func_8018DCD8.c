#include "common.h"
extern u32 D_8019B584;
extern u32 D_8019B588;
extern u32 D_8019B58C;
extern u32 D_8019B590;
extern u32 D_8019B594;
extern u32 D_8019B598;
extern u32 D_8019B59C;
extern u32 D_8019B5A0;
extern u32 D_8019B5A4;
extern u32 D_8019B5A8;
extern u32 D_801F67A4;
extern u32 D_801F67A8;
extern u32 D_801F67AC;
extern u32 D_801F67B0;
extern u32 D_801F67B4;
extern u32 D_801F67B8;
extern u32 D_801F67BC;
extern u32 D_801F67C0;
extern u32 D_801F67C4;
extern u32 D_801F67C8;
extern u32 D_801F67D0;
extern u32 D_801F67D4;
extern u8 D_801F67D8[];
extern u32 D_801F6958;
extern u32 D_801F695C;
extern u32 D_801F6960;
extern u32 D_801F6964;
void func_8018DCD8(void)
{
    /* queue/command state reset: header + 24 slots (0x10 stride). */
    s32 i;
    u8 *p = D_801F67D8;
    D_8019B584 = 0x10;
    D_801F67A4 = 0;
    D_801F67A8 = 0;
    D_801F67AC = 0;
    D_801F67B0 = 0;
    D_801F67B4 = 0;
    D_8019B588 = 0;
    D_8019B58C = 0;
    D_8019B590 = 0;
    D_8019B594 = 0;
    D_8019B598 = 0;
    D_8019B59C = 0;
    D_8019B5A0 = 0;
    D_8019B5A4 = 0;
    D_8019B5A8 = 0;
    D_801F67B8 = 0x18;
    D_801F67BC = 0x18;
    D_801F67C0 = 0x18;
    D_801F67C4 = 0x18;
    D_801F67C8 = 0x18;
    for (i = 0; i < 0x18; i++) {
        p[0] = 6;
        *(u32 *)&p[4] = 0;
        *(u32 *)&p[8] = 0;
        *(u32 *)&p[0xC] = 0;
        p += 0x10;
    }
    D_801F67D0 = 0;
    D_801F67D4 = 0;
    D_801F6958 = 0;
    D_801F695C = 0;
    D_801F6960 = 0;
    D_801F6964 = 0;
}
