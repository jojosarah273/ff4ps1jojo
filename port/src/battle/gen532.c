/* FF4 source-port — interpreted module for func_8010D54C.
 * Ground truth: src/func_8010D54C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D54C(void)
{
    row_page(14);
    cell_put(62);
    open_row(61);
    cell_word_half(cell_state(62));
    cell_flags_repack();
    cell_word_half_s(cell_state(61));
    cell_word_half(cell_state(62));
    cell_flags_repack();
    cell_word_half_s(cell_state(61));
    cell_word_half(cell_state(62));
    cell_flags_repack();
    cell_word_half_s(cell_state(61));
    row_page(61);
    sep_a();
    cell_poke0(cell_state(12));
    cell_put(61);
}
