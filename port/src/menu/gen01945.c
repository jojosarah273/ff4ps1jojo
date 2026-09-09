/* FF4 source-port — interpreted module for func_800F3C94.
 * Ground truth: src/func_800F3C94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED4C;
u32 func_800F3C94(u32 a0)
{
    u32 v = *D_8019ED4C + a0;
    u32 base = 0x7FFC8000u;
    if (!((s32)0x7FFF < (s32)v))
        base = 0x800D0000u;
    return base;
}
