/* FF4 source-port — interpreted module for func_8016C624.
 * Ground truth: src/func_8016C624.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C624(void)
{
    wnd_open(2);
    func_8016C734();
    row_prep(32);
    row_read2(120);
    sep_a();
    cell_peek0(cell_state(108));
    cell_peek0(cell_state(124));
    cell_pos_fwd(8);
    cell_put_hi9(75);
    row_read2(122);
    sep_a();
    cell_peek0(cell_state(110));
    cell_peek0(cell_state(126));
    cell_pos_fwd(8);
    cell_put_hi9(77);
    sep();
    row_prep_close();
    latch(4);
    cell_put(81);
    func_80176F60();
}
