/* FF4 source-port — interpreted module for fn_1x21a9c.
 * Ground truth: src/fn_1x21a9c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x21a9c(void)
{
    row_page(102);
    sep_b();
    cell_tick_sub(cell_state(100));
    poll_spin();
    cell_put(29);
    row_page(30);
    cell_draw(0);
    rows_u16_d44_d54_swap_with_c_prep();
    fn_1x21b04();
}
