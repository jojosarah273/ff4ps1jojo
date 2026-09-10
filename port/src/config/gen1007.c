/* FF4 source-port — interpreted module for battle_rows_c68_bcx2_cells_loop_l1.
 * Ground truth: src/battle_rows_c68_bcx2_cells_loop_l1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_c68_bcx2_cells_loop_l1(void)
{
    /* battle rows: 6C68/8960/63BCx2 cells; loop L13F9B8 on
       5958(5). */
    sep();
L13f9b8:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
