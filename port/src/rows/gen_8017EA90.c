/* FF4 source-port — interpreted module for fn_1x7ea90.
 * Ground truth: src/fn_1x7ea90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019EE7A;
extern u16 *D_8019EE7C;
extern u16 *D_8019EE7E;
void fn_1x7ea90(u8 a0)
{
    u16 v = (u16)(a0 & 0x1F);
    if (a0 & 0x80)
        *D_8019EE7A = v;
    if (a0 & 0x40)
        *D_8019EE7C = v;
    if (a0 & 0x20)
        *D_8019EE7E = v;
}
