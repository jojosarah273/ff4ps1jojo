/* FF4 source-port — interpreted module for func_800F767C.
 * Ground truth: src/func_800F767C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
extern u8 *D_8019ED60;
void func_800F767C(u32 a0)
{
    u8 *q = (u8 *)cell_state(a0 + *D_8019ED54);
    D_8019ED60[0] = q[0];
    D_8019ED60[1] = q[1];
}
