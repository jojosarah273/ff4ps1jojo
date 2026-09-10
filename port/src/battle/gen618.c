/* FF4 source-port — interpreted module for fn_1x1bcd8.
 * Ground truth: src/fn_1x1bcd8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1bcd8(void)
{
    draw_pad(0);
    row_info(61);
    row_page(64);
    sep_a();
    row_open_w(8);
    cell_put(64);
    cell_put(68);
    open_row(67);
    cell_word_half(cell_state(68));
    cell_flags_repack();
    cell_word_half_s(cell_state(67));
    cell_word_half(cell_state(68));
    cell_flags_repack();
    cell_word_half_s(cell_state(67));
    page(67);
}
