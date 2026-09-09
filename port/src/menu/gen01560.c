/* FF4 source-port — interpreted module for func_800F8210.
 * Ground truth: src/func_800F8210.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800F8210(u32 a0)
{
    u8 *p = (u8 *)cell_peek_v(a0, 0);
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
