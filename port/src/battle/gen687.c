/* FF4 source-port — interpreted module for func_80103790.
 * Ground truth: src/func_80103790.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80103790(void)
{
    /* shop rows (alt of 801038D4): 0x1706/0x1708/0x5A windows,
       80103A28/80103F40/8017F8F8/80103B98/80103DD8/800FB224/
       8017559C rows. */
    page_open(0x1706);
    label(0x1708);
    func_80103A28();
    wnd_open_cur();
    tail(0x5A);
    func_80103F40();
    func_8017F8F8();
    func_8017F8F8();
    func_80103B98();
    wnd_open(0x198);
    tail(0x5A);
    func_80103F40();
    func_80103DD8();
    latch(2);
    txt_draw(0x1700);
    txt_draw(0x1727);
    latch(1);
    txt_draw(0x1701);
    page_open(0x170C);
    label(0x1706);
    func_800FB224();
    latch(0x10);
    func_8017559C();
    latch(0x81);
    txt_draw(0x4200);
    return;
}
