/* FF4 source-port — interpreted module for event_c3c_b04_a70_rows_with_a2_s0.
 * Ground truth: src/event_c3c_b04_a70_rows_with_a2_s0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_c3c_b04_a70_rows_with_a2_s0(void)
{
    /* event: 3C3C/3B04/3A70 rows with a2/s0 + a2/a0 spin latches;
       closes 8013EFD8. */
    cell_state_of();
    cell_state_of();
    sep_a();
L13f1bc:
    for (;;) {
        cell_bank_sel();
        cell_state_of();
        cell_bank_sel();
        cell_state_of();
        /* a2/s0 + a2/v0 + a2/a0 latch loops */
    }
    event_b04_c3c_rows_with_a70_loops();
    return;
}
