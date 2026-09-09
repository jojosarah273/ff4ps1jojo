/* FF4 source-port — interpreted module for func_800F6564.
 * Ground truth: src/func_800F6564.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void txt_set(void)
{
    *(volatile u8 *)0x1F8003C8u = *(u8 *)cell_state_of();
}
