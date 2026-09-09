/* FF4 source-port — interpreted module for func_80100B30.
 * Ground truth: src/func_80100B30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80100B30(void)
{
    /* shop rows: 0x1702/0x3D/0x3E windows, 0x1701 text; 4F28/7A40
       label pairs, then 62BC gates. */
    txt_set(0x1702);
    cell_put(0x3D);
    open_row(0x3E);
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L100BA0;
    key_page(0x3E);
    key_page(0x3E);
L100BA0:
    page(0x3D);
    func_800F6C68();
    cell_put(0x3D);
    func_800F6C68();
    cell_put(0x3E);
    return;
}
