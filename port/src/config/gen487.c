/* FF4 source-port — interpreted module for config_row_x60_window_x43_x3f_wind.
 * Ground truth: src/config_row_x60_window_x43_x3f_wind.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_row_x60_window_x43_x3f_wind(void)
{
    /* config row: 0x60 window, 0x43/0x3F windows, 8012C2F8 alt +
       801221EC close; 4120(0x202)/53C0 gates. */
    draw_pad(3);
    cell_push_c8_sel(0x60);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto L12C5D0;
    draw_pad_cur();
    fn_1x2c2f8();
    return;
L12C5D0:
    draw_pad(0x16);
    cell_push_c8_sel(0x60);
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x43));
    draw_pad(7);
    cell_bank_sel(0x60);
    cell_flags_cmp_pos(cell_state_of());
    if (io_go() == 0)
        goto L12C678;
    cell_pull89_bank(0x60);
L12C678:
    row_prep_close();
    draw_pad(3);
    cell_push_c8_sel(0x60);
    row_read(0x7F);
    cell_pull_c8_bank(0x60);
    config_row_221ec();
    return;
}
