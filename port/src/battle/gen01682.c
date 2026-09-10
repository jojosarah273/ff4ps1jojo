/* FF4 source-port — interpreted module for fn_1x46028.
 * Ground truth: src/fn_1x46028.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED48;
void fn_1x46028(void)
{
    u8 *s = (u8 *)cell_state(0x8000);
    u8 *p = s + ((((u8)(s[0x47] + 9)) << 5) + 0xF6);
    p[0x6D56] = 0xF6;
    p[0x6D57] = 0x7D;
    p[0x6D58] = 0x30;
    p[0x6D59] = 0x7D;
    {
        u16 v = *D_8019ED48;
        u8 *q = s + (v + 0xF6);
        q[0x6D60] = (u8)v;
        q[0x6D61] = (u8)(v >> 8);
    }
}
