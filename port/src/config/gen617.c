/* FF4 source-port — interpreted module for func_80124DC8.
 * Ground truth: src/func_80124DC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124DC8(void)
{
    /* rows: 0x29/0x45/0x46 windows, 8012371C row; 3F94(3C3C(0x29))
       + 3F38(3C3C(0x45)) reads. */
    row_read(0xF);
    func_800F9200();
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
    func_8012371C();
    return;
}
