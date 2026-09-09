/* FF4 source-port — interpreted module for func_800F4960.
 * Ground truth: src/func_800F4960.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
extern u8 *D_8019ED40;
void func_800F4960(u32 a0)
{
    u16 *p = D_8019ED54;
    cell_state(a0 + *p);
    *D_8019ED40 &= (u8)*p;
}
