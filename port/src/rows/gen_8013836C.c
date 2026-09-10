/* FF4 source-port — interpreted module for fn_1x3836c.
 * Ground truth: src/fn_1x3836c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_801CF568[];
void fn_1x3836c(u32 mode)
{
    u8 *buf = (u8 *)D_801CF568;
    u8 *ram = (u8 *)0x800D1000u;
    s32 n = 0x7FF;
    if (mode == 0) {
        do {
            *buf++ = *ram++;
        } while (--n >= 0);
    } else {
        do {
            *ram++ = *buf++;
        } while (--n >= 0);
    }
}
