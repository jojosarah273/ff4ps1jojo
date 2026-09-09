/* FF4 source-port — interpreted module for func_801035B0.
 * Ground truth: src/func_801035B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801035B0(void)
{
    latch(6);
    txt_draw(0x1704);
    latch(3);
    cell_put(0xAC);
    row_page(0xE1);
    if (gate(2) == 0) {
        latch(0x30);
        cell_put(0xAD);
        latch(0x20);
        cell_put(0xB9);
        func_800F7864();
        func_8017559C();
        latch(0xF);
        txt_draw(0x6FD);
    } else {
        func_800FD718();
        open_row(0x79);
        func_80103660();
    }
}
