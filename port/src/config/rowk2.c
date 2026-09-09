/* FF4 source-port — interpreted module for func_80167BA0.
 * Ground truth: src/func_80167BA0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80167BA0(void)
{
    /* battle cast driver: 80167DD4 anim rows, 8014096C cast, 80167E44
       status block; loops L167BDC/L167C20/L167C70/L167CB0/L167D24. */
    latch(0x20);
    txt_draw_cur();
    sep();
L167bdc:
    for (;;) {
        func_80167DD4();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    sep();
    poll_spin();
L167c20:
    for (;;) {
        cell_draw_cur();
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    func_800F8F74();
    func_8014096C();
    latch(2);
    txt_draw_cur();
    wnd_open(4);
L167c70:
    for (;;) {
        func_80070174();
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_paint2_cur();
    func_80167E44();
    func_800F8F74();
    wnd_open(0x16);
L167cb0:
    for (;;) {
        txt_cell_cur();
        cell_draw_cur();
        func_800F5E48();
        poll_t(0xF);
        if (io_just() != 0)
            break;
    }
    txt_set_cur();
    func_800F61E8();
    row_read(7);
    txt_draw_cur();
    sep();
L167d24:
    for (;;) {
        txt_cell_cur();
        if (gate(0x202) != 0)
            goto L167D84;
        row_open();
        row_sel_cell_cur();
        func_80167DD4();
        row_close();
    L167D84:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800F5D24();
    if (poll_go(0x202) != 0)
        goto L167C68;
    func_800F8F74();
    return;
L167C68:
    wnd_open(4);
    for (;;) {
        func_80070174();
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_paint2_cur();
    return;
}
