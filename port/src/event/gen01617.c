/* FF4 source-port — interpreted module for event_s2_s4_gate_b8_spin_rows_with.
 * Ground truth: src/event_s2_s4_gate_b8_spin_rows_with.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_s2_s4_gate_b8_spin_rows_with(void)
{
    /* event: s2/s4 gate; 80197798(3) + 801977B8 spin rows with s1
       latches; returns at L193058. */
    /* s2/s4 latch -> L19305C */
    if (io_just() != 0)
        goto L192FE4;
    register_only_stub_xc_see_asm_for_1977(3);
    event_jr_t2_dispatch_f078_spin_loo();
    return;
L192FE4:
    for (;;) {
        /* s1 latches -> L193020/L193038/L193048 */
        if (event_jr_t2_dispatch_f078_spin_loo() != 0)
            continue;
        break;
    }
    return;
L193058:
    return;
}
