/* FF4 source-port — interpreted module for battle_rows_b744_prep_x3d_x1280_ce.
 * Ground truth: src/battle_rows_b744_prep_x3d_x1280_ce.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_b744_prep_x3d_x1280_ce(void)
{
    /* battle rows: 8011B744 prep + 0x3D/0x1280 cells; loop L11B6DC
       on 5A90/53D4. */
    row_open();
    fn_1x1b744();
    page(0x3D);
    txt_cell(0x1280);
L11b6dc:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            goto L11B70C;
        cell_tick_half();
        poll_pair_cur();
    }
L11B70C:
    cell_tick_half();
    cell_flags_repack();
    latch_cur();
    row_open_w0();
    row_close();
    return;
}
