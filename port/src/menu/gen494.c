/* FF4 source-port — interpreted module for func_800FC5D8.
 * Ground truth: src/func_800FC5D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FC5D8(void)
{
    /* battle confirm-dialog: 0x1700 test branches to the 0x2105 help
       (800FFADC/8017F9A8) vs 0x2120 detail (800FFB1C/8010CA74) rows;
       fee-check 0xFE4/7728(0x101), then the 0x2100/0x4200 tail with
       80175E88/80175E08 right/left rows; loops on 80194394. */
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto LFC654;
    latch(7);
    txt_draw(0x2105);
    func_800FFADC();
    func_8017F9A8();
    goto LFC86C;
LFC654:
    latch(9);
    txt_draw(0x2105);
    func_800FFB1C();
    func_8010CA74();
    func_8017F9A8();
    func_8017F9A8();
    func_8017F8F8();
    func_8017F8F8();
LFC704:
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
    txt_set(0xFE4);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto LFC86C;
    latch(3);
    txt_draw(0x2130);
    latch(0x43);
    txt_draw(0x2131);
    func_8017F9A8();
    func_8017F9A8();
    func_8017F8F8();
LFC814:
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
LFC86C:
    func_80176060();
    func_80175E88();
    txt_cell(0x1000);
    if (gate(0x202) != 0)
        goto LFC89C;
    func_80175E08();
LFC89C:
    func_800FE870();
    latch(0x81);
    txt_draw(0x4200);
    latch_cur();
    func_800FD85C();
    func_800F5448();
    return;
}
