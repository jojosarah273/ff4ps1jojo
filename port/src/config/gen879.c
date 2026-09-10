/* FF4 source-port — interpreted module for fn_1x52de4.
 * Ground truth: src/fn_1x52de4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x52de4(void)
{
    row_prep(32);
    sep_a();
    cell_push9(14678);
    cell_peek0(cell_state(14680));
    cell_pull9_hi(14682);
    row_sync2(0);
    cell_pos_fwd(0);
    cell_pull9_hi(14684);
    sep();
    row_prep_close();
}
