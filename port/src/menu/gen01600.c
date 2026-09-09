/* FF4 source-port — interpreted module for func_800F658C.
 * Ground truth: src/func_800F658C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800F658C(void)
{
    u8 *p = (u8 *)cell_state_of();
    ((volatile u8 *)0x1F8003C0u)[8] = p[0];
    ((volatile u8 *)0x1F8003C0u)[9] = p[1];
}
