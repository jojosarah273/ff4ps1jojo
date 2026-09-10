/* FF4 source-port — interpreted module for battle_rows_x_b68_cell_pairs_loop.
 * Ground truth: src/battle_rows_x_b68_cell_pairs_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x_b68_cell_pairs_loop(void)
{
    /* battle rows: 4x 6B68/8768 cell pairs; loop L1423C0 on
       5958(3), then 4x 5D24 close. */
    sep();
L1423c0:
    for (;;) {
        txt_cell_cur();
        cell_draw_cur();
        txt_cell_cur();
        cell_draw_cur();
        txt_cell_cur();
        cell_draw_cur();
        txt_cell_cur();
        cell_draw_cur();
        cell_step();
        poll_t(3);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_dec_bank();
    cell_dec_bank();
    cell_dec_bank();
    cell_dec_bank();
    return;
}
