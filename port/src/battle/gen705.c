/* FF4 source-port — interpreted module for row_latch_7e.
 * Ground truth: src/row_latch_7e.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
extern u16 *D_8019ED44;
void row_latch_7e(void)
{
    latch(0xA);
    row_open2();
    cell_cursor_dec();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    row_close2();
    cell_pull_c8(2);
    row_prep(0x20);
    *D_8019ED44 = *D_8019ED54;
    row_prep_close();
    cell_pull_c8(0);
    stat_sync();
    cell_pull_c8(1);
    row_page(0x3F);
    cell_pull_c8(3);
    row_pad();
}
