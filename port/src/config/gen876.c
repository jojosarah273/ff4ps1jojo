/* FF4 source-port — interpreted module for func_8015A6CC.
 * Ground truth: src/func_8015A6CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A6CC(void)
{
    /* options rows: 0x1F/0xA9/0xAA windows, 0x388B text,
       8015ABEC/8015A56C rows; 6434(2) gate. */
    row_read(0x1F);
    tail(0xA9);
    row_arm2(cell_state(0xA9));
    row_sel_cell2_cur();
    row_sel2(cell_state(0xAA));
    txt_set(0x388B);
    if (gate(2) != 0)
        goto L15A764;
    sep();
    tail(0xA9);
L15A764:
    func_8015ABEC();
    func_8015A56C();
    return;
}
