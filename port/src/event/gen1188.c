/* FF4 source-port — interpreted module for event_v0_gates_f078_spin_loop_l197.
 * Ground truth: src/event_v0_gates_f078_spin_loop_l197.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gates_f078_spin_loop_l197(void)
{
    /* event: v0 gates; 8018F078 spin loop L1979E8. */
    if (io_just() != 0)
        goto L1979A4;
    goto L1979A4;
L1979A4:
    if (io_just() == 0)
        goto L197A28;
L1979E8:
    register_only_stub_x1c_see_asm_for();
    if (io_just() != 0)
        goto L197A14;
    goto L197A24;
L197A14:
    if (io_just() != 0)
        goto L1979E8;
    return;
L197A24:
    return;
L197A28:
    return;
}
