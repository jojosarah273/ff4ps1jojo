/* FF4 source-port — interpreted module for battle_rows_x_cells_x7612_x77b6_lo.
 * Ground truth: src/battle_rows_x_cells_x7612_x77b6_lo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x_cells_x7612_x77b6_lo(void)
{
    /* battle rows: 4x 8768 cells (0x7612-0x77B6); loop L14CEAC on
       5958(0x8C). */
    cell_cursor_dec();
    wnd_open_cur();
L14ceac:
    for (;;) {
        cell_draw(0x7612);
        cell_draw(0x769E);
        cell_draw(0x772A);
        cell_draw(0x77B6);
        poll_t(0x8C);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close2();
    return;
}
