/* FF4 source-port — interpreted module for func_8012E33C.
 * Ground truth: src/func_8012E33C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012E33C(void)
{
    /* formation summary: 0xD9/0xDA windows, 0x43 window cells, 0x1B9C/
       0x1B9F/0x1B9D row texts, 80D0/53C0 gate; 81B0 cell pairs. */
    row_page(0xD9);
    row_sel_cell_cur();
    cell_put(0x43);
    page(0x43);
    row_page(0xDA);
    row_sel_cell_cur();
    cell_put(0x43);
    cell_fmt2(0x43);
    row_open2();
    row_pad();
    row_prep(0x20);
    sep_b();
    func_800F80D0();
    if (io_go() != 0)
        goto L12E540;
    sep_b();
    func_800F80D0();
    row_pad();
    stat_sync();
    cell_pull9_hi(0x1B9C);
    row_sync2_cur();
    cell_pull9_hi(0x1B9F);
    row_sync2(0x400);
    cell_pull9_hi(0x1B9D);
    goto L12E590;
L12E540:
    row_pad();
    stat_sync();
    cell_pull9_hi(0x1B9C);
    row_sync2_cur();
    cell_pull9_hi(0x1B9D);
    row_sync2(0x400);
    cell_pull9_hi(0x1B9F);
    goto L12E590;
L12E590:
    row_prep_close();
    return;
}
