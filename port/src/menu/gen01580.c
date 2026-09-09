/* FF4 source-port — interpreted module for func_800F6EDC.
 * Ground truth: src/func_800F6EDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3B9C(void);
void func_800F6EDC(void)
{
    u8 *p = (u8 *)cell_peek;
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[1] = p[1];
}
