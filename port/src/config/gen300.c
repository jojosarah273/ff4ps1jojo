/* FF4 source-port — interpreted module for func_801225C0.
 * Ground truth: src/func_801225C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801225C0(void)
{
    /* config confirm screen: 0x7E window, 0x1A03/0x16B7/0x1A76/0x1A77
       texts; 80123CB4 + 801386C8 preps; loops at L122620 with the
       8012B168/80120070 sub-dispatchers; 80126550/80122538 row draws. */
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    func_80123CB4();
    func_801386C8();
    cell_clear_bank(0x1A03);
    txt_set(0x16B7);
    if (gate(0x202) != 0)
        goto L122620;
    cell_clear_bank(0x1A76);
    cell_clear_bank(0x1A77);
L122620:
    for (;;) {
        txt_set(0x1A76);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x10);
        cell_put(0x46);
        latch(0xB0);
        cell_put(0x45);
        func_8011F6D4();
        func_80122538();
        midrow_pad88_run();
        func_80126550();
        battle_state_dc400();
        midrow_degen();
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L1226F0;
        txt_set(0x1A76);
        poll_spin();
        if (poll_go_cur() != 0)
            goto L1226E8;
        latch(7);
    L1226E8:
        txt_draw(0x1A76);
    L1226F0:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L122748;
        txt_set(0x1A76);
        cell_set50_from40();
        io_poll(8);
        if (io_go() == 0)
            goto L122740;
        sep();
    L122740:
        txt_draw(0x1A76);
    L122748:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L1227EC;
        func_8012B168();
        midrow_pad88_run();
        txt_set(0x1A76);
        if (io_press(cell_state(0x1A77)) != 0)
            goto L1227A8;
        func_80123CB4();
    L1227A8:
        txt_draw(0x1A77);
        wnd_open_cur();
        func_80120070();
        /* v0/v1 + a0/v1 gates -> L12280C (return) */
        func_80123CB4();
        continue;
    L1227EC:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            continue;
        break;
    }
    return;
}
