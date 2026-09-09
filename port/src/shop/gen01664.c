/* FF4 source-port — interpreted module for func_801668EC.
 * Ground truth: src/func_801668EC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801668EC(void)
{
    u8 *b = (u8 *)cell_state(0x8000);
    u16 i;
    for (i = 0; i < 8; i = (u16)(i + 1)) {
        u8 x = b[i + 0x9B5];
        u8 y = b[i + 0x712B];
        b[i + 0x7123] = x;
        b[i + 0x9B5] = y;
    }
}
