/* FF4 source-port — interpreted module for battle_rows_x342_x341_x343_cells_x.
 * Ground truth: src/battle_rows_x342_x341_x343_cells_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x342_x341_x343_cells_x(void)
{
    /* battle rows: 0x342/0x341/0x343 cells, 0x6CC0 gate, 2/4 windows. */
    cell_pull_c8(0x342);
    row_page(2);
    cell_pull_c8(0x341);
    txt_set(0x6CC0);
    if (gate(0x202) != 0)
        goto L13D098;
    row_page_cur();
    cell_pull_c8(0x340);
    row_page(4);
    goto L13D0F4;
L13D098:
    row_page_cur();
    sep_b();
    cell_pos_back(0x10);
    cell_pull_c8(0x340);
    row_page(4);
L13D0F4:
    cell_pull_c8(0x343);
    step2();
    step2();
    step2();
    step2();
    return;
}
