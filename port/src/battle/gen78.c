/* FF4 source-port — interpreted module for func_80103B98.
 * Ground truth: src/func_80103B98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80103B98(void)
{
    /* shop list: 0x5C/0x70-0x73 window rows, 0x4200 title, 0x79 current
       row; two loops (L103BF8 menu / L103CEC detail) with 8010408C +
       80103F00 renders and the 0x6E/0x6F stat pairs. */
    func_8010408C();
    wnd_open_cur();
    tail(0x5C);
    open_row(0x70);
    open_row(0x71);
    open_row(0x72);
    open_row(0x73);
    latch(0x81);
    txt_draw(0x4200);
    latch_cur();
    cell_put(0x79);
L103bf8:
    for (;;) {
        wnd_fx_7d_b();
        cell_clear_bank(0x420C);
        row_page(0x79);
        sep_a();
        row_open_w(9);
        cell_put(0x6E);
        open_row(0x6F);
        func_800FE6E4();
        row_page(0x79);
        row_read(7);
        if (sel(0x202) != 0)
            goto L103CA4;
        row_page(0x5C);
        sep_b();
        cell_pos_back(1);
        cell_put(0x5C);
        row_page(0x5D);
        cell_pos_back();
        cell_put(0x5D);
    L103CA4:
        func_80103F00();
        func_8010408C();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x60);
        if (io_just() != 0)
            break;
    }
    latch(0x5F);
    cell_put(0x79);
L103cec:
    for (;;) {
        wnd_fx_7d_b();
        cell_clear_bank(0x420C);
        row_page(0x79);
        sep_a();
        row_open_w(9);
        cell_put(0x6E);
        open_row(0x6F);
        func_800FE6E4();
        row_page(0x79);
        row_read(7);
        if (sel(0x202) != 0)
            goto L103D98;
        row_page(0x5C);
        sep_b();
        cell_pos_back(1);
        cell_put(0x5C);
        row_page(0x5D);
        cell_pos_back();
        cell_put(0x5D);
    L103D98:
        func_8010408C();
        poll_pair(0x79);
        row_page(0x79);
        io_poll(0xFF);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
