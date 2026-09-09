/* FF4 source-port — interpreted module for func_800FBE44.
 * Ground truth: src/func_800FBE44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FBE44(void)
{
    /* shop rows: 0x47/0x45/0x60/0x61 windows, 0x2800 texts, 801766B0
       rows + 8017F8F8 preps; ends 80194700/80194394. */
    wnd_open_cur();
    tail(0x47);
    wnd_open(0x2800);
    tail(0x45);
    latch(8);
    cell_put(0x60);
    wnd_open_cur();
    tail(0x61);
    func_801766B0();
    wnd_open(0x4000);
    tail(0x47);
    func_801766B0();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_80194700();
    func_80194394();
    return;
}
