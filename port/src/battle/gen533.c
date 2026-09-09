/* FF4 source-port — interpreted module for func_801038D4.
 * Ground truth: src/func_801038D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801038D4(void)
{
    /* shop buy rows: 0x1706/0x170C texts, 0x5A window, 80103A28/
       8017F8F8/80103F94/80103B98/80103DD8/80103AC8/800FB09C/
       8017559C rows; 0x2100/0x4200/0x1700/0xAD windows end. */
    page_open(0x1706);
    label(0x170C);
    func_80103A28();
    wnd_open(0x198);
    tail(0x5A);
    func_8017F8F8();
    func_8017F8F8();
    func_80103F94();
    func_80103B98();
    wnd_open_cur();
    tail(0x5A);
    func_80103F94();
    func_80103DD8();
    latch(0x80);
    txt_draw(0x2100);
    func_800F8F74(0x4200);
    latch_cur();
    txt_draw(0x1700);
    txt_draw(0x1701);
    txt_draw(0x1727);
    page_open(0x1708);
    label(0x1706);
    func_800FB09C();
    latch(0x10);
    func_8017559C();
    latch(0x81);
    txt_draw(0x4200);
    latch(0x30);
    cell_put(0xAD);
    func_80103AC8();
    wnd_open_cur();
    label(0x172C);
    return;
}
