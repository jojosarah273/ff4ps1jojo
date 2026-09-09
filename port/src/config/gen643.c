/* FF4 source-port — interpreted module for func_8012C8A4.
 * Ground truth: src/func_8012C8A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012C8A4(void)
{
    /* config rows: 0x1B3B/0xD5/0x60 texts/windows, 801221EC/8012C2F8/
       8012C980 rows; gate 53D4. */
    txt_set(0x1B3B);
    sep_b();
    cell_pos_back(0xD5);
    row_sel_cell_cur();
    cell_put(0x43);
    page(0x43);
    draw_pad(3);
    row_prep(0x20);
    func_800F6764(0x60);
    cell_put_hi9(0x45);
    func_800F4B1C();
    func_800F8378(0x60);
    func_800F5520(cell_state(0x45));
    if (io_just() != 0)
        goto L12C948;
    row_prep_close();
    func_801221EC();
    return;
L12C948:
    row_prep_close();
    draw_pad_cur();
    func_8012C2F8();
    func_8012C980();
    return;
}
