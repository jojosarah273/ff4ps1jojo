/* FF4 source-port — interpreted module for func_80124704.
 * Ground truth: src/func_80124704.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124704(void)
{
    func_800F9200();
    row_sync();
    cell_put(0x1D);
    row_info(0x1E);
    func_8012D204();
    if (io_just() == 0)
        goto L810;
    sep();
    stat_sync();
    row_page(0x1D);
    row_prep(0x20);
    wnd_open_cur();
    for (;;) {
        row_sync2(0xF0FF);
        func_800F89D4(0x340);
        row_sync2(0x3000);
        func_800F89D4(0x342);
        func_800F5E48();
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
    func_800F78C4(cell_state(0x1C1));
    cell_put(0x21);
    row_prep(0x20);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        func_800F89D4(0x340);
        sep_a();
        func_800F4064(8);
        func_800F8274(0x1E);
        row_read2(0x20);
        func_800F89D4(0x342);
        row_done2();
        func_800F8274(0x20);
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0x1E);
    sep_a();
    func_800F4064(0x7E0);
    func_800F8274(0x1E);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        func_800F89D4(0x340);
        sep_a();
        func_800F4064(8);
        func_800F8274(0x1E);
        row_read2(0x20);
        func_800F89D4(0x342);
        row_done2();
        func_800F8274(0x20);
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0x1E);
    sep_a();
    func_800F4064(0x7E0);
    func_800F8274(0x1E);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        func_800F89D4(0x340);
        sep_a();
        func_800F4064(8);
        func_800F8274(0x1E);
        row_read2(0x20);
        func_800F89D4(0x342);
        row_done2();
        func_800F8274(0x20);
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0x1E);
    sep_a();
    func_800F4064(0x7E0);
    func_800F8274(0x1E);
    wnd_open(4);
    for (;;) {
        row_read2(0x1E);
        func_800F89D4(0x340);
        sep_a();
        func_800F4064(8);
        func_800F8274(0x1E);
        row_read2(0x20);
        func_800F89D4(0x342);
        row_done2();
        func_800F8274(0x20);
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    row_done();
    row_close2();
    return;
}
