/* FF4 source-port — interpreted module for battle_rows_x4e_window_c68_bc_cell.
 * Ground truth: src/battle_rows_x4e_window_c68_bc_cell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x4e_window_c68_bc_cell(void)
{
    /* battle rows: 0x4E window + 6C68/8960/63BC cells; loop
       L166844 on 5A90(0x20). */
    open_row(0x4E);
    sep();
L166844:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
