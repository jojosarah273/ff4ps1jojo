/* FF4 source-port — interpreted module for func_800F88E4.
 * Ground truth: src/func_800F88E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3B9C(void);
void func_800F88E4(void)
{
    u8 *p = (u8 *)cell_peek;
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
