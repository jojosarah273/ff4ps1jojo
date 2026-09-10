/* FF4 source-port — interpreted module for shop_row_x29_x45_windows_x41_x1500.
 * Ground truth: src/shop_row_x29_x45_windows_x41_x1500.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_row_x29_x45_windows_x41_x1500(void)
{
    /* shop row: 0x29/0x45 windows, 0x41/0x1500 texts, 801245B4 row;
       loop L120AFC on 5DA0(0x45)/5B8C(0x202). */
    row_read(0x3F);
    if (sel(0x202) == 0)
        return;
    poll_spin();
    battle_put43();
    row_sel_cell_cur();
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    battle_put43();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    latch(6);
    cell_put(0x45);
L120afc:
    for (;;) {
        txt_cell(0x1500);
        cell_step();
        battle_rows_42();
        cell_pull_c8();
        stat_sync();
        cell_pull_c8(0x40);
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
