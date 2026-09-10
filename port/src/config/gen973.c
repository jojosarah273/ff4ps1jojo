/* FF4 source-port — interpreted module for fn_1x32428.
 * Ground truth: src/fn_1x32428.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x32428(void)
{
    row_page(232);
    cell_cur_save54_b();
    txt_set(7059);
    cell_put(67);
    row_prep(32);
    cell_sink8_9(11);
    sep_b();
    cell_pos_sub16(cell_state(67));
    row_prep_close();
}
