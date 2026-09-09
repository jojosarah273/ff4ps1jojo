/* FF4 source-port — interpreted module for func_800F6630.
 * Ground truth: src/func_800F6630.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void row_page(u32 a0)
{
    *(volatile u8 *)0x1F8003C8u = *(u8 *)cell_state((u16)a0);
}
