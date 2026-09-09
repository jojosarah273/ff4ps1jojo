/* FF4 source-port — interpreted module for func_80116DA0.
 * Ground truth: src/func_80116DA0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80116DA0(void)
{
    cell_put(0xAE);
    latch_cur();
Ldec:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            break;
        poll_pair(0xA47);
        sep_a();
        row_open_w(0xF);
    }
    label_cur();
    latch(0x40);
    cell_draw(0x908);
    row_page(0xAE);
    row_read(0xF);
    io_poll(4);
    if (io_go() != 0)
        goto Lee0;
    func_800F61E8();
    cell_draw(0x902);
    row_page(0xCF);
    if (gate(0x202) != 0)
        goto Leb8;
    txt_cell(0x902);
    poll_spin();
    cell_draw(0x909);
Leb8:
    row_page(0xEA);
    if (gate(0x202) != 0)
        goto L29c;
    key_page(0xEA);
    goto L29c;
Lee0:
    io_poll(8);
    if (io_go() != 0)
        goto Lf10;
    sep_b();
    func_800F8058(4);
    goto L28c;
Lf10:
    io_poll(8);
    if (io_just() == 0)
        goto L0ec;
    page_paint(0x902);
    txt_cell(0x906);
    cell_put(0x3E);
    open_row(0x3D);
    func_800F76BC(cell_state(0x3E));
    func_800F76E8();
    func_800F7CC8(cell_state(0x3D));
    func_800F76BC(cell_state(0x3E));
    func_800F76E8();
    func_800F7CC8(cell_state(0x3D));
    func_800F76BC(cell_state(0x3E));
    func_800F76E8();
    func_800F7CC8(cell_state(0x3D));
    row_page(0x3D);
    sep_a();
    cell_poke0(cell_state_of());
    cell_put(0x3D);
    row_page(0xAE);
    sep_a();
    row_open_w(0x80);
    cell_put(6);
    txt_cell(0x90B);
    if (gate(2) != 0)
        goto L0a8;
    page_paint(0x90B);
    row_open();
    page(0x3D);
    func_800F6C68();
    if (io_press(cell_state(6)) == 0)
        goto L0dc;
    latch_cur();
    func_800F885C();
    goto L0dc;
L0a8:
    latch(1);
    cell_draw(0x90B);
    row_open();
    page(0x3D);
    row_page(6);
    func_800F885C();
L0dc:
    row_close();
    goto L2c4;
L0ec:
    io_poll(9);
    if (io_just() == 0)
        goto L1b4;
    txt_cell(0x909);
    row_read(1);
    if (sel(2) != 0)
        goto L18c;
    txt_cell(0x909);
    row_read(2);
    if (sel(0x202) != 0)
        goto L16c;
    latch(2);
    cell_draw(0x902);
    poll_spin();
    cell_draw(0x909);
    goto L18c;
L16c:
    latch(4);
    cell_draw(0x902);
    poll_spin();
    cell_draw(0x909);
L18c:
    latch(1);
    cell_draw(0x90C);
    latch(0x80);
    cell_draw(0x908);
    goto L29c;
L1b4:
    io_poll(0xA);
    if (io_just() == 0)
        goto L1ec;
    page_paint(0x8FF);
    latch(2);
    cell_draw(0x90C);
    goto L220;
L1ec:
    io_poll(0xB);
    if (io_just() == 0)
        goto L238;
    page_paint(0x8FF);
    latch(3);
    cell_draw(0x90C);
L220:
    latch_cur();
    cell_draw(0x908);
    goto L2c4;
L238:
    io_poll(0xC);
    if (io_just() != 0)
        goto L284;
    io_poll(0xD);
    if (io_just() != 0)
        goto L284;
    io_poll(0xE);
    if (io_just() == 0)
        goto L284;
L284:
    latch_cur();
L28c:
    cell_draw(0x909);
    goto L2c4;
L29c:
    txt_cell(0x904);
    cell_put(0xC);
    txt_cell(0x906);
    cell_put(0xE);
    func_8010D2A0();
L2c4:
    page_paint(0x8FF);
    return;
}
