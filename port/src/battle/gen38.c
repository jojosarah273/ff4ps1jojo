/* FF4 source-port — interpreted module for fn_1x07530.
 * Ground truth: src/fn_1x07530.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x07530(void)
{
    row_page(0xE6);
    if (gate(0x202) != 0)
        goto L7560;
    shop_detail_xda_xe7_x8d_xba_window();
    return;
L7560:
    open_row(0xE6);
    row_page(0xBA);
    row_read(0xF);
    cell_put(0x13);
    open_row(0x12);
    cell_word_half(cell_state(0x13));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x12));
    cell_word_half(cell_state(0x13));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x12));
    row_page(0x12);
    sep_a();
    row_open_w(4);
    cell_put(0x12);
    row_page(0x13);
    row_read(3);
    sep_a();
    row_open_w(0x2C);
    cell_put(0x13);
    wnd_open(0x774);
    tail(0x14);
    wnd_open(0x834);
    tail(0x16);
    cell_clear_bank(0x2115);
    wnd_fx_tags();
    cell_clear_bank(0x4300);
    latch(4);
    cell_put(0x11);
L7668:
    for (;;) {
        page(0x16);
        label(0x4302);
        page(0x12);
        label(0x2116);
        wnd_open(0x18);
        label(0x4305);
        catalog_dispatch_0();
        row_page(0x12);
        sep_a();
        row_open_w(0x20);
        cell_put(0x12);
        row_page(0x13);
        row_open_w0();
        cell_put(0x13);
        cell_clear_bank(0x420B);
        page(0x14);
        label(0x4302);
        page(0x12);
        label(0x2116);
        wnd_open(0x18);
        label(0x4305);
        catalog_dispatch_0();
        row_page(0x12);
        sep_a();
        row_open_w(0x20);
        cell_put(0x12);
        row_page(0x13);
        row_open_w0();
        cell_put(0x13);
        sep_b();
        cell_pos_back(0x30);
        if (io_go() == 0)
            goto L7790;
        row_read(3);
        sep_a();
        row_open_w(0x2C);
        cell_put(0x13);
    L7790:
        row_page(0x14);
        sep_a();
        row_open_w(0x18);
        cell_put(0x14);
        row_page(0x15);
        row_open_w0();
        cell_put(0x15);
        row_page(0x16);
        sep_a();
        row_open_w(0x18);
        cell_put(0x16);
        row_page(0x17);
        row_open_w0();
        cell_put(0x17);
        poll_pair(0x11);
        if (poll_go(2) == 0)
            continue;
        break;
    }
    shop_detail_xda_xe7_x8d_xba_window();
    return;
}
