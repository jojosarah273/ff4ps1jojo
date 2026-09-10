/* FF4 source-port — interpreted module for event_e8_gate_f0c8_x_c74_rows.
 * Ground truth: src/event_e8_gate_f0c8_x_c74_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_gate_f0c8_x_c74_rows(void)
{
    /* event: 801928E8 gate; 8018F0C8 + 2x 80192C74 rows. */
    if (event_spin_wait() == 0)
        goto L1969FC;
    anim_reg_stub();
    func_80192C74();
    func_80192C74();
    return;
L1969FC:
    return;
}
