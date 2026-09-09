/* FF4 source-port — interpreted module for func_8012CB34.
 * Ground truth: src/func_8012CB34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012CB34(void)
{
    /* config dead-key row: 0x5D window, 0x45/0x29/0x41 cells,
       4264(1)/41E8(2) gates; 4 cell writes on 0x4/0x2/0x40/0x42. */
    row_prep(0x20);
    row_read2(0x5D);
    row_sel2_cur();
    row_arm_s_cur();
    row_arm_s2_cur();
    func_800F8274(0x45);
    row_read2(0x5D);
    func_800F4264(1);
    if (func_800F41E8(2) != 0)
        goto L12CBAC;
    row_sync2(0x20);
L12CBAC:
    cell_peek0(cell_state(0x45));
    sep_a();
    cell_peek0(cell_state(0x29));
    func_800F4064(0x4A);
    row_prep_close();
    latch(4);
    func_800F8960();
    func_800F61E8();
    func_800F8960(2);
    func_800F61E8();
    func_800F8960(0x40);
    func_800F61E8();
    func_800F8960(0x42);
    return;
}
