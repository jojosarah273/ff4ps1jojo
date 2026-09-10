/* FF4 source-port — interpreted module for battle_rows_ef78_prep_loop_l1442e4.
 * Ground truth: src/battle_rows_ef78_prep_loop_l1442e4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_ef78_prep_loop_l1442e4(void)
{
    /* battle rows: 8013EF78 prep; loop L1442E4 on 5C64(0x202) with
       80140558 + cell writes; closes via 0x10 window. */
    cell_clear_bank();
    cell_clear_bank();
    battle_row_d548();
    wnd_open(0x78);
L1442e4:
    for (;;) {
        gpu_driver_run();
        txt_set_cur();
        cell_set50_from40();
        row_read(0xF);
        txt_draw_cur();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0x10);
    txt_draw_cur();
    return;
}
