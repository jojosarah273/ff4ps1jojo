/* FF4 source-port — interpreted module for func_8015BD34.
 * Ground truth: src/func_8015BD34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015BD34(void)
{
    row_page(0xD7);
    if (gate(2) != 0)
        goto Lbed4;
    row_page(0xD0);
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    func_8015C54C();
    row_page(0xD0);
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lbeac;
    page(0xA6);
    txt_cell(0x2000);
    row_read(0x1F);
    io_poll(5);
    if (io_just() == 0)
        goto Lbe34;
    txt_set(0x3582);
    if (gate(0x202) != 0)
        goto Lbe34;
    txt_set(0x38DB);
    poll_spin();
    if (poll_go(2) != 0)
        goto Lbe34;
    txt_cell(0x2006);
    if (gate(0x80) != 0)
        goto Lbe34;
    row_read(1);
    if (sel(0x202) != 0)
        goto Lbeac;
Lbe34:
    func_8015B3F4();
    row_page(0xD0);
    func_80152908();
    txt_cell(0x32DB);
    io_poll(0x4C);
    if (io_just() != 0)
        goto Lbea4;
    txt_cell(0x32DF);
    io_poll(0x4C);
    if (io_just() == 0)
        return;
Lbea4:
    func_8015C1B0();
Lbeac:
    latch(0xFF);
    cell_put(0xD0);
    latch(1);
    gpu_driver_run_b();
    return;
Lbed4:
    row_page(0xD0);
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lbf8c;
    func_8015C54C();
    row_page(0xD0);
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    txt_set(0x388B);
    if (gate(2) != 0)
        goto Lbf3c;
    func_8015C220();
Lbf3c:
    wnd_open(5);
    for (;;) {
        cell_push_c8_c2(0xD7);
        cell_draw(0x3937);
        cell_set50_from54();
        if (poll_go(0x8080) != 0)
            continue;
        break;
    }
    func_8015C604();
    latch(0xFF);
    cell_put(0xD0);
    return;
Lbf8c:
    txt_set(0x352D);
    if (gate(0x202) != 0)
        return;
    txt_set(0x3929);
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    cell_cursor_dec();
    sep();
    for (;;) {
        txt_cell(0x392A);
        cell_draw(0x3929);
        cell_step();
        poll_t(5);
        if (io_just() != 0)
            break;
    }
    cell_dec_bank(0x392F);
    row_close2();
    txt_draw(0x1822);
    cell_put(0xD0);
    func_8015D0B8();
    func_8015C54C();
    row_page(0xD0);
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    func_8015B078();
    func_8015B3F4();
    page(0xA6);
    txt_cell(0x2005);
    row_read(0xEF);
    cell_draw(0x2005);
    txt_set(0x357B);
    if (io_press(cell_state(0xD0)) != 0)
        return;
    txt_cell(0x2033);
    io_poll(0x4C);
    if (io_just() != 0)
        goto Lc148;
    txt_cell(0x2035);
    io_poll(0x4C);
    if (io_just() != 0)
        goto Lc148;
    txt_set(0x388B);
    if (gate(2) != 0)
        goto Lc130;
    open_row(0xD7);
    return;
Lc130:
    sep();
    gpu_driver_run_b();
    return;
Lc148:
    page(0xA6);
    txt_cell(0x2004);
    cell_draw(0x2004);
    row_page(0xD0);
    page_paint(0x3560);
    return;
}
