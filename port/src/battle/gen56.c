/* FF4 source-port — interpreted module for func_8014E424.
 * Ground truth: src/func_8014E424.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014E424(void)
{
    io_poll(3);
    if (io_just() != 0)
        return;
    io_poll(4);
    if (io_just() != 0)
        return;
    io_poll(2);
    if (io_just() == 0)
        goto L4E484;
    func_80073C98();
    return;
L4E484:
    txt_set_cur();
    io_poll(2);
    if (io_just() == 0)
        goto L4E544;
    wnd_open_cur();
    latch(0x20);
    cell_put_cur();
L4e4bc:
    for (;;) {
        latch(0x20);
        func_8014E984();
        sep_a();
        row_open_w(0xD0);
        cell_draw_cur();
        row_page_cur();
        cell_draw_cur();
        sep_a();
        row_open_w(0xC);
        cell_put(0x10);
        poll_t_cur();
        if (io_just() != 0)
            break;
    }
    return;
L4E544:
    io_poll(3);
    if (io_just() == 0)
        goto L4E614;
    sep();
    latch(0x20);
    cell_put_cur();
L4e58c:
    for (;;) {
        latch(0x90);
        func_8014E984();
        sep_a();
        row_open_w(0x18);
        cell_draw_cur();
        row_page_cur();
        cell_draw_cur();
        sep_a();
        row_open_w(0xC);
        cell_put(0x10);
        poll_t_cur();
        if (io_just() != 0)
            break;
    }
    return;
L4E614:
    sep();
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L4E6D4;
L4e64c:
    for (;;) {
        latch(8);
        func_8014E984();
        sep_b();
        func_800F8058(4);
        cell_draw_cur();
        latch(0xC);
        func_8014E984();
        sep_b();
        func_800F8058(6);
        cell_draw_cur();
        poll_t(0xA);
        if (io_just() != 0)
            break;
    }
    return;
L4E6D4:
    for (;;) {
        txt_cell_cur();
        cell_put_cur();
        row_sel_cell_cur();
        func_8014E984();
        sep_b();
        func_800F7F48(cell_state_of());
        cell_draw_cur();
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    return;
}
