/* FF4 source-port — interpreted module for angle_from_ratio_quadrant_correcte.
 * Ground truth: src/angle_from_ratio_quadrant_correcte.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern s16 D_8019E4D4[];
void angle_from_ratio_quadrant_correcte(s32 a0, s32 a1)
{
    /* angle from ratio: quadrant-corrected table arctangent. */
    s32 x = a0, y = a1;
    s32 fy = 0, fx = 0;
    s32 q, t;
    if (y < 0) { fy = 1; y = -y; }
    if (x < 0) { fx = 1; x = -x; }
    if (y != 0 && x < y) {
        q = (x & 0x7FE00000) ? (x / (y >> 10)) : ((x << 10) / y);
        t = D_8019E4D4[q];
    } else {
        q = (y & 0x7FE00000) ? (y / (x >> 10)) : ((y << 10) / x);
        t = 0x400 - D_8019E4D4[q];
    }
    if (fy)
        t = 0x800 - t;
    if (fx)
        t = -t;
    return t;
}
