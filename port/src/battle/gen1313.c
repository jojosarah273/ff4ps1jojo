/* FF4 source-port — interpreted module for battle_rows_xf42b_text_x_xaa_bytes.
 * Ground truth: src/battle_rows_xf42b_text_x_xaa_bytes.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_xf42b_text_x_xaa_bytes(void)
{
    /* battle rows: 0xF42B text; 17 x 0xAA bytes at 0x800D0515
       (descending); 80148C28 + 95A0 close. */
    s32 i;
    row_open();
    page_paint2(0xF42B);
    for (i = 0; i < 17; i++)
        *(volatile u8 *)(0x800D0515 - i) = 0xAA;
    fn_1x48c28();
    row_close();
}
