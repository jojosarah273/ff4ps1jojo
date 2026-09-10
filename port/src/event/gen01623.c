/* FF4 source-port — interpreted module for event_v1_v0_gates_c608_e0c8_rows_t.
 * Ground truth: src/event_v1_v0_gates_c608_e0c8_rows_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v1_v0_gates_c608_e0c8_rows_t(void)
{
    /* event: v1/v0 gates; 8018C608(1)/8018E0C8(1) rows then
       L18DB6C: 8018E4B8/8018ABE8 and L18DBDC: 8018E448/8018D1AC/
       8018E2C8/8018A75C(3). */
    /* v1/v0 gates -> L18DB00 / L18DB20 / L18DC40 */
    event_mask_queue_arm_park_a_u16_pa(1);
    if (io_just() == 0)
        goto L18DB94;
    waiter_latch_up_to_four_pending_u1(1);
L18DB94:
    fn_1x8e4b8();
    fn_1x8abe8();
L18DBDC:
    fn_1x8e448();
    event_a75c_v1_v0_gate_spin_loops_l();
    event_a0_v0_latch_chain_l18e2e0_l1();
    event_drive(3);
    return;
}
