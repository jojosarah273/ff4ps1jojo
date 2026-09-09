/* FF4 source-port — interpreted module for func_80148C28.
 * Ground truth: src/func_80148C28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80148C28(void)
{
    s32 i;
    for (i = 0x40; i < 0x160; i++)
        *(u8 *)(0x800D0300u + i) = 0xF0;
    cell_clear_bank(0xF42B);
}
