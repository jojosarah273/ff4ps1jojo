/* FF4 source-port — interpreted module for func_80103A28.
 * Ground truth: src/func_80103A28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80103A28(void)
{
    func_80103B38();
    latch(0x80);
    txt_draw(0x2100);
    func_800F8F74(0x4200);
    func_800F8F74(0x420C);
    latch(0x32);
    cell_put(0x76);
    wnd_open(0);
    tail(0x47);
    wnd_open(0x8000);
    tail(0x45);
    func_80176748();
    latch(2);
    txt_draw(0x1700);
    func_801709E4();
    func_80103FE8();
    func_8010415C();
}
