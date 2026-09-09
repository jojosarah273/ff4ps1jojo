/* FF4 source-port — interpreted module for func_80148D04.
 * Ground truth: src/func_80148D04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80148D04(void)
{
    /* battle rows (clear variant): 17 zero bytes at 0x800D0515. */
    s32 i;
    row_open();
    page_paint2(0xF42B);
    for (i = 0; i < 17; i++)
        *(volatile u8 *)(0x800D0515 - i) = 0;
    func_80148C28();
    row_close();
}
