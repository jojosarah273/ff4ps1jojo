/* FF4 source-port — interpreted module for shop_rows_x8fc_x1701_texts_gate_pi.
 * Ground truth: src/shop_rows_x8fc_x1701_texts_gate_pi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x8fc_x1701_texts_gate_pi(void)
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
    cell_cur_save58();
    return;
}
