/* FF4 source-port — interpreted module for func_8016D798.
 * Ground truth: src/func_8016D798.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016D798(void)
{
    /* config rows: 0x3C/0x39/0x60/0x57 windows; gate 5574(0x42)
       routes the 82EC cell fills. */
    io_poll(0x42);
    if (io_go() != 0)
        goto L16D7E0;
    func_800F82EC(0x3C);
    latch(0xFF);
    func_800F82EC(0x39);
    step2();
    return;
L16D7E0:
    sep_b();
    func_800F8058(0xF);
    row_sel_cell_cur();
    func_800F6C68();
    func_800F82EC(0x39);
    func_800F6C68();
    func_800F82EC(0x3C);
    step2();
    return;
}
