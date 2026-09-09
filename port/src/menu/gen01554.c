/* FF4 source-port — interpreted module for func_800F8598.
 * Ground truth: src/func_800F8598.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3B04(void);
void func_800F8598(void)
{
    u8 *p = (u8 *)cell_state;
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
