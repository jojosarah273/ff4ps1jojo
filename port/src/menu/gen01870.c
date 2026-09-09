/* FF4 source-port — interpreted module for func_800F5574.
 * Ground truth: src/func_800F5574.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED40;
void io_poll(u8 a0)
{
    u8 f = 0;
    u8 x = *D_8019ED68;
    if (*D_8019ED40 == a0)
        f = 0x3;
    else if (*D_8019ED40 < a0)
        f = 0x80;
    else
        f = 0x1;
    *D_8019ED68 = (u8)((x & 0x7C) | f);
}
