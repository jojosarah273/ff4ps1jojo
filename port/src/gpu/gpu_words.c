/* FF4 source-port — gpu/gpu_words.c
 *
 * GPU command-word builders, interpreted from the Phase A decodes.
 * Ground truth: src/func_80195668, 80195700, 801957B4, 801973B8.
 */
#include <stdint.h>

#define E300_TAG 0xE3000000u
#define E400_TAG 0xE4000000u
#define E200_TAG 0xE2000000u
#define G_E100   0xE1000200u

/* clamp a cursor into the sprite grid [0, dim-1]; dims are the
   D_8019DB58 / D_8019DB5A cells */
extern int16_t g_sprite_w;   /* D_8019DB58 */
extern int16_t g_sprite_h;   /* D_8019DB5A */

static uint32_t clamp_axis(uint32_t v, int16_t dim)
{
    if ((int16_t)v < 0)
        return 0;
    if ((int16_t)(dim - 1) < (int16_t)v)
        return (uint32_t)(uint16_t)(dim - 1);
    return v;
}

/* 80195668: E300 (polygon) word: packed 10-bit coords */
uint32_t gpu_word_e300(uint32_t x, uint32_t y)
{
    x = clamp_axis(x, g_sprite_w);
    y = clamp_axis(y, g_sprite_h);
    return E300_TAG | (x & 0x3FF) | ((y & 0x3FF) << 10);
}

/* 80195700: E400 (quad) word — same packing, E400 tag */
uint32_t gpu_word_e400(uint32_t x, uint32_t y)
{
    x = clamp_axis(x, g_sprite_w);
    y = clamp_axis(y, g_sprite_h);
    return E400_TAG | (x & 0x3FF) | ((y & 0x3FF) << 10);
}

/* 801957B4: E200 sprite word from (w,h,sx,sy) fields */
uint32_t gpu_word_sprite(const uint8_t *sp)
{
    int32_t sx = (int32_t)(int16_t)(*(const int16_t *)&sp[4]);
    int32_t sy = (int32_t)(int16_t)(*(const int16_t *)&sp[6]);
    uint32_t w;
    if (sp == 0)
        return 0;
    w = E200_TAG;
    w |= (uint32_t)(sp[0] >> 3) << 10;   /* width  >> 3, bit 10.. */
    w |= (uint32_t)(sp[2] >> 3) << 15;   /* height >> 3, bit 15.. */
    w |= ((uint32_t)(uint8_t)(-(int32_t)sy) >> 3) << 5;
    w |=  (uint32_t)(uint8_t)(-(int32_t)sx) >> 3;
    return w;
}

/* 801973B8: E100 control word + optional second word from the sprite */
uint32_t gpu_word_control(const uint8_t *hdr, uint32_t a1, uint32_t a2,
                          uint32_t a3, const uint8_t *sp)
{
    uint32_t v = G_E100;
    if (a2 != 0)
        v |= 0x200;
    v |= a3 & 0x9FF;
    if (a1 != 0)
        v |= 0x400;
    return v;
}

uint32_t gpu_word_aux(const uint8_t *sp)
{
    int32_t sx = (int32_t)(int16_t)(*(const int16_t *)&sp[4]);
    int32_t sy = (int32_t)(int16_t)(*(const int16_t *)&sp[6]);
    uint32_t w = E200_TAG;
    if (sp != 0) {
        w |= (uint32_t)(sp[2] >> 3) << 15;
        w |= (uint32_t)(sp[0] >> 3) << 10;
        w |= ((uint32_t)(-(int32_t)sy) << 2) & 0x3E0;
        w |=  (uint32_t)(uint8_t)(-(int32_t)sx) >> 3;
    }
    return w;
}
