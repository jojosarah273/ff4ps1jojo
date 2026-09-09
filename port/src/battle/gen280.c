/* FF4 source-port — interpreted module for func_80110CFC.
 * Ground truth: src/func_80110CFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80110CFC(void)
{
    /* battle spell-cast row: 0x1FC1/0x6C8 texts, 0x26/0xB9/0x7A/0x22/
       0x24 windows, 80110F2C/80110FA4 sub-renders, 80173780 cast body,
       80110BC8 target pick; loops L110D24/L110D5C/L110E8C. */
    func_80110F2C();
    latch(1);
    cell_pull_c8_lo(0x6C8);
    wnd_open_cur();
L110d24:
    for (;;) {
        txt_cell(0xEBB);
        cell_draw(0xA6D);
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    open_row(0x26);
L110d5c:
    for (;;) {
        func_80110FA4();
        latch(0x20);
        cell_put(0xB9);
        func_80173780();
        row_page(0x7A);
        cell_tick_half();
        if (func_800F7728(0x101) != 0)
            goto L110DA4;
        key_page(0x26);
    L110DA4:
        row_page(0x26);
        if (gate(0x80) != 0)
            goto L110E54;
        row_sel_cell_cur();
        cell_put(0x22);
        row_page(0x24);
        sep_a();
        cell_poke0(cell_state(0x22));
        cell_put(0x24);
        /* v0 gate -> L110E34 */
    L110E34:
        if (io_go() != 0)
            goto L110E54;
        func_80110BC8();
        goto L110EBC;
    L110E54:
        row_read(0xF1);
        io_poll(0x80);
        if (io_just() == 0)
            goto L110E84;
        latch(1);
        cell_put(0xC4);
    L110E84:
        wnd_open_cur();
    L110e8c:
        for (;;) {
            txt_cell(0xA6D);
            cell_draw(0xEBB);
            cell_step();
            poll_t(0x10);
            if (io_just() != 0)
                break;
        }
    L110EBC:
        row_page(0x26);
        io_poll(0xFF);
        if (io_just() == 0)
            continue;
        break;
    }
    open_row(0xC8);
    latch(1);
    txt_draw(0x1724);
    cell_clear_bank(0x1727);
    open_row(0xB9);
    wnd_open_cur();
    label(0x1725);
    func_8011EA5C();
    return;
}
