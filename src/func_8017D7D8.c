#include "common.h"
void func_8017D7D8(u32 a0, u16 *src, u32 a2, u32 a3)
{
    /* battle sprite blit: copies width rows of 0x20 u16 cells from
       the palette/pattern table into the framebuffer row. */
    u8 *rec = *(u8 **)(a2 + 4);
    s32 col0 = (u32)(*(u16 *)&rec[6]) >> 3;
    s32 top = (s32)(s16)*(s16 *)&rec[6] + *(s16 *)&rec[0xA] + 0x10;
    s32 bit;
    s32 i;
    u8 v;
    if (top >= 0xF9)
        top = 0xF8;
    top >>= 3;
    bit = (col0 << 5) + (((s32)*(s16 *)&rec[2] << 2) & 0x3E0);
    v = rec[0] >> 3;
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        u32 t1 = (u32)bit & 0x3E0;
        u16 *dst = (u16 *)(a0 + i * 66);
        s32 j;
        for (j = 0; j < 0x20; j++) {
            *dst++ = src[(v & 0x1F) | t1];
            v++;
        }
        bit += 0x20;
    }
}
