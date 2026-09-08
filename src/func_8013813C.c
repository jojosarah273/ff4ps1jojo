#include "common.h"
extern s16 D_8019EDA4;
extern u32 D_8019EDA0;
extern u32 D_8019EDAC;
extern u32 D_8019EDB4;
extern u32 D_8019EDBC;
void func_8013813C(void)
{
    /* stat table header: hash the 3-byte code, hash cell, relocate to
       the 0x81/0x8B-marked tile and pack its two 2-byte pairs. */
    u8 *base = (u8 *)(0x800D28A4 + (D_8019EDA4 << 11));
    u32 packed = (u32)base[0] | ((u32)base[1] << 8) | ((u32)base[2] << 16);
    u32 q = (u32)(((unsigned long long)packed * 0x91A2B3C5ULL) >> 43);
    u32 r = (u32)(((unsigned long long)packed * 0x88888889ULL) >> 37);
    D_8019EDB4 = q;
    D_8019EDAC = r - q * 60;
    {
        u8 *t = (u8 *)(0x800D2200 + (D_8019EDA4 << 11));
        s32 idx = 0;
        if (t[0] != 0x81 && t[0] != 0x8B) {
            s32 k;
            for (k = 1; k < 5; k++) {
                u8 c = t[k * 0x40];
                if (c == 0x81) {
                    idx = k;
                    break;
                }
                if (c == 0x8B) {
                    idx = k - 1;
                    break;
                }
                idx = k + 1;
            }
        }
        {
            u8 *p = (u8 *)(0x800D2207 + (idx << 6) + (D_8019EDA4 << 11));
            D_8019EDA0 = (u32)p[0] | ((u32)p[1] << 8);
            D_8019EDBC = (u32)p[2] | ((u32)p[3] << 8);
        }
    }
}
