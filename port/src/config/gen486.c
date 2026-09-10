/* FF4 source-port — interpreted module for config_dead_key_row_x5d_window_x45.
 * Ground truth: src/config_dead_key_row_x5d_window_x45.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_dead_key_row_x5d_window_x45(void)
{
    /* config dead-key row: 0x5D window, 0x45/0x29/0x41 cells,
       4264(1)/41E8(2) gates; 4 cell writes on 0x4/0x2/0x40/0x42. */
    row_prep(0x20);
    row_read2(0x5D);
    row_sel2_cur();
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_put_hi9(0x45);
    row_read2(0x5D);
    cell_pos_mask(1);
    if (cell_flags_pos0(2) != 0)
        goto L12CBAC;
    row_sync2(0x20);
L12CBAC:
    cell_peek0(cell_state(0x45));
    sep_a();
    cell_peek0(cell_state(0x29));
    cell_pos_fwd(0x4A);
    row_prep_close();
    latch(4);
    cell_pull_c8();
    cell_set50_from40();
    cell_pull_c8(2);
    cell_set50_from40();
    cell_pull_c8(0x40);
    cell_set50_from40();
    cell_pull_c8(0x42);
    return;
}
