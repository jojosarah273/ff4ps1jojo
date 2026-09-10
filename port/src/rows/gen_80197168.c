/* FF4 source-port — interpreted module for anim_struct_init_u16s_u8s_zero_run.
 * Ground truth: src/anim_struct_init_u16s_u8s_zero_run.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void anim_struct_init_u16s_u8s_zero_run(u16 *dst, u16 a1, u16 a2, u16 a3, u16 a4)
{
    /* anim struct init: 8 u16s + 4 u8s zero run. */
    dst[0] = a1;
    dst[1] = a2;
    dst[2] = a3;
    dst[3] = a4;
    dst[4] = 0;
    dst[5] = 0;
    dst[6] = 0;
    dst[7] = 0;
    ((u8 *)dst)[0x10] = 0;
    ((u8 *)dst)[0x11] = 0;
    ((u8 *)dst)[0x12] = 0;
    ((u8 *)dst)[0x13] = 0;
}
