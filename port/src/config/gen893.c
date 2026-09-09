/* FF4 source-port — interpreted module for func_80139694.
 * Ground truth: src/func_80139694.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80139694(void)
{
    txt_set(0x1BB2);
    sep_a();
    cell_poke0(cell_state(0x1BB0));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1BB1));
    row_sel_cell_cur();
    cell_put(0x43);
    page(0x43);
}
