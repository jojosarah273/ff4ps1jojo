/* FF4 source-port — math/trig.c
 *
 * Fixed-point trig + angle helpers (Phase A decodes).
 * Ground truth: src/func_80197F24, 80197FB8, 80198058, 8018EAE8,
 * 801987B0, 80198860.
 */
#include <stdint.h>

extern int16_t g_sin_quad[];   /* D_8019CCC4 (3rd quadrant)         */
extern int16_t g_sin_half[];   /* D_8019D4C4 (2nd quadrant)         */
extern int16_t g_sin_full[];   /* D_8019DCC4 (full 0x1000 table)    */
extern int16_t g_tan_hi[];     /* D_8019E4D4 (atan ratio table)     */
extern uint16_t g_pan1[];      /* D_8019B5B4                        */
extern uint16_t g_pan2[];      /* D_8019B5CC                        */

#define TAB_BITS 12            /* 0x1000-entry angle table           */

/* 80197F24: sin with quadrant folds. */
int16_t sin_lookup(uint32_t a)
{
    if (a < 0x401)
        return g_sin_full[a];
    if (a < 0x801)
        return g_sin_full[0x800 - a];
    if (a < 0xC01)
        return -g_sin_quad[a];
    return -g_sin_full[0x1000 - a];
}

/* 80197FB8: sin with abs + fold (input is signed fp-ish bits). */
int16_t sin_lookup_abs(int32_t a)
{
    uint32_t v = (uint32_t)((a < 0) ? -(int32_t)a : a);
    v &= 0xFFF;
    if (v < 0x401)
        return g_sin_full[0x400 - v];
    if (v < 0x801)
        return -g_sin_half[v];
    if (v < 0xC01)
        return -g_sin_full[0xC00 - v];
    return g_sin_full[v];      /* 4th quadrant alias (C4C4) */
}

/* 80198058: arctan-style angle from the signed ratio (x,y). */
int32_t atan_ratio(int32_t a0, int32_t a1)
{
    int32_t x = a0, y = a1;
    int32_t fy = 0, fx = 0;
    int32_t q, t;
    if (y < 0) { fy = 1; y = -y; }
    if (x < 0) { fx = 1; x = -x; }
    if (y != 0 && x < y) {
        q = (x & 0x7FE00000) ? (x / (y >> 10)) : ((x << 10) / y);
        t = g_tan_hi[q];
    } else {
        q = (y & 0x7FE00000) ? (y / (x >> 10)) : ((y << 10) / x);
        t = 0x400 - g_tan_hi[q];
    }
    if (fy)
        t = 0x800 - t;
    if (fx)
        t = -t;
    return t;
}

/* 8018EAE8: pan/step math — 2-table product with clamp. */
uint16_t pan_step(int32_t a0, int32_t a1, int32_t a2, int32_t a3)
{
    uint32_t acc = (uint32_t)(a3 + a1);
    uint32_t lo = acc & 0xFFFF;
    int32_t s = a2 + (int32_t)(lo >> 7) - a0;
    int16_t x = (int16_t)s;
    int32_t d = x / 3;
    int32_t rem = x - d * 12;
    int32_t eq = d - 2;
    int32_t prod, v, r;
    if (rem < 0) {
        rem += 12;
        eq = d - 3;
    }
    prod = (int32_t)(((uint32_t)g_pan1[rem] * g_pan2[lo & 0x7F]) >> 16);
    v = (int16_t)eq;
    if (v >= 0)
        r = 0x3FFF;
    else {
        int32_t n = -v;
        r = prod + (1 << (n - 1));
        r = (int32_t)((uint32_t)r >> n);
    }
    return (uint16_t)r;
}

/* 801987B0: float-bits <= compare. */
int32_t fbits_le(int32_t f0, int32_t f1)
{
    uint32_t a = (uint32_t)f0, b = (uint32_t)f1;
    uint32_t sign = 0x80000000;
    uint32_t ea, eb, ma, mb;
    if (a == b)
        return 0;
    if ((a & 0x7FFFFFFF) == 0 && (b & 0x7FFFFFFF) == 0)
        return 0;
    if ((a & sign) != (b & sign))
        return 0;
    ea = (a >> 23) & 0xFF;
    eb = (b >> 23) & 0xFF;
    if (ea == eb) {
        ma = (a & 0x7FFFFF) | 0x800000;
        mb = (b & 0x7FFFFF) | 0x800000;
        if (mb < ma)
            return (a & sign) ? 0 : 1;
    } else if (ea > eb) {
        return (a & sign) ? 0 : 1;
    }
    return 1;
}

/* 80198860: float-bits compare (-1/0). */
int32_t fbits_cmp(int32_t f0, int32_t f1)
{
    uint32_t a = (uint32_t)f0, b = (uint32_t)f1;
    uint32_t sign = 0x80000000;
    uint32_t as, ea, eb, ma, mb;
    if (a == b)
        return 0;
    if ((a & 0x7FFFFFFF) == 0 && (b & 0x7FFFFFFF) == 0)
        return 0;
    as = a & sign;
    if (as != (b & sign))
        return as ? -1 : 0;
    ea = (a >> 23) & 0xFF;
    eb = (b >> 23) & 0xFF;
    ma = (a & 0x7FFFFF) | 0x800000;
    mb = (b & 0x7FFFFF) | 0x800000;
    if (ea < eb || (ea == eb && ma < mb))
        return as ? 0 : -1;
    return (int32_t)a < 0 ? -1 : 0;
}
