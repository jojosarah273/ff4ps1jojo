/* FF4 source-port — interpreted module for func_800F8960.
 * Ground truth: src/func_800F8960.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED58;
void func_800F8960(u32 a0)
{
    u8 *q = (u8 *)cell_state(a0 + *D_8019ED58);
    *q = *(volatile u8 *)0x1F8003C8u;
}
