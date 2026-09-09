/* FF4 source-port — interpreted module for func_80121678.
 * Ground truth: src/func_80121678.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80121678(void)
{
    /* battle row: 6A78(0xA2)/6434 gate routes the 6AF4(0xA1) stat
       cells (0x1D/0x89/0x8B windows); 53C0 check. */
    func_800F6A78(0xA2);
    if (gate_cur() != 0)
        goto L121720;
    row_prep(0x20);
    func_800F6AF4(0xA1);
    cell_pos_mask(0x7FFF);
    cell_put_hi9(0x1D);
    func_800F6AF4(0x89);
    sep_b();
    cell_pos_sub16(cell_state(0x1D));
    func_800F86F0(0x89);
    row_prep_close();
    if (io_go() != 0)
        goto L1217DC;
    func_800F5B2C(cell_state(0x8B));
    return;
L121720:
    row_prep(0x20);
    func_800F6AF4(0x89);
    sep_a();
    cell_peek0(cell_state(0xA1));
L121798:
    func_800F86F0(0x89);
    row_prep_close();
    if (io_go() == 0)
        return;
    cell_dispatch(cell_state(0x8B));
    return;
    return;
L1217DC:
    return;
}
