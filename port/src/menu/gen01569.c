/* FF4 source-port — interpreted module for func_800F7358.
 * Ground truth: src/func_800F7358.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED58;
extern u8 *D_8019ED5C;
void func_800F7358(u32 a0)
{
    u8 *q = (u8 *)cell_state(a0 + *D_8019ED58);
    D_8019ED5C[0] = q[0];
    D_8019ED5C[1] = q[1];
}
