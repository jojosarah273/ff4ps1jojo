/* FF4 source-port — interpreted module for func_800F9820.
 * Ground truth: src/func_800F9820.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u8 *D_8019ED68;
u8 func_800F9820(u8 *a0)
{
    /* window state (u16 set): D44 |= u16(a0); flag if zero. */
    u16 v = (u16)(a0[0] | (a0[1] << 8));
    D_8019ED68[0] &= 0xFD;
    if ((D_8019ED44[0] | v) == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
