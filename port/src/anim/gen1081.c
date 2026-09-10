/* FF4 source-port — interpreted module for fn_1x72998.
 * Ground truth: src/fn_1x72998.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x72998(void)
{
    cell_cursor_read();
    cell_flags_set4();
    cell_poke0(cell_state(cell_bank_sel(45)));
    cell_cursor_read();
}
