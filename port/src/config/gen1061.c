/* FF4 source-port — interpreted module for fn_1x21ebc.
 * Ground truth: src/fn_1x21ebc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x21ebc(void)
{
    row_page(101);
    sep_b();
    cell_tick_sub(cell_state(99));
    cell_set50_from40();
    cell_put(29);
    sep();
    fn_1x21f14();
}
