/* FF4 source-port — interpreted module for options_seeds_x1822_x38fc_x3975_te.
 * Ground truth: src/options_seeds_x1822_x38fc_x3975_te.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_seeds_x1822_x38fc_x3975_te(void)
{
    /* options seeds: 0x1822/0x38FC/0x3975 texts, 0x32ED-0x32F0 cells,
       80152908/80152CDC/8015A284/80155778/801583FC rows; 6434
       gates. */
    txt_set(0x1822);
    cell_push_c8_d58(0x38FC);
    if (gate(2) != 0)
        return;
    txt_set(0x1822);
    txt_draw(0x3975);
    options_row_v0_gate_picks_f4c_vs_c();
    cell_push_c8_d58(0x38FC);
    if (gate_cur() != 0)
        goto L15D160;
    cell_step();
    cell_step();
    cell_step();
    cell_step();
L15D160:
    sep();
    cell_pull_c8(0x38FC);
    page_paint(0x32DB);
    page_paint(0x32DC);
    latch(0x80);
    cell_draw(0x32DA);
    txt_set(0x3975);
    options_rows_run();
    func_8015A284();
    fn_1x55778();
    fn_1x583fc();
    return;
}
