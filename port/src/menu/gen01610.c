/* FF4 source-port — interpreted module for func_800F4928.
 * Ground truth: src/func_800F4928.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
extern u8 *D_8019ED40;
void func_800F4928(u32 a0)
{
    u8 *p = D_8019ED5C;
    cell_state(a0 + *p);
    *D_8019ED40 &= *p;
}
