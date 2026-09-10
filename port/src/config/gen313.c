/* FF4 source-port — interpreted module for battle_magic_rows_x4_x2_windows_e5.
 * Ground truth: src/battle_magic_rows_x4_x2_windows_e5.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_rows_x4_x2_windows_e5(void)
{
    /* battle magic rows: 0x4/0x2 windows, 8013E5D0 row, 0x6CD8 gate
       loop L13E7D8, then the L13E864 pair loop on 3F38(3B04) cells. */
    txt_set_cur();
    row_open();
    cell_push_c8();
    cell_put(4);
    battle_rows_x4_x1_windows_e588_row();
    row_close();
    row_open();
    cell_push_c8();
    sep();
L13e7d8:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(0x12);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    cell_push_c8();
    sep();
L13e864:
    for (;;) {
        cell_push_c8();
        row_sel_cell_cur();
        row_open();
        cell_push_c8_d58();
        sep_a();
        cell_poke0(cell_state_of());
        cell_pull_c8();
        cell_push_c8_d58();
        sep_a();
        cell_poke0(cell_state_of());
        cell_pull_c8();
        row_close();
        cell_step();
        step2();
        step2();
        poll_t(0x12);
        if (io_just() == 0)
            continue;
        break;
    }
    page_paint2_cur();
    txt_set_cur();
    io_poll(9);
    if (io_just() == 0)
        goto L13E974;
    cell_clear_bank();
    return;
L13E974:
    return;
}
