/* FF4 source-port — interpreted module for rows_f360_prep_x29_x1d_x1e_window.
 * Ground truth: src/rows_f360_prep_x29_x1d_x1e_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_f360_prep_x29_x1d_x1e_window(void)
{
    /* rows: 8011F360 prep, 0x29/0x1D/0x1E window cells; linear. */
    rows_x45_window_loop_l11f370_on_c0();
    row_prep(0x20);
    cell_cursor_ret2();
    sep_a();
    cell_peek0(cell_state(0x29));
    cell_cursor_adv2();
    row_prep_close();
    cell_pull_c8();
    stat_sync();
    cell_pull_c8(2);
    return;
}
