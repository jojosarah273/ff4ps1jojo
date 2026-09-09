/* FF4 source-port — interpreted module for func_8016343C.
 * Ground truth: src/func_8016343C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016343C(void)
{
    sep();
    latch(0xA0);
    func_80152224();
    io_poll(8);
    if (io_go() != 0)
        goto L6349C;
    latch(0x2A);
    goto L635CC;
L6349C:
    io_poll(0x10);
    if (io_go() != 0)
        goto L634C4;
    latch(0x26);
    goto L635CC;
L634C4:
    io_poll(0x18);
    if (io_go() != 0)
        goto L634EC;
    latch(0x27);
    goto L635CC;
L634EC:
    io_poll(0x20);
    if (io_go() != 0)
        goto L63514;
    latch(0x2B);
    goto L635CC;
L63514:
    io_poll(0x38);
    if (io_go() != 0)
        goto L6353C;
    latch(0x1D);
    goto L635CC;
L6353C:
    io_poll(0x50);
    if (io_go() != 0)
        goto L63564;
    latch(0x20);
    goto L635CC;
L63564:
    io_poll(0x68);
    if (io_go() != 0)
        goto L6358C;
    latch(0x23);
    goto L635CC;
L6358C:
    io_poll(0x80);
    if (io_go() == 0)
        goto L635C4;
    latch(9);
    txt_draw(0x34CA);
    func_801532D4();
    return;
L635C4:
    latch(0x19);
L635CC:
    cell_cursor_dec();
    tail(0xE5);
    wnd_open_cur();
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(6);
    func_801526F8();
    txt_set(0x28A0);
    row_read(0x7F);
    cell_put(0xDF);
    latch(3);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    sep();
L63684:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x28A2);
        step2();
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    txt_set(0x268B);
    cell_put(0xA9);
    txt_set(0x268C);
    if (gate(2) != 0)
        goto L636F4;
    latch(0xFF);
    cell_put(0xA9);
L636F4:
    txt_set(0x28A1);
    row_read(0x7F);
    io_press(cell_state(0xA9));
    if (io_just() != 0)
        goto L63744;
    if (io_go() == 0)
        goto L63744;
    row_close2();
    return;
L63744:
    row_close2();
    txt_draw(0x26D2);
    page_paint2(0x355D);
    func_80062578();
    return;
}
