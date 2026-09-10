/* FF4 source-port — interpreted module for battle_rows_xc_xe_windows_x340_x34.
 * Ground truth: src/battle_rows_xc_xe_windows_x340_x34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_xc_xe_windows_x340_x34(void)
{
    /* battle rows: 0xC/0xE windows, 0x340-0x343 cells, 800FC0DC row;
       loop L1105B8 on 5A90(0x18). */
    draw_pad_cur();
L1105b8:
    for (;;) {
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0xC));
        cell_pull_c8(0x340);
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x341);
        cell_push_c8();
        cell_pull_c8(0x342);
        cell_push_c8();
        cell_pull_c8(0x343);
        func_800FC0DC();
        poll_t(0x18);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
