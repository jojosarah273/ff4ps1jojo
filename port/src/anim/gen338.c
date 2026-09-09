/* FF4 source-port — interpreted module for func_80174CE4.
 * Ground truth: src/func_80174CE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80174CE4(void)
{
    /* shop stats: 0x30/0x32 windows, 0x33/0x34 profit cells, 3F94/
       7FCC(3B9C) rows; loops L174D04/L174D14 (5A90(0x10)). */
    row_open();
    row_sync();
    wnd_open_cur();
L174d04:
    for (;;) {
        draw_pad(0x80);
        open_row(0x33);
    L174d14:
        for (;;) {
            row_prep(0x20);
            row_read2(0x30);
            sep_b();
            func_800F7FCC(cell_peek_cur());
            cell_put_hi9(0x30);
            row_read2(0x32);
            func_800F7FCC(cell_peek_cur());
            cell_put_hi9(0x32);
            if (io_go() != 0)
                goto L174DC4;
            step2();
        }
    L174DC4:
        row_read2(0x30);
        sep_a();
        cell_peek0(cell_peek_cur());
        cell_put_hi9(0x30);
        row_read2(0x32);
        cell_peek0(cell_peek_cur());
        cell_put_hi9(0x32);
        row_sync2_cur();
        row_prep_close();
        row_open();
        cell_tick_half();
        func_800F8674(0x34);
        row_close();
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    row_done();
    row_close();
    return;
}
