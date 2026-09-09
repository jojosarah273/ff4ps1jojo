/* FF4 source-port — interpreted module for func_800F4998.
 * Ground truth: src/func_800F4998.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
extern u8 *D_8019ED40;
void func_800F4998(u32 a0)
{
    u8 *q = (u8 *)cell_state(a0 + *D_8019ED5C);
    D_8019ED40[0] &= q[0];
    D_8019ED40[1] &= q[1];
}
