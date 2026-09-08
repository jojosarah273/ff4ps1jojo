#include "common.h"
void func_8017D898(u32 a0, u16 *src, u32 a2, u32 a3)
{
    /* battle sprite blit (plane variant): mirrors 8017D7D8 with the
       source plane select bit from rec[0]. */
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
    bit = (col0 << 5) + (((s32)*(s16 *)&rec[2] << 2) & 0x3E0);
    v = (u8)(((u32)*(u16 *)&rec[0] >> 3) & 0x1F);
    sel0 = ((u32)*(u16 *)&rec[0] >> 8) & 1;
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        u32 t = (u32)bit & 0x3E0;
        u16 *dst = (u16 *)(a0 + i * 66);
        s32 j;
        u8 cur = v;
        for (j = 0; j < 0x20; j++) {
            u32 sel = ((cur >> 5) & 1) + sel0;
            *dst++ = src[(cur & 0x1F) | t + ((sel & 1) << 11)];
            cur++;
        }
        bit += 0x20;
    }
}
