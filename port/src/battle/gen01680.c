/* FF4 source-port — interpreted module for fn_1x48c28.
 * Ground truth: src/fn_1x48c28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x48c28(void)
{
    s32 i;
    for (i = 0x40; i < 0x160; i++)
        *(u8 *)(0x800D0300u + i) = 0xF0;
    cell_clear_bank(0xF42B);
}
