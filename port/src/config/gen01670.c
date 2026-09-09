/* FF4 source-port — interpreted module for func_8015A56C.
 * Ground truth: src/func_8015A56C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A56C(void)
{
    /* options: s16 cursor from buf[0xAB:AC], sign-clean 0x8000,
       latched into buf[0xD4:D5]. */
    u8 *p = (u8 *)cell_state(0);
    u16 v = (u16)(p[0xAB] | (p[0xAC] << 8));
    if (v & 0x8000)
        v = 0;
    p[0xD4] = v & 0xFF;
    p[0xD5] = v >> 8;
}
