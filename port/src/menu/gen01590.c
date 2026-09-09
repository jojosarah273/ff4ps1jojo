/* FF4 source-port — interpreted module for func_800F6B38.
 * Ground truth: src/func_800F6B38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
void func_800F6B38(u32 a0)
{
    u8 v = *D_8019ED5C;
    cell_state(a0 + v);
    *(volatile u8 *)0x1F8003C8u = *D_8019ED5C;
}
