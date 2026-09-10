/* FF4 source-port — interpreted module for event_b04_c3c_rows_with_a70_loops.
 * Ground truth: src/event_b04_c3c_rows_with_a70_loops.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_b04_c3c_rows_with_a70_loops(void)
{
    /* event: 3B04/3C3C rows with 3A70 loops on s1/s5/s4 latches;
       922C/9410 spins; 5410/971C tail. */
    cell_state_of();
    cell_state_of();
L13f020:
    for (;;) {
        cell_bank_sel();
        cell_state_of();
    L13f03c:
        for (;;) {
            cell_cursor_ret2();
            if (io_press(1) == 0)
                continue;
            break;
        }
        cell_cursor_adv2();
        sep_a();
        sep();
        return;
    }
}
