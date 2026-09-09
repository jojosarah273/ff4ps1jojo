/* FF4 source-port — interpreted module for func_8015A094.
 * Ground truth: src/func_8015A094.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A094(void)
{
    row_read(18);
    cell_tick_half();
    cell_put(170);
    row_page(169);
    row_read(9);
    row_sel_cell_cur();
    cell_tick_or(cell_state(170));
    func_800F78E0();
}
