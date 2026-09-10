/* FF4 source-port — interpreted module for event_v0_spin_loop_l119cec_f5c0_ta.
 * Ground truth: src/event_v0_spin_loop_l119cec_f5c0_ta.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_spin_loop_l119cec_f5c0_ta(void)
{
    /* event: v0 spin loop L119CEC; 8017F5C0 tail. */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    battle_v0_gate_picks_eac8_vs_f148();
    return;
}
