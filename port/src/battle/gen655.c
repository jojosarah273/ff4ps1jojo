/* FF4 source-port — interpreted module for battle_rows_x300_x303_x200_cells_x.
 * Ground truth: src/battle_rows_x300_x303_x200_cells_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x300_x303_x200_cells_x(void)
{
    /* battle rows: 0x300-0x303/0x200 cells, 0xFF window, 8010D9D4
       rows; loop L10E898 on 5A90(0x200). */
    fn_1x03f40();
    draw_pad(0x10);
    wnd_open_cur();
L10e898:
    for (;;) {
        battle_row_linear();
        cell_tick_half();
        sep_a();
        row_open_w(0x40);
        cell_pull_c8(0x300);
        battle_row_linear();
        cell_tick_half();
        sep_a();
        row_open_w(0x40);
        cell_pull_c8(0x301);
        latch(0xFF);
        cell_pull_c8(0x302);
        battle_row_linear();
        row_read(7);
        row_sel_cell_cur();
        cell_pull_c8(0x303);
        cell_pull_c8(0x200);
        poll_t(0x200);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
