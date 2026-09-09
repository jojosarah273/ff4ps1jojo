/* FF4 source-port — interpreted module for func_8014CA24.
 * Ground truth: src/func_8014CA24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014CA24(void)
{
    sep();
    for (;;) {
        cell_draw(0xF28F);
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    txt_set(0xF2D0);
    io_poll(6);
    if (io_just() == 0)
        goto L4ae0;
    wnd_open(0xF28F);
    tail(8);
    latch(0x80);
    txt_draw(0xF27A);
    latch(0xC8);
    cell_put(0x2C);
    latch(0x54);
    cell_put(0x2D);
    return;
L4ae0:
    cell_push_c8_b4(2);
    row_read(0xF0);
    io_poll(0xD0);
    if (io_just() != 0)
        goto L4b38;
    io_poll(0xE0);
    if (io_just() != 0)
        goto L4b38;
    io_poll(0x30);
    if (io_just() == 0)
        goto L4b9c;
L4b38:
    latch(0x44);
    cell_put(0x2D);
    wnd_open(0xF28F);
    tail(8);
    latch(0x80);
    txt_draw(0xF27A);
    row_page(0);
    if (gate(0x202) != 0) {
        latch(0x60);
        cell_put(0x2C);
        return;
    }
    latch(0xD8);
    cell_put(0x2C);
    return;
L4b9c:
    io_poll(0x40);
    if (io_just() == 0)
        goto L4bdc;
    txt_set(0xF49A);
    io_poll(0x91);
    if (io_just() != 0)
        goto L4c3c;
    latch(0x60);
    goto L4bf4;
L4bdc:
    io_poll(0x50);
    if (io_just() == 0)
        goto L4c3c;
    latch(0x80);
L4bf4:
    latch_cur();
    cell_put(0x2C);
    latch(0x44);
    cell_put(0x2D);
    wnd_open(0xF28F);
    tail(8);
    latch(0x80);
    txt_draw(0xF27A);
    return;
L4c3c:
    draw_pad(1);
    cell_push_c8_b4o(2);
    row_read(0x60);
    if (sel(0x202) != 0)
        goto L4cf4;
    row_page_cur();
    if (gate(0x202) != 0)
        goto L4cb4;
    open_row(0x2D);
    latch(0x18);
    cell_put(0x2C);
    latch(1);
    txt_draw(0xF261);
    wnd_open(0xF053);
    goto L4ce7c;
L4cb4:
    sep();
    tail(0x2C);
    txt_draw(0xF261);
    wnd_open(0xF043);
    goto L4ce7c;
L4cf4:
    io_poll(0x40);
    if (io_just() == 0)
        goto L4d3c;
    row_page_cur();
    if (gate(0x202) == 0)
        goto L4d6c;
    wnd_open(0xF4);
    tail(0x2C);
    goto L4dcc;
L4d3c:
    io_poll(0x60);
    if (io_just() == 0)
        goto L4df4;
    row_page_cur();
    if (gate(0x202) != 0)
        goto L4db4;
    latch(0xE8);
L4d6c:
    latch_cur();
    cell_put(0x2D);
    latch(0x17);
    cell_put(0x2C);
    func_8014C9CC();
    latch(1);
    txt_draw(0xF261);
    wnd_open(0xF039);
    goto L4ce7c;
L4db4:
    open_row(0x2C);
    latch(0xF0);
    cell_put(0x2D);
L4dcc:
    func_8014C9CC();
    sep();
    txt_draw(0xF261);
    wnd_open(0xF029);
    goto L4ce7c;
L4df4:
    row_page_cur();
    if (gate(0x202) != 0)
        goto L4e4c;
    open_row(0x2C);
    latch(0xF8);
    cell_put(0x2D);
    func_8014BAA4();
    latch(1);
    txt_draw(0xF261);
    wnd_open(0xF06D);
    goto L4ce7c;
L4e4c:
    wnd_open_cur();
    tail(0x2C);
    func_8014BAA4();
    latch_cur();
    txt_draw(0xF261);
    wnd_open(0xF05D);
L4ce7c:
    tail(8);
    return;
}
