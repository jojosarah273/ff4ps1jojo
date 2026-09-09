/* FF4 source-port — interpreted module for func_800F9140.
 * Ground truth: src/func_800F9140.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void func_800F9140(u32 a0)
{
    u8 *q = (u8 *)cell_state(a0 + *D_8019ED54);
    q[0] = 0;
    q[1] = 0;
}
