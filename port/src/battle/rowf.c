/* FF4 source-port — interpreted module for func_8010A964.
 * Ground truth: src/func_8010A964.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010A964(void)
{
    txt_set(0x1705);
    cell_put(8);
    row_sel_cell(0x202);
    if (func_800F73E0() != 0)
        goto La9e4;
    cell_push_c8_d58(0x6A4);
    row_read(0x20);
    if (sel(2) != 0)
        goto La9e4;
    latch(4);
    cell_put(8);
    goto Laa1c;
La9e4:
    cell_push_c8_d58(0x6A3);
    row_read(3);
    if (sel(2) != 0)
        goto Laa1c;
    cell_tick_and(0xD2);
    if (sel(0x202) == 0)
        return;
Laa1c:
    row_page(8);
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    func_8010D458();
    io_poll_cur();
    if (io_just() != 0)
        goto Laafc;
    io_poll(0xFF);
    if (io_just() != 0)
        goto Laafc;
    func_8010AF2C();
    goto Lae68;
Laafc:
    row_page(8);
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    func_8010D458();
    io_poll_cur();
    if (io_just() != 0)
        goto Lac20;
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lac20;
    func_8010AF2C();
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lac20;
    io_poll_cur();
    if (io_just() != 0)
        goto Lae68;
Lac20:
    row_page(8);
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    func_8010D458();
    io_poll_cur();
    if (io_just() != 0)
        goto Lad44;
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lad44;
    func_8010AF2C();
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lad44;
    io_poll_cur();
    if (io_just() != 0)
        goto Lae68;
Lad44:
    row_page(8);
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    func_8010D458();
    io_poll_cur();
    if (io_just() != 0)
        return;
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    func_8010AF2C();
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    io_poll_cur();
    if (io_just() == 0)
        return;
Lae68:
    txt_cell(0x909);
    cell_cursor_dec();
    txt_cell(0x901);
    row_read(0x10);
    if (sel(2) != 0)
        goto Laec0;
    txt_set(0x1705);
    sep_a();
    row_open_w(2);
    row_read(3);
    cell_draw(0x909);
Laec0:
    row_open();
    func_8010B010();
    row_close();
    txt_cell(0x907);
    row_open();
    if (func_8011B158() != 0)
        return;
    row_close();
    row_close2();
    cell_draw(0x909);
    open_row(0xEE);
    return;
}
