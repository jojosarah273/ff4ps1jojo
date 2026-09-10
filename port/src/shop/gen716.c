/* FF4 source-port — interpreted module for options_x3540_x2003_cells_ec_x2007.
 * Ground truth: src/options_x3540_x2003_cells_ec_x2007.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x3540_x2003_cells_ec_x2007(void)
{
    /* options: 0x3540/0x2003 cells, 90EC(0x2007/0x2008) rows; loop
       L16E5A8 on 5A90(5). */
    sep();
L16e5a8:
    for (;;) {
        cell_push_c8_d58(0x3540);
        if (gate(0x202) != 0)
            goto L16E5E8;
        txt_cell(0x2003);
        if (gate_cur() != 0)
            goto L16E5E8;
        page_paint(0x2007);
        page_paint(0x2008);
    L16E5E8:
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x80);
        sep();
        row_prep_close();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
