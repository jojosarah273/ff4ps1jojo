/* FF4 source-port — interpreted module for formation_row_x1d_x23_x25_x21_wind.
 * Ground truth: src/formation_row_x1d_x23_x25_x21_wind.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void formation_row_x1d_x23_x25_x21_wind(void)
{
    /* formation row: 0x1D/0x23/0x25/0x21 windows; loops L12EAC8
       (6434(0x514)/5A90 gates) and L12EB10 (8A18 cell reads). */
L12eac8:
    for (;;) {
        page(0x1D);
        cell_step();
        tail(0x23);
        cell_push_c8_lo(0x1D);
        if (gate(0x202) != 0)
            goto L12EBA8;
        cell_fmt2(0x1D);
        step2();
        step2();
    L12eb10:
        for (;;) {
            cell_push_c8_d58();
            if (gate(2) != 0)
                goto L12EB78;
            io_poll(0xFE);
            if (io_go() != 0)
                goto L12EB78;
            cell_pull_c8_sel2(0x1D);
            cell_push_c8_d58(1);
            cell_pull_c8_sel2(0x23);
            latch_cur();
            cell_pull_c8();
            cell_pull_c8(1);
            goto L12EBA8;
        L12EB78:
            step2();
            step2();
            if (func_800F5804(cell_state(0x25)) == 0)
                continue;
            break;
        }
    L12EBA8:
        page(0x1D);
        cell_step();
        cell_step();
        tail(0x1D);
        if (cell_flags_cmp(cell_state(0x21)) == 0)
            continue;
        break;
    }
    return;
}
