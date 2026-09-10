/* FF4 source-port — interpreted module for battle_magic_status_x340_x343_cell.
 * Ground truth: src/battle_magic_status_x340_x343_cell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_status_x340_x343_cell(void)
{
    /* battle magic-status: 0x340-0x343 cells, 0x6CC0 gate with
       8058(0x10) alt row; loop L142498 on 5958(8). */
    sep();
L142498:
    for (;;) {
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        cell_pull_c8(0x340);
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        cell_pull_c8(0x341);
        cell_push_c8();
        cell_pull_c8(0x342);
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L142574;
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        sep_b();
        cell_pos_back(0x10);
        cell_pull_c8(0x340);
        latch(0x7F);
        goto L1425A4;
    L142574:
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        cell_pull_c8(0x340);
        latch(0x3F);
    L1425A4:
        cell_pull_c8(0x343);
        step2();
        step2();
        step2();
        step2();
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
