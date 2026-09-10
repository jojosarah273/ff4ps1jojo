/* FF4 source-port — interpreted module for fn_1x6c128.
 * Ground truth: src/fn_1x6c128.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x6c128(void)
{
    wnd_open(6);
    fn_1x6c6fc();
    row_prep(32);
    row_read2(128);
    sep_a();
    cell_peek0(cell_state(112));
    cell_put_hi9(75);
    row_read2(130);
    sep_a();
    cell_peek0(cell_state(114));
    cell_pos_fwd(12);
    cell_put_hi9(77);
    sep();
    row_prep_close();
    latch(4);
    cell_put(81);
    latch(2);
    fn_1x6aa54();
    wnd_open(8);
    fn_1x6c6fc();
    row_prep(32);
    row_read2(132);
    sep_a();
    cell_peek0(cell_state(112));
    cell_put_hi9(75);
    row_read2(134);
    sep_a();
    cell_peek0(cell_state(114));
    cell_pos_fwd(12);
    cell_put_hi9(77);
    sep();
    row_prep_close();
    latch(4);
    cell_put(81);
    latch(3);
    fn_1x6aa54();
}
