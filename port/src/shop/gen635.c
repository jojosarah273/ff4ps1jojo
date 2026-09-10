/* FF4 source-port — interpreted module for options_bars_x2001_xa9_xaa_cells_l.
 * Ground truth: src/options_bars_x2001_xa9_xaa_cells_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_bars_x2001_xa9_xaa_cells_l(void)
{
    /* options bars: 0x2001/0xA9/0xAA cells; loop L161820 on 5A90(5). */
    sep();
L161820:
    for (;;) {
        txt_cell(0x2001);
        cell_put(0xA9);
        row_read(0x80);
        cell_put(0xAA);
        row_page(0xA9);
        row_read(0x7F);
        cell_tick_or(cell_state(0xAA));
        cell_draw(0x2001);
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
