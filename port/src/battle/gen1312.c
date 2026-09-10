/* FF4 source-port — interpreted module for battle_rows_clear_variant_zero_byt.
 * Ground truth: src/battle_rows_clear_variant_zero_byt.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_clear_variant_zero_byt(void)
{
    /* battle rows (clear variant): 17 zero bytes at 0x800D0515. */
    s32 i;
    row_open();
    page_paint2(0xF42B);
    for (i = 0; i < 17; i++)
        *(volatile u8 *)(0x800D0515 - i) = 0;
    fn_1x48c28();
    row_close();
}
