/* FF4 source-port — interpreted module for battle_rows_gate_x202_loop_l1414e0.
 * Ground truth: src/battle_rows_gate_x202_loop_l1414e0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_gate_x202_loop_l1414e0(void)
{
    /* battle rows: gate 6434(0x202); loop L1414E0 on 5A90(6). */
    txt_set_cur();
    if (gate(0x202) != 0) {
        txt_set_cur();
    }
    sep();
L1414e0:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(6);
        if (io_just() == 0)
            continue;
        break;
    }
    page_paint2_cur();
    return;
}
