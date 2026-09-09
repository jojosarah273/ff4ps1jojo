/* FF4 source-port — interpreted module for func_8012C584.
 * Ground truth: src/func_8012C584.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012C584(void)
{
    /* config row: 0x60 window, 0x43/0x3F windows, 8012C2F8 alt +
       801221EC close; 4120(0x202)/53C0 gates. */
    draw_pad(3);
    func_800F66D8(0x60);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto L12C5D0;
    draw_pad_cur();
    func_8012C2F8();
    return;
L12C5D0:
    draw_pad(0x16);
    func_800F66D8(0x60);
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x43));
    draw_pad(7);
    func_800F3A70(0x60);
    func_800F5520(cell_state_of());
    if (io_go() == 0)
        goto L12C678;
    func_800F8378(0x60);
L12C678:
    row_prep_close();
    draw_pad(3);
    func_800F66D8(0x60);
    row_read(0x7F);
    func_800F82EC(0x60);
    func_801221EC();
    return;
}
