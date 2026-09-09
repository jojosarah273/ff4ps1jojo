/* FF4 source-port — interpreted module for func_800FAA04.
 * Ground truth: src/func_800FAA04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FAA04(void)
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
    row_arm2(cell_state(0x18));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x19));
    row_arm2(cell_state(0x18));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x19));
    page(0x18);
    tail(0x1A);
    row_arm2(cell_state(0x18));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x19));
    row_page(0x18);
    sep_a();
    cell_poke0(cell_state(0x1A));
    cell_put(0x18);
    row_page(0x19);
    cell_poke0(cell_state(0x1B));
    cell_put(0x19);
    row_page(0x18);
    sep_a();
    cell_poke0(cell_state(0x1702));
    cell_put(0x18);
    txt_set(0x1701);
    if (gate(2) == 0)
        latch(1);
    cell_poke0(cell_state(0x19));
    cell_put(0x19);
    page(0x18);
    draw_pad_cur();
Lab9c:
    for (;;) {
        func_800F6C68();
        func_800F8960(0xFDB);
        cell_step();
        step2();
        poll_t(0xD);
        if (io_just() != 0)
            break;
    }
    func_800F6C68();
    sep_b();
    func_800F7F48(cell_state(0xFE7));
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
        func_800F6C68();
        func_800F8960(0xEDB);
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
    func_800F9200();
    row_pad();
    draw_pad_cur();
Lacd0:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x4800);
        cell_step();
        step2();
        poll_t(0x400);
        if (io_just() != 0)
            break;
    }
    latch_cur();
    func_800F9200();
    row_pad();
    func_8011D658();
    func_8010CB08();
    func_800FAD48();
    return;
}
