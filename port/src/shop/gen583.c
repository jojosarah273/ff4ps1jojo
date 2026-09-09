/* FF4 source-port — interpreted module for func_80162D20.
 * Ground truth: src/func_80162D20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80162D20(void)
{
    /* options timeline: 0xCD window, 0x2009/0x2007/0x2003 gates,
       80152BC4/80162DF8 rows; 53C0/6434(0x80) gates. */
    row_page(0xCD);
    if (gate(0x80) != 0)
        goto L162DD0;
    row_prep(0x20);
    page(0xA6);
    func_800F6BE0(0x2009);
    func_80152BC4();
    func_800F8274(0xA9);
    sep_b();
    func_800F6BE0(0x2007);
    func_800F7FCC(cell_state(0xA9));
    func_800F87DC(0x2007);
    if (io_go() != 0)
        goto L162DC0;
    row_sync2_cur();
    func_800F87DC(0x2007);
    row_sync2(0x80);
    func_800F87DC(0x2003);
L162DC0:
    sep();
    row_prep_close();
L162DD0:
    latch(1);
    cell_put(0xC1);
    func_80162DF8();
    return;
}
