/* FF4 source-port — interpreted module for func_800F8738.
 * Ground truth: src/func_800F8738.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
void func_800F8738(u32 a0)
{
    u8 *q = (u8 *)cell_state(a0 + *D_8019ED5C);
    *q = *(volatile u8 *)0x1F8003C8u;
}
