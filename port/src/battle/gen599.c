/* FF4 source-port — interpreted module for func_80115684.
 * Ground truth: src/func_80115684.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80115684(void)
{
    /* battle rows: 0xEF/0xF1/0xC/0xE/0x91/0x8F windows, custom
       4264(7)/7894/4064(0x144) cells. */
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0xEF));
    cell_put_hi9(0xC);
    sep_a();
    cell_peek0(cell_state(0xF1));
    cell_put_hi9(0xE);
    cell_pos_mask(7);
    row_sel2_cur();
    cell_pos_mask(0xFF);
    sep_a();
    cell_pos_fwd(0x144);
    row_sync2_cur();
    row_prep_close();
    latch(0x18);
    cell_put(0x91);
    latch(0xA8);
    cell_put(0x8F);
    return;
}
