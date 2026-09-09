/* FF4 source-port — interpreted module for func_801706C0.
 * Ground truth: src/func_801706C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801706C0(void)
{
    /* shop buy-flow: 0xFD8 gate, 80170884 detail; alt renders the 0x47/
       0x45/0x1800 rows (3C/3D/3E/0x20/0x21 windows) and commits through
       800F9868; exit at L170874. */
    txt_set(0xFD8);
    if (gate(2) != 0)
        goto L17079C;
    io_poll(0xF);
    if (io_just() != 0)
        goto L17079C;
    func_80170884();
    cell_clear_bank(0x420B);
    txt_set(0xFD8);
    row_sel_cell_cur();
    cell_push_c8();
    txt_draw(0x4302);
    cell_push_c8();
    txt_draw(0x4303);
    txt_set(0xFD8);
    cell_push_c8();
    txt_draw(0x4304);
    func_8017091C();
    return;
L17079C:
    wnd_open_cur();
    tail(0x47);
    wnd_open(0x2400);
    tail(0x45);
    latch(0x15);
    cell_put(0x3C);
    func_800F65C8();
    cell_put(0x3D);
    func_800F65C8();
    cell_put(0x3E);
    latch(0x80);
    txt_draw(0x2115);
    cell_clear_bank(0x420B);
    latch(1);
    txt_draw(0x4300);
    latch(0x18);
    txt_draw(0x4301);
    row_page(0x3C);
    txt_draw(0x4304);
    page(0x47);
    label(0x2116);
    page(0x3D);
    label(0x4302);
    page(0x45);
    label(0x4305);
    func_800F9868();
    return;
}
