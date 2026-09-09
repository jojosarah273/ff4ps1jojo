/* FF4 source-port — interpreted module for func_80130AA4.
 * Ground truth: src/func_80130AA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80130AA4(void)
{
    /* ability detail: 0x1B87/0x1B83/0x1B84 texts, 0x45/0x1B93
       windows, 801308B4 row; gates 6434(2). */
    txt_set(0x1B87);
    if (gate(2) != 0)
        goto L130BB0;
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    func_801308B4();
    func_800F6D70(0x1560);
    stat_sync();
    latch_cur();
    stat_sync();
    row_prep(0x20);
    row_arm_s_cur();
    func_800F8274(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    row_prep_close();
    func_800F6C68();
    row_read(0x7F);
    txt_draw(0x1B93);
    return;
L130BB0:
    txt_set(0x1B93);
    return;
}
