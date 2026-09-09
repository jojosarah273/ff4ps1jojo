/* FF4 source-port — interpreted module for func_8016C128.
 * Ground truth: src/func_8016C128.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C128(void)
{
    wnd_open(6);
    func_8016C6FC();
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
    func_8016AA54();
    wnd_open(8);
    func_8016C6FC();
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
    func_8016AA54();
}
