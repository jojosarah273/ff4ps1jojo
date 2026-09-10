/* FF4 source-port — interpreted module for battle_sprite_blit_stagger_variant.
 * Ground truth: src/battle_sprite_blit_stagger_variant.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_sprite_blit_stagger_variant(u32 a0, u16 *src, u32 a2, u32 a3)
{
    /* battle sprite blit (stagger variant): 2-bit selection with
       per-pixel phase flip. */
    u8 *rec = *(u8 **)(a2 + 4);
    s32 col0 = (u32)(*(u16 *)&rec[6]) >> 3;
    s32 top = (s32)(s16)*(s16 *)&rec[6] + *(s16 *)&rec[0xA] + 0x10;
    s32 bit;
    s32 i;
    u32 base_sel;
    if (top >= 0xF9)
        top = 0xF8;
    top >>= 3;
    bit = (col0 << 5) + (((u32)*(u16 *)&rec[2] >> 14) & 0x3E0);
    base_sel = (((u32)*(u16 *)&rec[0] >> 8) & 1) +
               (((u32)*(u16 *)&rec[2] >> 9) & 2);
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        u32 t = (u32)bit & 0x3E0;
        u32 sel_row = (base_sel + (((u32)bit >> 9) & 2)) & 1;
        u16 *dst = (u16 *)(a0 + i * 66);
        s32 j;
        u8 cur = (u8)(((u32)*(u16 *)&rec[0] >> 3) & 0x1F);
        s32 lg = 0;
        for (j = 0; j < 0x20; j++) {
            u32 ph = (cur >> 5) & 1;
            if (lg)
                ph = (u32)(-ph) & 1;
            {
                u32 sel = (sel_row + ph) & 3;
                u16 *q = src + ((cur & 0x1F) | t) + (sel << 11);
                *dst++ = *q;
            }
            lg = (lg + 1) & 1;
            cur++;
        }
        bit += 0x20;
    }
}
