/* FF4 source-port — interpreted module for func_8016543C.
 * Ground truth: src/func_8016543C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016543C(void)
{
    /* options sub-screen: 0x289C/0x289D/0x291C stat rows, 0xB5/0x9A/0xB9/
       0xB3/0xB7 windows; 80152640 intro, 8015240C detail; three loops. */
    cell_cursor_dec();
    cell_put(0xE5);
    draw_pad_cur();
    latch(0xF);
    func_80152640();
    sep();
L1654a4:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        io_poll(0xFF);
        if (io_just() != 0)
            break;
    }
    sep();
L165504:
    for (;;) {
        txt_cell(0x289C);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L16557C;
        if (io_press(cell_state(0xB5)) == 0)
            goto L165564;
        cell_fmt2(0x9A);
        txt_cell(0x289D);
        cell_pull_c8(0x291C);
        key_page(0x9A);
    L165564:
        cell_step();
        cell_step();
    }
L16557C:
    row_close2();
    cell_put(0xDF);
    latch(0x18);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    sep();
    row_info(0xB7);
L1655d4:
    for (;;) {
        txt_cell(0x1560);
        if (gate(0x202) != 0)
            goto L1656DC;
        cell_push_c8_d58(0x291C);
        cell_put(0xB9);
        io_poll(0xFF);
        if (io_just() != 0)
            return;
        io_poll(0x19);
        if (io_go() != 0)
            goto L16564C;
        row_page(0xB3);
        if (gate(0x202) != 0)
            goto L1656DC;
        goto L1656C4;
    L16564C:
        io_poll(0x31);
        if (io_go() != 0)
            goto L16568C;
    L165664:
        for (;;) {
            row_page(0xB3);
            poll_spin();
            if (poll_go(0x202) != 0)
                goto L1656DC;
            goto L1656C4;
        }
    L16568C:
        io_poll(0x42);
        if (io_go() != 0)
            goto L165664;
        row_page(0xB3);
        io_poll(2);
        if (io_just() == 0)
            goto L1656DC;
    L1656C4:
        row_page(0xB9);
        cell_draw(0x1560);
        step2();
    L1656DC:
        cell_step();
        key_page(0xB7);
        row_page(0xB7);
        io_poll(0x18);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
