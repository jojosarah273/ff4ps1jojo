/* FF4 source-port — interpreted module for status_row_x30_xc1_x1d_x1e_x1a3c_x.
 * Ground truth: src/status_row_x30_xc1_x1d_x1e_x1a3c_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void status_row_x30_xc1_x1d_x1e_x1a3c_x(void)
{
    /* status row: 0x30/0xC1/0x1D/0x1E/0x1A3C/0x5A windows,
       8012807C/801241B8/801224D0/80125130 rows; loop L1281AC on
       5DA0(0x5A)/5B8C(0x202). */
    latch(0x30);
    cell_put(0xC1);
    fn_1x2807c();
    midrow_paint_c();
    sep();
    cell_put(0x1D);
    sep();
    cell_put(0x1E);
    txt_set(0x1A3C);
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    cell_put_hi9(0x1F);
    row_prep_close();
    latch(5);
    cell_put(0x5A);
L1281ac:
    for (;;) {
        config_row_1d();
        row_prep(0x20);
        row_sync2(0x18);
        sep_a();
        cell_peek0(cell_state(0x1F));
        cell_put_hi9(0x1F);
        row_prep_close();
        key_page(0x1D);
        poll_pair(0x5A);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
