/* FF4 source-port — interpreted module for func_8015A9BC.
 * Ground truth: src/func_8015A9BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A9BC(void)
{
    /* options: 3C3C/3B04(0x2000) gates; 8015240C/8015ABEC/
       8015A56C rows. */
    cell_state_of();
    cell_state(0x2000);
    options_row_run();
    options_rows_b();
    options_cursor_cells();
    return;
}
