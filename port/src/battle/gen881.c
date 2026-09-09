/* FF4 source-port — interpreted module for func_8014D98C.
 * Ground truth: src/func_8014D98C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014D98C(void)
{
    /* battle rows: gates 6434(2)/4280/4120(0x202) route the 800760D0
       0xF row; closes with 6240. */
    txt_set_cur();
    if (gate(2) != 0)
        return;
    txt_set_cur();
    func_800F4280();
    if (sel(0x202) != 0)
        goto L14DA14;
    page_paint2_cur();
    txt_set_cur();
    row_read(1);
    txt_cell_cur();
    wnd_open(0xF);
    func_800760D0();
L14DA14:
    page_paint2_cur();
    return;
}
