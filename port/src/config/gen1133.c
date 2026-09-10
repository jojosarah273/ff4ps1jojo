/* FF4 source-port — interpreted module for fn_1x22054.
 * Ground truth: src/fn_1x22054.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x22054(void)
{
    row_page(102);
    sep_b();
    cell_tick_sub(cell_state(100));
    cell_set50_from40();
    cell_put(29);
    fn_1x220a4();
}
