/* FF4 source-port — interpreted module for func_80100A98.
 * Ground truth: src/func_80100A98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80100A98(void)
{
    /* shop rows: 0x8FC/0x1701 texts; gate 6434(2) picks the 0x8FC
       reads. */
    txt_set(0x8FC);
    cell_cur_save54();
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L100B00;
    sep_a();
    row_open_w(0x20);
    cell_cur_save54();
L100B00:
    txt_set(0x8FC);
    row_read(7);
    cell_set50_from40();
    func_800F96E0();
    return;
}
