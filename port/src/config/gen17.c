/* FF4 source-port — interpreted module for func_80124704.
 * Ground truth: src/func_80124704.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124704(void)
{
    cell_cursor_dec();
    row_sync();
    cell_put(0x1D);
    row_info(0x1E);
    midrow_prep_a();
    if (io_just() == 0)
        goto L810;
    sep();
    stat_sync();
    row_page(0x1D);
    row_prep(0x20);
    wnd_open_cur();
    for (;;) {
        row_sync2(0xF0FF);
        cell_stamp8_9_b(0x340);
        row_sync2(0x3000);
        cell_stamp8_9_b(0x342);
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    row_done();
    row_close2();
    return;
L810:
    latch_cur();
    stat_sync();
    row_page(0x1D);
    row_prep(0x20);
    row_prep_close();
    row_page(0x1D);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x20);
    cell_put(0x20);
    row_page(0x1D);
    sep_a();
    row_open_w(3);
    row_sel_cell_cur();
    cell_tick_or(cell_state(0x1C1));
    cell_put(0x21);
    row_prep(0x20);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        cell_stamp8_9_b(0x340);
        sep_a();
        cell_pos_fwd(8);
        cell_put_hi9(0x1E);
        row_read2(0x20);
        cell_stamp8_9_b(0x342);
        row_done2();
        cell_put_hi9(0x20);
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0x1E);
    sep_a();
    cell_pos_fwd(0x7E0);
    cell_put_hi9(0x1E);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        cell_stamp8_9_b(0x340);
        sep_a();
        cell_pos_fwd(8);
        cell_put_hi9(0x1E);
        row_read2(0x20);
        cell_stamp8_9_b(0x342);
        row_done2();
        cell_put_hi9(0x20);
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0x1E);
    sep_a();
    cell_pos_fwd(0x7E0);
    cell_put_hi9(0x1E);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        cell_stamp8_9_b(0x340);
        sep_a();
        cell_pos_fwd(8);
        cell_put_hi9(0x1E);
        row_read2(0x20);
        cell_stamp8_9_b(0x342);
        row_done2();
        cell_put_hi9(0x20);
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0x1E);
    sep_a();
    cell_pos_fwd(0x7E0);
    cell_put_hi9(0x1E);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        cell_stamp8_9_b(0x340);
        sep_a();
        cell_pos_fwd(8);
        cell_put_hi9(0x1E);
        row_read2(0x20);
        cell_stamp8_9_b(0x342);
        row_done2();
        cell_put_hi9(0x20);
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    row_done();
    row_close2();
    return;
}
