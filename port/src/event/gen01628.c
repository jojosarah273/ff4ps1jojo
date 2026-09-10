/* FF4 source-port — interpreted module for event_v0_gate_tree_b1c8_spins_l18a.
 * Ground truth: src/event_v0_gate_tree_b1c8_spins_l18a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gate_tree_b1c8_spins_l18a(void)
{
    /* event: v0 gate tree; 8018B1C8 spins L18AF44; 8018B16C + s6
       latches; returns at L18B138 via L18B13C. */
    /* v0 gates -> L18AE70/L18AE8C/L18B13C/L18AF14 */
    region_walker_x300_v0_t2_v1_a3_reg();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    /* s6/v0 latch -> L18B0FC */
    fn_1x8b16c();
    return;
}
