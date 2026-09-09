/* FF4 source-port — interpreted module for func_80155778.
 * Ground truth: src/func_80155778.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80155778(void)
{
    draw_pad(0x2030);
    row_info(0x86);
    draw_pad(0x2780);
    row_info(0x84);
    open_row(0xA9);
L7a8:
    sep();
    tail(0xAB);
L7ec:
    for (;;) {
        func_800F66D8(0x86);
        if (gate(0x202) == 0)
            latch(0x60);
        func_800F8674(0xAD);
        step2();
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    for (;;) {
        func_800F66D8(0x86);
        func_800F8674(0xAD);
        step2();
        cell_step();
        poll_t(7);
        if (io_just() != 0)
            break;
    }
    row_page(0xA9);
    func_80152908();
    row_page(0xB0);
    cell_draw(0x32DB);
    row_page(0xB1);
    cell_draw(0x32DC);
    row_page(0xB2);
    cell_draw(0x32DF);
    row_page(0xB3);
    cell_draw(0x32E0);
    row_page(0xB2);
    cell_put(0xB1);
    open_row(0xB7);
    open_row(0xB8);
    row_page(0xB0);
    if (gate(2) != 0)
        goto L984;
    io_poll(0x4D);
    if (io_go() == 0)
        goto L984;
    io_poll(0x54);
    if (io_go() != 0)
        goto L95c;
    latch(0x80);
    cell_put(0xB7);
    goto L984;
L95c:
    io_poll(0x61);
    if (io_go() != 0)
        goto L984;
    latch(0x40);
    cell_put(0xB7);
L984:
    row_page(0xB1);
    if (gate(2) != 0)
        goto La0c;
    io_poll(0x4D);
    if (io_go() == 0)
        goto La0c;
    io_poll(0x54);
    if (io_go() != 0)
        goto L9e4;
    latch(0x80);
    cell_put(0xB8);
    goto La0c;
L9e4:
    io_poll(0x61);
    if (io_go() != 0)
        goto La0c;
    latch(0x40);
    cell_put(0xB8);
La0c:
    row_page(0xB7);
    func_800F78C4(cell_state(0xB8));
    if (func_800F7918(2) != 0)
        goto La6c;
    if (func_800F5F20(2) != 0)
        goto La6c;
    open_row(0xB0);
    open_row(0xB1);
La6c:
    page(0xAB);
    func_800F6A78(0xAD);
    tail(0xE5);
    wnd_open(0x9100);
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(8);
    func_801526F8();
    sep();
    for (;;) {
        txt_cell(0x289C);
        func_800F82EC(0x84);
        step2();
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    txt_set(0x28A0);
    row_read(0x7F);
    cell_put(0xDF);
    latch(3);
    cell_put(0xE1);
    func_8015240C();
    page(0xE3);
La6c_loop:
    for (;;) {
        func_800F6C68();
        func_800F82EC(0x84);
        step2();
        cell_step();
        poll_t(0xB);
        if (io_just() != 0)
            break;
    }
    sep_a();
    row_page(0x84);
    row_open_w(0xB);
    cell_put(0x84);
    row_page(0x85);
    row_open_w0();
    cell_put(0x85);
    key_page(0xAB);
    row_page(0xAB);
    io_poll(5);
    if (io_just() == 0)
        goto La6c;
    sep_a();
    row_page(0x86);
    row_open_w(0x80);
    cell_put(0x86);
    row_page(0x87);
    row_open_w0();
    cell_put(0x87);
    key_page(0xA9);
    row_page(0xA9);
    io_poll(5);
    if (io_just() == 0)
        goto L7a8;
    return;
}
