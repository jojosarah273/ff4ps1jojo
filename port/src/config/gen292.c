/* FF4 source-port — interpreted module for func_80150458.
 * Ground truth: src/func_80150458.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80150458(void)
{
    /* battle cast flow: 8007259C gates, L1504A8 spin loop, then the
       stat block (8E50/4264/81B0 cells) and the L150578 scan loop
       with 5D24/5B8C(2) latch. */
    wnd_open(0x40);
    tail_cur();
    latch(0x7E);
    wnd_open_cur();
    func_800F9200();
    row_open();
    row_sync();
    page_cur();
    row_open();
L1504a8:
    for (;;) {
        txt_set_cur();
        if (gate(2) != 0)
            goto L1504D0;
        func_8007259C();
    }
L1504D0:
    row_close();
    tail_cur();
    row_done();
    row_close();
    row_close2();
    txt_draw_cur();
    label_cur();
    func_800F8E50();
    wnd_open(0x40);
    label_cur();
    row_prep(0x20);
    row_read2();
    func_800F4264();
    func_800F8274();
    sep();
    row_prep_close();
    row_page(1);
    txt_draw_cur();
L150578:
    for (;;) {
        page_paint2_cur();
        func_8007259C();
        func_800F5D24();
        if (poll_go(2) != 0)
            goto L150600;
        row_prep(0x20);
        func_800F658C();
        sep_a();
        func_800F4064(0x40);
        func_800F81B0();
        func_800F658C();
        sep_a();
        func_800F4064(0x20);
        func_800F81B0();
        sep();
        row_prep_close();
    }
L150600:
    return;
}
