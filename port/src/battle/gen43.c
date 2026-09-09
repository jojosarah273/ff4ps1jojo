/* FF4 source-port — interpreted module for func_8010E58C.
 * Ground truth: src/func_8010E58C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010E58C(void)
{
    func_800FB3F8();
    func_80103FE8();
    func_80194518();
    func_80194394();
    func_8017F8F8();
    latch(0x22);
    txt_draw(0x2123);
    latch_cur();
    txt_draw(0x420C);
    latch(0xF7);
    func_800F81E8();
    latch(0x80);
    func_800F81E8();
    latch(0xEB);
    func_800F81E8();
    latch(0xF7);
    func_800F81E8();
    latch(0x78);
    func_800F81E8();
    latch(0xEC);
    func_800F81E8();
    latch_cur();
    func_800F81E8();
    latch(0x41);
    txt_draw(0x4360);
    latch(0x26);
    txt_draw(0x4361);
    wnd_open(0x5A00);
    label(0x4362);
    latch(0x7F);
    txt_draw(0x4364);
    latch(0x16);
    txt_draw(0x4367);
    latch(3);
    txt_draw(0x1700);
    latch_cur();
    txt_draw(0x2100);
    latch(0x81);
    txt_draw(0x4200);
    open_row(0x24);
LE738:
    for (;;) {
        func_800FE7B0();
        latch(0x40);
        txt_draw(0x420C);
        row_page(0x24);
        txt_draw(0x2100);
        func_8010E878();
        key_page(0x24);
        row_page(0x24);
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
LE790:
    for (;;) {
        func_800FE7B0();
        latch(0x40);
        txt_draw(0x420C);
        func_8010E878();
        row_page(2);
        if (gate(0x202) != 0)
            goto LE7e0;
        row_page(3);
        if (gate(0x202) == 0)
            continue;
        break;
    }
LE7e0:
    latch(0xF);
    cell_put(0x24);
LE7f0:
    for (;;) {
        func_800FE7B0();
        latch(0x40);
        txt_draw(0x420C);
        row_page(0x24);
        txt_draw(0x2100);
        func_8010E878();
        poll_pair(0x24);
        row_page(0x24);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    latch(0x33);
    txt_draw(0x2123);
    latch_cur();
    txt_draw(0x420C);
    func_8011EA5C();
    return;
}
