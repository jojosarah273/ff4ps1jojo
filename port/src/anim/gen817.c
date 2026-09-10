/* FF4 source-port — interpreted module for fn_1x75e88.
 * Ground truth: src/fn_1x75e88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x75e88(void)
{
    txt_set(5891);
    open_row(74);
    cell_tick_half();
    cell_flags_repack();
    cell_word_half_s(cell_state(74));
    cell_tick_half();
    cell_flags_repack();
    cell_word_half_s(cell_state(74));
    cell_put(75);
    page(74);
}
