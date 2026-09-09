/* FF4 source-port — interpreted module for func_800F6B68.
 * Ground truth: src/func_800F6B68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void txt_cell(u32 a0)
{
    *(volatile u8 *)0x1F8003C8u = *(u8 *)cell_state(a0 + *D_8019ED54);
}
