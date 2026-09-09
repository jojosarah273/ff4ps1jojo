/* FF4 source-port — interpreted module for func_800F5FA4.
 * Ground truth: src/func_800F5FA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED40;
extern u16 *D_8019ED44;
void func_800F5FA4(void)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7D) | (D_8019ED40[1] & 0x80));
    if (*D_8019ED44 != 0)
        r &= 0xFF;
    else
        r = (u8)((x & 0x7D) | 0x2);
    *D_8019ED68 = r;
}
