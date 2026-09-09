/* FF4 source-port — interpreted module for func_80107830.
 * Ground truth: src/func_80107830.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80107830(void)
{
    wnd_open_cur();
    latch(0xFF);
    for (;;) {
        cell_draw(0x774);
        cell_step();
        poll_t(0x180);
        if (io_just() != 0)
            break;
    }
    row_page(0xBA);
    tail(0x3D);
    draw_pad_cur();
    row_info(0x40);
    latch(8);
    cell_put(7);
L78e0:
    for (;;) {
        page(0x3D);
        txt_cell(0x712);
        if (gate(0x202) == 0)
            goto L7b54;
        open_row(0x19);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(0x19));
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(0x19));
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(0x19));
        sep_a();
        cell_poke0(cell_state_of());
        cell_put(0x18);
        row_page(0x19);
        row_open_w0();
        cell_put(0x19);
        page(0x18);
        cell_step();
        cell_fmt2(0x40);
        latch(8);
        cell_put(8);
        for (;;) {
            cell_push_c8();
            func_801093B8();
            cell_pull_c8(0x774);
            stat_sync();
            cell_pull_c8(0x834);
            latch_cur();
            stat_sync();
            step2();
            cell_step();
            poll_pair(8);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        cell_fmt2(0x40);
        latch(0xC8);
        cell_pull_c8(0x77C);
        page(0x3D);
        txt_cell(0x713);
        cell_put(0x30);
        open_row(0x31);
        open_row(0x32);
        func_80174CE4();
        cell_fmt2(0x40);
        row_page(0x3A);
        cell_pull_c8(0x77D);
        row_page(0x3B);
        cell_pull_c8(0x77E);
        row_page(7);
        row_read(1);
        if (sel(0x202) != 0)
            goto L7af4;
        row_page(0x40);
        sep_a();
        row_open_w(0xD);
        cell_put(0x40);
        goto L7b14;
    L7af4:
        row_page(0x40);
        sep_a();
        row_open_w(0xB);
        cell_put(0x40);
    L7b14:
        page(0x3D);
        tail(0x3D);
        poll_pair(7);
        if (poll_go(2) == 0)
            continue;
        break;
    }
L7b54:
    latch(1);
    cell_put(0xE6);
    return;
}
