/* FF4 source-port — interpreted module for func_800F81B0.
 * Ground truth: src/func_800F81B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800F81B0(void)
{
    u8 *p = (u8 *)cell_state_of();
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
