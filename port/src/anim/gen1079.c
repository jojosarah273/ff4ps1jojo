/* FF4 source-port — interpreted module for fn_1x771d4.
 * Ground truth: src/fn_1x771d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x771d4(void)
{
    row_sel_cell_cur();
    cell_put(69);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(69));
    fn_1x773d4();
}
