/* FF4 source-port — interpreted module for func_800F7FCC.
 * Ground truth: src/func_800F7FCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED44;
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u32 *func_800F7FCC(u8 *a0)
{
    /* window subtract u16: D44 -= u16(a0) (with parity bit); repack
       flags incl. D40[1] hi bits; returns the D50 pointer. */
    u16 t = (u16)(D_8019ED44[0] - (u16)(a0[0] | (a0[1] << 8)) -
                  ((D_8019ED68[0] ^ 1) & 1));
    u8 f = (D_8019ED68[0] & 0x3C) | (D_8019ED40[1] & 0xC0);
    D_8019ED44[0] = t;
    if (!(t & 0x10000))
        f |= 1;
    if ((u16)t == 0)
        f |= 2;
    D_8019ED50[0] = t;
    D_8019ED68[0] = f;
    return D_8019ED50;
}
