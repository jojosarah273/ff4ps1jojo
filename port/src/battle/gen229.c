/* FF4 source-port — interpreted module for func_801121C4.
 * Ground truth: src/func_801121C4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801121C4(void)
{
    func_800FB3F8();
    latch(0x17);
    txt_draw(0x212C);
    func_800F8F74(0x2130);
    func_800F8F74(0x2131);
    func_80170884();
    func_800F8F74(0x420B);
    wnd_open(0xEC80);
    label(0x4302);
    latch(8);
    txt_draw(0x4304);
    func_8017091C();
    wnd_open_cur();
    for (;;) {
        func_800F6C68();
        cell_draw(0xCDB);
        cell_step();
        poll_t(0x100);
        if (io_just() != 0)
            break;
    }
    latch_cur();
    func_800FC07C();
    latch(0x80);
    txt_draw(0x2115);
    draw_pad(0x2000);
    wnd_open(0x800);
    for (;;) {
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    wnd_open(0x1A00);
    tail(0x47);
    wnd_open(0x300);
    tail(0x45);
    wnd_open(0xF880);
    tail(0x3D);
    latch(8);
    cell_put(0x3C);
    func_801766B0();
    wnd_open(0x31C0);
    tail(0x47);
    wnd_open(0x380);
    tail(0x45);
    wnd_open(0xFB80);
    tail(0x3D);
    func_801766B0();
    wnd_open(0x4000);
    tail(0x47);
    wnd_open(0x80);
    tail(0x45);
    wnd_open(0xFD00);
    tail(0x3D);
    latch(0x1A);
    cell_put(0x3C);
    func_801766B0();
    /* s2 branch (register) */
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    for (;;) {
        /* spin on v0 (register) */
    }
    func_8017F9A8();
    func_8017F9A8();
    func_8017F8F8();
    func_8017F8F8();
L24d0:
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
    wnd_open_cur();
    for (;;) {
        func_800F6C68();
        cell_draw(0xDDB);
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    func_800FE870();
    wnd_open_cur();
    for (;;) {
        func_800F6C68();
        cell_draw(0x300);
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
    tail(0x5A);
    tail(0x5C);
    tail(0x5E);
    tail(0x60);
    func_800F8F74(0xFE4);
    latch(0x81);
    txt_draw(0x4200);
    latch(7);
    func_800FD85C();
    latch(1);
    cell_put(0xCB);
    latch(0xD0);
    cell_put(0xB2);
    func_80108330();
    func_80107C98();
    func_80107F3C();
    open_row(0xCB);
    func_800FD6E8();
    latch(7);
    func_800FD914();
    func_8011EA5C();
    return;
}
