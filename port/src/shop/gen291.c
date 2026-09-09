/* FF4 source-port — interpreted module for func_801613D0.
 * Ground truth: src/func_801613D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801613D0(void)
{
    /* options screen: 0xC1 window + 0x33C4 title, 0x321B/0x321A stat
       rows, 8015329C alt + 80150C38 + 80062B08 commits; loop L161428
       polls 5574(0xCE)/5958(0xC0). */
    latch(0xC1);
    txt_draw(0x33C4);
    sep();
L161428:
    for (;;) {
        txt_cell(0x321B);
        io_poll(0xCE);
        if (io_just() != 0)
            goto L1614A8;
        step2();
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0xC0);
        if (io_just() == 0)
            continue;
        break;
    }
L161488:
    func_8015329C();
    latch(0xF);
    txt_draw(0x34CA);
    return;
L1614A8:
    txt_cell(0x321A);
    row_read(0x7F);
    cell_draw(0x321A);
    txt_cell(0x321C);
    io_poll(1);
    if (io_go() == 0)
        goto L161488;
    sep_b();
    txt_cell(0x321C);
    cell_pos_back(1);
    cell_draw(0x321C);
    if (io_just() == 0)
        goto L161530;
    page_paint(0x321C);
    page_paint(0x321B);
    latch(0x80);
    cell_draw(0x321A);
L161530:
    cell_put(1);
    latch(6);
    gpu_driver_run_b();
    latch(0xF8);
    txt_draw(0x26D4);
    latch(0xCE);
    txt_draw(0x26D2);
    page_paint2(0x352A);
    func_80062B08();
    latch(0xCE);
    txt_draw(0x33C5);
    latch(0xA);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    return;
}
