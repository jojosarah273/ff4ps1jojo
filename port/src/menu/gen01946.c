/* FF4 source-port — interpreted module for func_800F3C6C.
 * Ground truth: src/func_800F3C6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 func_800F3C6C(u32 a0)
{
    u32 base = 0x7FFC8000u;
    if (!((s32)0x7FFF < (s32)a0))
        base = 0x800D0000u;
    return *(u32 *)(base + a0);
}
