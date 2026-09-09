/* FF4 source-port — interpreted module for func_800F5520.
 * Ground truth: src/func_800F5520.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u16 *D_8019ED44;
void func_800F5520(u8 *a0)
{
    u8 r = (u8)(*D_8019ED68 & 0x7C);
    if (*D_8019ED44 == *a0)
        r |= 0x3;
    else if (*D_8019ED44 < *a0)
        r |= 0x80;
    else
        r |= 0x1;
    *D_8019ED68 = r;
}
