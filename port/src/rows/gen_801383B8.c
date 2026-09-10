/* FF4 source-port — interpreted module for fn_1x383b8.
 * Ground truth: src/fn_1x383b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_801CFD68[16384];
void fn_1x383b8(void)
{
    u32 i = 0;
    do {
        u16 *p = D_801CFD68 + (0x6953 + i * 32);
        s32 k = 0xB;
        do {
            *p++ = 0x2000;
        } while (--k >= 0);
        i = i + 1;
    } while (i < 4);
}
