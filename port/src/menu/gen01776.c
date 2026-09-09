/* FF4 source-port — interpreted module for func_800F7F48.
 * Ground truth: src/func_800F7F48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u32 *func_800F7F48(u8 *a0)
{
    /* window subtract: D40 -= a0 (with parity bit); repack flags;
       store new D40/D50; returns the D50 pointer. */
    s32 t = (s32)D_8019ED40[0] - a0[0] - ((D_8019ED68[0] ^ 1) & 1);
    u8 f = (D_8019ED68[0] & 0x3C) | (t & ~0x40);
    D_8019ED40[0] = (u8)t;
    if (!(t & 0x100))
        f |= 1;
    if ((t & 0xFF) == 0)
        f |= 2;
    D_8019ED50[0] = (u32)t;
    D_8019ED68[0] = f;
    return D_8019ED50;
}
