/* FF4 source-port — interpreted module for battle_rows_twin_of_ccc_x8f_x5f_xa.
 * Ground truth: src/battle_rows_twin_of_ccc_x8f_x5f_xa.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_twin_of_ccc_x8f_x5f_xa(void)
{
    /* battle rows (twin of 80113CCC): 0x8F/0x5F/0xAD/0x17C/0x6FB/0x24
       windows, 80113F3C/8011EA5C rows; loop L113E84 on 41E8(2). */
    cell_put(0x8F);
    latch(0x5F);
    cell_put(0xAD);
    wnd_open(0x17C);
    label(0x6FB);
    tail(0x24);
    latch(0x10);
    cell_put(0x90);
L113e84:
    for (;;) {
        shop_view_run();
        battle_rows_x20_x21_x31_x24_x26_x8();
        row_prep(0x20);
        cell_push9(0x6FB);
        row_scan_cur();
        row_scan_cur();
        cell_pull9_hi(0x6FB);
        row_read2(0x24);
        row_scan_cur();
        row_scan_cur();
        cell_put_hi9(0x24);
        cell_pos_mask(0xFF);
        row_prep_close();
        cell_put(0xAD);
        if (cell_flags_pos0(2) == 0)
            continue;
        break;
    }
    battle_c3c_b04_gates_loop_on_a0_v1();
    battle_wndfx_run();
    return;
}
