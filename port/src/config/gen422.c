/* FF4 source-port — interpreted module for func_80122B54.
 * Ground truth: src/func_80122B54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80122B54(void)
{
    /* row picker: 0x60/0x61 windows, 0x45/0x43 windows, 0x16A8 text,
       6434(2)/4120 gates; 6D70/4248(0x3F) detail. */
    cell_put(0x60);
    open_row(0x61);
    row_prep(0x20);
    row_read2(0x60);
    row_arm_s_cur();
    row_arm_s2_cur();
    func_800F4064(0x1000);
    row_prep_close();
    row_page(0x60);
    cell_put(0x48);
    func_800F6D70();
    row_read(0x3F);
    if (sel(0x202) == 0)
        return;
    func_800F78C4(cell_state(0x48));
    cell_put(0x48);
    txt_set(0x16A8);
    if (gate(2) != 0)
        goto L122C54;
    wnd_open(0xA);
    goto L122C5C;
L122C54:
    page(0x41);
L122C5C:
    tail(0x45);
    row_page(0x60);
    row_sel_cell_cur();
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    cell_peek0(cell_state(0x45));
    func_800F6CF4(0x20);
    row_prep_close();
    return;
}
