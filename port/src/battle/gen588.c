/* FF4 source-port — interpreted module for func_80145B90.
 * Ground truth: src/func_80145B90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80145B90(void)
{
    /* battle rows: 0x26/0x28/0x2A windows, 0x1800 text, 80072720 +
       80145C74 rows. */
    row_open();
    cell_push_c8();
    cell_put(0x26);
    latch(0x18);
    cell_put(0x28);
    func_80072720();
    wnd_open(0x1800);
    label_cur();
    latch(0x1C);
    txt_draw_cur();
    latch(8);
    txt_draw_cur();
    txt_draw_cur();
    row_prep(0x20);
    row_read2(0x2A);
    sep_a();
    cell_pos_fwd();
    cell_pull9_hi();
    sep();
    row_prep_close();
    func_80145C74();
    row_close();
    return;
}
