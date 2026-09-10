/* FF4 source-port — interpreted module for rows_x43_x29_windows_with_f94_c3c.
 * Ground truth: src/rows_x43_x29_windows_with_f94_c3c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x43_x29_windows_with_f94_c3c(void)
{
    /* rows: 0x43/0x29 windows with 3F94(3C3C) reads; linear. */
    stat_sync();
    latch_cur();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x43));
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    return;
}
