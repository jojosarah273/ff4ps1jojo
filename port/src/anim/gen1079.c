/* FF4 source-port — interpreted module for func_801771D4.
 * Ground truth: src/func_801771D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801771D4(void)
{
    row_sel_cell_cur();
    cell_put(69);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(69));
    func_801773D4();
}
