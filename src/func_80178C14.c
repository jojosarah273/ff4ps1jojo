#include "common.h"
extern u8 D_8019FFE8[];
extern u16 D_8019EE26;
extern u16 D_8019EE60;
extern u16 D_8019EE62;
extern u16 D_8019EE64;
extern u16 D_8019EE66;
extern u16 D_8019EE68;
extern u16 D_8019EE6A;
extern u16 D_8019EE6C;
extern u16 D_8019EE6E;
extern u32 D_801E01B8[];
extern u16 D_801DFDE8[];
void func_80178C14(void)
{
    /* battle status-table init: header fields, per-slot geometry and
       the layout state blocks (0xEE/0xF2/0x230/0x234/0x242 rows). */
    u8 *r = D_8019FFE8;
    u16 p0 = *(u16 *)&r[0x4];
    u16 p1 = *(u16 *)&r[0x6];
    u16 p2 = *(u16 *)&r[0x8];
    u16 p3 = *(u16 *)&r[0xA];
    *(u16 *)&r[0x30] = 0;
    *(u16 *)&r[0x2E] = 0;
    *(u16 *)&r[0x32] = 0x100;
    *(u16 *)&r[0x50] = 0xF0;
    *(u16 *)&r[0x34] = 0xF0;
    r[0x37] = 1;
    r[0xFB] = 1;
    r[0x23D] = 1;
    r[0x24B] = 1;
    *(u16 *)&r[0x2A] = D_8019EE64;
    *(u16 *)&r[0x2C] = D_8019EE6C;
    *(u16 *)&r[0xF2] = p0;
    *(u16 *)&r[0xF4] = p1;
    *(u16 *)&r[0xF6] = p2;
    *(u16 *)&r[0xF8] = p3;
    *(u16 *)&r[0xEE] = D_8019EE62;
    *(u16 *)&r[0xF0] = D_8019EE6A;
    *(u16 *)&r[0x234] = p0;
    *(u16 *)&r[0x236] = p1;
    *(u16 *)&r[0x238] = p2;
    *(u16 *)&r[0x23A] = p3;
    *(u16 *)&r[0x230] = D_8019EE66;
    *(u16 *)&r[0x232] = D_8019EE6E;
    *(u16 *)&r[0x242] = p0;
    *(u16 *)&r[0x244] = p1;
    *(u16 *)&r[0x246] = p2;
    *(u16 *)&r[0x248] = p3;
    *(u16 *)&r[0x23E] = D_8019EE60;
    *(u16 *)&r[0x240] = D_8019EE68;
    D_801E01B8[0] = 0x2A;
    D_801E01B8[1] = 0x12;
    D_801E01B8[2] = 6;
    D_801DFDE8[0] = 0xFFFF;
    D_8019EE26 = 0;
}
