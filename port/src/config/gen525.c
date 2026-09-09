/* FF4 source-port — interpreted module for func_80131CD8.
 * Ground truth: src/func_80131CD8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80131CD8(void)
{
    /* ability tab: 0x1BC6/0x1B8B/0x16 texts, 0x43 window, 801321B4
       row; 6BE0(9)/87DC(7) latch and 6240(0x1BC9) tail. */
    func_800F9200();
    func_801224D0();
    txt_cell(0x1B8B);
    if (gate(2) != 0)
        return;
    func_801321B4();
    txt_cell(3);
    if (gate_cur() != 0)
        return;
    row_read(0x7F);
    cell_draw(3);
    txt_cell(0x16);
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x43));
    func_800F5520(cell_state_of());
    if (io_go() == 0)
        goto L131DC8;
    func_800F6BE0(9);
L131DC8:
    func_800F87DC(7);
    row_prep_close();
    page_paint2(0x1BC9);
    row_close2();
    return;
}
