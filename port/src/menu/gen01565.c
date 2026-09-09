/* FF4 source-port — interpreted module for func_800F764C.
 * Ground truth: src/func_800F764C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
extern u8 *D_8019ED60;
void func_800F764C(u32 a0)
{
    *D_8019ED60 = *(u8 *)cell_state(a0 + *D_8019ED5C);
}
