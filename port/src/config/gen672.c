/* FF4 source-port — interpreted module for config_rows_c0a8_prep_x60_x45_wind.
 * Ground truth: src/config_rows_c0a8_prep_x60_x45_wind.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_c0a8_prep_x60_x45_wind(void)
{
    /* config rows: 8012C0A8 prep, 0x60/0x45 windows; 53C0 gate picks
       6764(0x60) fills. */
    config_save_flow_x60_x45_windows_x();
    /* regcmp v0/v1 -> L12C41C */
    draw_pad(7);
    row_prep(0x20);
    cell_push89_sel(0x60);
    sep_a();
    cell_peek0(cell_state(0x45));
    step2();
    step2();
    cell_flags_cmp_pos(cell_bank_sel(0x60));
    cell_state_of();
    if (io_go() == 0)
        goto L12C3FC;
    cell_push89_sel(0x60);
L12C3FC:
    poll_pair_cur();
    poll_pair_cur();
    cell_pull89_bank(0x60);
    row_prep_close();
    return;
}
