#include "common.h"
void func_8017D980(u32 a0, u16 *src, u32 a2, u32 a3)
{
    /* battle sprite blit (plane variant 2): select bit tracks the row
       counter inside the pitch. */
    u8 *rec = *(u8 **)(a2 + 4);
    s32 col0 = (u32)(*(u16 *)&rec[6]) >> 3;
    s32 top = (s32)(s16)*(s16 *)&rec[6] + *(s16 *)&rec[0xA] + 0x10;
    s32 bit;
    s32 i;
    u8 v;
    u32 sel0;
    if (top >= 0xF9)
        top = 0xF8;
    top >>= 3;
    bit = (col0 << 5) + (((u32)*(u16 *)&rec[2] >> 14) & 0x3E0);
    v = (u8)((u32)*(u16 *)&rec[0] >> 3);
    sel0 = ((u32)*(u16 *)&rec[2] >> 8) & 1;
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        u32 t = (u32)bit & 0x3E0;
        u32 sel = (((u32)bit >> 10) + sel0) & 1;
        u16 *dst = (u16 *)(a0 + i * 66);
        s32 j;
        u8 cur = v;
        for (j = 0; j < 0x20; j++) {
            u16 addr = (cur & 0x1F) | t;
            *dst++ = src[addr + (sel << 11)];
            cur++;
        }
        bit += 0x20;
    }
}
