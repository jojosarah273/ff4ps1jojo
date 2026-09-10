/* FF4 source-port — interpreted module for cell_0xfaa04.
 * Ground truth: src/cell_0xfaa04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void cell_0xfaa04(void)
{
    func_800FA460();
    func_800FB3A0();
    open_row(0xAC);
    txt_set(0x1702);
    cell_put(0x18);
    open_row(0x19);
    txt_set(0x1701);
    if (gate(2) != 0)
        goto Laa5c;
    key_page(0x19);
Laa5c:
    row_arm2(cell_addr16(0x18));
    row_sel_cell2_cur();
    row_sel2(cell_addr16(0x19));
    row_arm2(cell_addr16(0x18));
    row_sel_cell2_cur();
    row_sel2(cell_addr16(0x19));
    page(0x18);
    tail(0x1A);
    row_arm2(cell_addr16(0x18));
    row_sel_cell2_cur();
    row_sel2(cell_addr16(0x19));
    row_page(0x18);
    sep_a();
    ticker_advance(cell_addr16(0x1A));
    cell_put(0x18);
    row_page(0x19);
    ticker_advance(cell_addr16(0x1B));
    cell_put(0x19);
    row_page(0x18);
    sep_a();
    ticker_advance(catalog_base(0x1702));
    cell_put(0x18);
    txt_set(0x1701);
    if (gate(2) == 0)
        latch(1);
    ticker_advance(cell_addr16(0x19));
    cell_put(0x19);
    page(0x18);
    draw_pad_cur();
Lab9c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0xFDB);
        cell_step();
        step2();
        poll_t(0xD);
        if (io_just() != 0)
            break;
    }
    cell_push_c8();
    sep_b();
    cell_tick_sub(catalog_base(0xFE7));
    txt_draw(0x711);
    txt_set(0xFDC);
    txt_draw(0x6F9);
    txt_set(0xFDD);
    cell_put(0x19);
    open_row(0x18);
    page(0x18);
    draw_pad_cur();
Lac3c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0xEDB);
        cell_step();
        step2();
        poll_t(0x100);
        if (io_just() != 0)
            break;
    }
    txt_set(0xFDD);
    cell_put(0x19);
    open_row(0x18);
    page(0x18);
    latch(0x7F);
    cell_cursor_dec();
    row_pad();
    draw_pad_cur();
Lacd0:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x4800);
        cell_step();
        step2();
        poll_t(0x400);
        if (io_just() != 0)
            break;
    }
    latch_cur();
    cell_cursor_dec();
    row_pad();
    fn_1x1d658();
    func_8010CB08();
    cell_0xfad48();
    return;
}
