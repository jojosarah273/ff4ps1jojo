#include "common.h"
extern u32 D_8019B11C;
extern u32 D_8019B118;
extern u32 D_8019B120;
extern u16 D_8019B12C;
extern u32 D_8019B13C;
extern u16 *D_8019B114;
extern u32 D_8019B164;
extern u32 D_8019B168;
extern u32 D_8019B16C;
static s32 await_cell(u16 want)
{
    s32 v1 = 0;
    if (D_8019B114[0xD3] != want) {
        for (v1 = 1; v1 < 0xF01; v1++) {
            if (D_8019B114[0xD3] == want)
                return 0;
        }
        return -2;
    }
    return 0;
}
static s32 await_flag(u16 want)
{
    s32 v1 = 0;
    if ((D_8019B114[0xD5] & 0x30) != want) {
        for (v1 = 1; v1 < 0xF01; v1++) {
            if ((D_8019B114[0xD5] & 0x30) == want)
                return 0;
        }
        return -2;
    }
    return 0;
}
s32 func_8018A75C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    /* drive-event queue dispatch: modes 0..3 select which slot is
       armed, then wait for the cell latch and signal completion. */
    switch (a0) {
    case 0:
        D_8019B164 = a2;
        if (await_cell(D_8019B12C) != 0)
            return -2;
        D_8019B114[0xD5] |= 0x30;
        return 0;
    case 1:
        D_8019B164 = 0;
        if (await_cell(D_8019B12C) != 0)
            return -2;
        D_8019B114[0xD5] = (D_8019B114[0xD5] & 0xFFCF) | 0x20;
        return 0;
    case 2:
        D_8019B12C = (u16)(a1 >> D_8019B13C);
        D_8019B114[0xD3] = D_8019B12C;
        return 0;
    case 3:
        if (await_flag((D_8019B164 == a2) ? 0x30 : 0x20) != 0)
            return -2;
        if (D_8019B164 == 1)
            func_8018AC68();
        else
            func_8018AC40();
        D_8019B168 = a0;
        {
            u32 sa1 = a1;
            u32 *slot = (u32 *)D_8019B118;
            D_8019B16C = (sa1 >> 6) + ((sa1 & 0x3F) != 0);
            slot[0] = a0;
            D_8019B11C = (D_8019B16C << 16) | 0x10;
            D_8019B120 = (D_8019B164 == 1) ? 0x1000200 : 0x1000201;
        }
        return 0;
    }
    return 0;
}
