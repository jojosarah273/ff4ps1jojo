/* FF4 source-port — interpreted module for rows_x29_x45_x46_windows_c_row_f94.
 * Ground truth: src/rows_x29_x45_x46_windows_c_row_f94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x29_x45_x46_windows_c_row_f94(void)
{
    /* rows: 0x29/0x45/0x46 windows, 8012371C row; 3F94(3C3C(0x29))
       + 3F38(3C3C(0x45)) reads. */
    row_read(0xF);
    cell_cursor_dec();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_close2();
    row_sel_cell_cur();
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    latch(6);
    cell_put(0x45);
    fn_1x2371c();
    return;
}
