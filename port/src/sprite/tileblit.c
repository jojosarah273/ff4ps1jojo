/* FF4 source-port — sprite/tileblit.c
 *
 * Battle tile-blit family. Each variant walks the same grid:
 *   col0 = rec[6]>>3          (start row in 0x20-cell units)
 *   top  = clamp(rec[6]+rec[0xA]+0x10, 0xF8) >> 3
 *   bit  = col0*32 + (rec[2]<<2 & 0x3E0)      (source plane offset)
 * and copies 0x20 u16 cells per row from the pattern table into the
 * framebuffer row (dst stride 66 cells).
 * Ground truth: src/func_8017D7D8/D898/D980/DA64.
 */
#include <stdint.h>

typedef struct tile_sprite {
    uint8_t  pattern0;   /* +0: channel/plane select bits        */
    uint8_t  pattern2;   /* +2: v/h bits                         */
    uint16_t w;          /* +6: width in cells                   */
    int16_t  y;          /* +0xA: row offset                     */
} tile_sprite;

static int32_t row_top(const tile_sprite *r)
{
    int32_t top = (int32_t)r->w + r->y + 0x10;
    if (top >= 0xF9)
        top = 0xF8;
    return top >> 3;
}

/* 8017D7D8: base blit — source cell = (x&0x1F)|plane; plane from
   pattern2 top bits. */
void tile_blit_base(uint8_t *dst, const uint16_t *src,
                    const tile_sprite *r)
{
    int32_t i, col0 = r->w >> 3;
    int32_t top = row_top(r);
    int32_t bit = (col0 << 5) + (((int32_t)(int16_t)r->pattern2 << 2) & 0x3E0);
    uint8_t v = (uint8_t)(r->pattern0 >> 3);  /* low bits only */
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        uint32_t t = (uint32_t)bit & 0x3E0;
        uint16_t *out = (uint16_t *)(dst + i * 66);
        int32_t j;
        uint8_t cur = v;
        for (j = 0; j < 0x20; j++) {
            *out++ = src[(cur & 0x1F) | t];
            cur++;
        }
        bit += 0x20;
    }
}

/* 8017D898: plane variant — plane bit rotates; source cell includes a
   2048-cell plane select. */
void tile_blit_plane(uint8_t *dst, const uint16_t *src,
                     const tile_sprite *r)
{
    int32_t i, col0 = r->w >> 3;
    int32_t top = row_top(r);
    int32_t bit = (col0 << 5) + (((int32_t)(int16_t)r->pattern2 << 2) & 0x3E0);
    uint8_t v = (uint8_t)((r->pattern0 >> 3) & 0x1F);
    uint32_t sel0 = (uint32_t)r->pattern0 >> 8 & 1;  /* high byte bit0 */
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        uint32_t t = (uint32_t)bit & 0x3E0;
        uint16_t *out = (uint16_t *)(dst + i * 66);
        int32_t j;
        uint8_t cur = v;
        for (j = 0; j < 0x20; j++) {
            uint32_t sel = ((cur >> 5) & 1) + sel0;
            *out++ = src[(cur & 0x1F) | t + ((sel & 1) << 11)];
            cur++;
        }
        bit += 0x20;
    }
}

/* 8017D980: plane variant 2 — select tracks bit>>10 of the grid. */
void tile_blit_plane2(uint8_t *dst, const uint16_t *src,
                      const tile_sprite *r)
{
    int32_t i, col0 = r->w >> 3;
    int32_t top = row_top(r);
    int32_t bit = (col0 << 5) + (((uint32_t)r->pattern2 >> 14) & 0x3E0);
    uint8_t v = (uint8_t)(r->pattern0 >> 3);
    uint32_t sel0 = ((uint32_t)r->pattern2 >> 8) & 1;
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        uint32_t t = (uint32_t)bit & 0x3E0;
        uint32_t sel = (((uint32_t)bit >> 10) + sel0) & 1;
        uint16_t *out = (uint16_t *)(dst + i * 66);
        int32_t j;
        uint8_t cur = v;
        for (j = 0; j < 0x20; j++) {
            uint16_t idx = (cur & 0x1F) | t;
            *out++ = src[idx + (sel << 11)];
            cur++;
        }
        bit += 0x20;
    }
}

/* 8017DA64: stagger variant — 2-bit selection with per-pixel phase
   flip. */
void tile_blit_stagger(uint8_t *dst, const uint16_t *src,
                       const tile_sprite *r)
{
    int32_t i, col0 = r->w >> 3;
    int32_t top = row_top(r);
    int32_t bit = (col0 << 5) + (((uint32_t)r->pattern2 >> 14) & 0x3E0);
    uint32_t base = (((uint32_t)r->pattern0 >> 8) & 1) +
                    (((uint32_t)r->pattern2 >> 9) & 2);
    if (col0 >= top)
        return;
    for (i = col0; i < top; i++) {
        uint32_t t = (uint32_t)bit & 0x3E0;
        uint32_t sel_row = (base + (((uint32_t)bit >> 9) & 2)) & 1;
        uint16_t *out = (uint16_t *)(dst + i * 66);
        int32_t j;
        uint8_t cur = (uint8_t)((r->pattern0 >> 3) & 0x1F);
        int32_t ph = 0;
        for (j = 0; j < 0x20; j++) {
            uint32_t f = (cur >> 5) & 1;
            uint32_t sel;
            if (ph)
                f = (uint32_t)(-(int32_t)f) & 1;
            sel = (sel_row + f) & 3;
            out[j] = src[((cur & 0x1F) | t) + (sel << 11)];
            ph ^= 1;
            cur++;
        }
        bit += 0x20;
    }
}
