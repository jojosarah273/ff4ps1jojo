/* FF4 source-port — interpreted module for func_800F7084.
 * Ground truth: src/func_800F7084.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED5C;
void func_800F7084(void)
{
    u8 x = *D_8019ED68;
    u8 y = *D_8019ED5C;
    u8 r = (x & 0x7D) | (y & 0x80);
    if (y != 0)
        ;
    else
        r = (x & 0x7D) | 0x2;
    *D_8019ED68 = r;
}
