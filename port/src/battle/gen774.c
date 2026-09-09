/* FF4 source-port — interpreted module for func_80118AA8.
 * Ground truth: src/func_80118AA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118AA8(void)
{
    /* battle rows: 0x9D5 text, 0x18/0x1560 window/cell, 80117594 +
       8011EA5C rows; loop L118B30 on 6D70(0x1560)/6434(2). */
    cell_step();
    txt_cell(0x9D5);
    row_prep(0x20);
    cell_put_hi9(0x18);
    row_arm_s_cur();
    sep_a();
    cell_peek0(cell_state(0x18));
    row_sync2_cur();
    row_prep_close();
L118b30:
    for (;;) {
        cell_push_c8_d58(0x1560);
        if (gate(2) != 0)
            goto L118B58;
        step2();
    }
L118B58:
    func_80117594();
    cell_pull_c8(0x1560);
    battle_wndfx_run();
    return;
}
