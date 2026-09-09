/* FF4 source-port — interpreted module for func_8011777C.
 * Ground truth: src/func_8011777C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011777C(void)
{
    func_80117594();
    txt_draw(0x1800);
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L7b8;
    latch(1);
L7b8:
    txt_draw(0x1801);
    open_row(0xE4);
    draw_pad_cur();
L7d4:
    for (;;) {
        txt_set(0x1800);
        io_poll_cur();
        if (io_just() == 0)
            goto L84c;
        txt_set(0x1801);
        io_poll_cur();
        if (io_just() != 0)
            goto L8f4;
    L84c:
        poll_t(0x1A);
        if (io_just() == 0)
            continue;
        break;
    }
L87c:
    if (func_800FC1CC() != 0)
        return;
    row_page(0xE4);
    if (gate(2) == 0)
        func_80117CB8();
    func_80176060();
    func_800FAD48();
    func_800FED3C();
    func_80170C14();
    func_8010B010();
    latch(0x81);
    txt_draw(0x4200);
    func_8011EA5C();
    return;
L8f4:
    io_poll_cur();
    if (io_just() != 0) {
        poll_spin();
        poll_spin();
    }
    cell_tick_half();
    cell_put(6);
    cell_put(0xE4);
    wnd_open_cur();
    draw_pad_cur();
L970:
    for (;;) {
        txt_cell(0x1000);
        cell_pull_c8(0xAD6);
        func_80117DF8();
        step2();
        poll_t(5);
        if (io_just() != 0)
            break;
    }
    row_page(6);
    io_poll(0xB);
    if (io_just() != 0)
        goto Lb74;
    wnd_open_cur();
L9e8:
    for (;;) {
        io_poll(3);
        if (io_just() != 0)
            goto Lb1c;
        txt_cell(0x1000);
        row_read(0x1F);
        io_poll_cur();
        if (io_just() != 0)
            goto Lacc;
        poll_t(0xB);
        if (io_just() == 0)
            goto Lab4;
        io_poll_cur();
        if (io_just() != 0)
            goto Lacc;
    Lab4:
        latch_cur();
        cell_draw(0x1000);
        goto Lb4c;
    Lacc:
        func_80117E64();
        txt_cell(0x1009);
        cell_draw(0x1007);
        txt_cell(0x100A);
        cell_draw(0x1008);
        txt_cell(0x100D);
        cell_draw(0x100B);
        txt_cell(0x100E);
        cell_draw(0x100C);
        goto Lb4c;
    Lb1c:
        txt_cell(0x1000);
        row_read(0x1F);
        io_poll(3);
        if (io_just() != 0)
            page_paint(0x1000);
    Lb4c:
        func_80117DF8();
        poll_t(0x140);
        if (io_just() == 0)
            goto L9e8;
        goto L87c;
    }
Lb74:
    wnd_open_cur();
    for (;;) {
        txt_cell(0x10C0);
        cell_draw(0x1200);
        cell_step();
        poll_t(0x80);
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
    for (;;) {
        page_paint(0x1000);
        func_80117DF8();
        poll_t(0x140);
        if (io_just() != 0)
            break;
    }
    wnd_open(0xC0);
    tail(0x3D);
    latch(0xD);
    func_80118244();
    wnd_open(0x100);
    tail(0x3D);
    latch(1);
    func_8011818C();
    wnd_open(0x100);
    func_80117E64();
    txt_cell(0x1009);
    cell_draw(0x1007);
    txt_cell(0x100A);
    cell_draw(0x1008);
    txt_cell(0x100D);
    cell_draw(0x100B);
    txt_cell(0x100E);
    cell_draw(0x100C);
    wnd_open(0x30);
    for (;;) {
        page_paint(0x10C0);
        cell_step();
        poll_t(0x37);
        if (io_just() != 0)
            break;
    }
    goto L87c;
}
