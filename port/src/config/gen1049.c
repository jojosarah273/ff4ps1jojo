/* FF4 source-port — interpreted module for func_8015A89C.
 * Ground truth: src/func_8015A89C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A89C(void)
{
    /* options: 0x3558/0x2016 texts, 0x202F cell, 8015ABEC/8015A56C
       rows; gate 6434(2). */
    txt_set(0x3558);
    if (gate(2) != 0)
        goto L15A8C4;
    txt_cell(0x202F);
L15A8C4:
    txt_cell(0x2016);
    sep_a();
    row_open_w(0x14);
    tail(0xA9);
    func_8015ABEC();
    func_8015A56C();
    return;
}
