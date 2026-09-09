/* FF4 source-port — interpreted module for func_800F3D48.
 * Ground truth: src/func_800F3D48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void stat_sync(void)
{
    volatile u8 *p = (volatile u8 *)0x1F8003C0u;
    u8 b0 = p[8];
    u8 b1 = p[9];
    p[8] = b1;
    p[9] = b0;
}
