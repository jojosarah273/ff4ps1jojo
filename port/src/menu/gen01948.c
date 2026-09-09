/* FF4 source-port — interpreted module for func_800F3B9C.
 * Ground truth: src/func_800F3B9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 cell_peek_v(u32 a0, u32 a1)
{
    /* byte-verified: the scratch-base machinery computes into an
       unused register; the only observable output is (u16)a0. */
    u16 t = (u16)a1 + (u16)a0;
    (void)t;
    return a0 & 0xFFFF;
}
