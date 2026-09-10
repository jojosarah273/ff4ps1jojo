/* FF4 source-port — interpreted module for event_flow_e8_spins_b4_rows_gates.
 * Ground truth: src/event_flow_e8_spins_b4_rows_gates.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_flow_e8_spins_b4_rows_gates(void)
{
    /* event flow: 80192888/801928E8 spins, 80191838/80191858/
       80192858/801919B4 rows; gates at L192300/L192380. */
    if (io_just() != 0)
        func_80192888();
L192300:
    /* v0 gates -> L192324 / L192380 / L192AC */
    for (;;) {
        event_spin_wait();
        if (io_just() == 0)
            goto L192324;
        if (io_just() != 0)
            continue;
        break;
    }
L192380:
    event_spin_wait();
    goto L192380;
L1923A8:
L1923AC:
    if (io_just() == 0)
        goto L192464;
    func_80191858();
    if (io_just() == 0)
        goto L1923EC;
    func_80192858();
L1923EC:
    func_80191838(9);
    event_twin_b44_rows_on_s2_fp_s0();
    if (io_just() == 0)
        goto L192464;
    event_spin_wait();
L19243c:
    for (;;) {
        event_spin_wait();
        if (io_just() == 0)
            goto L192344;
        if (io_just() != 0)
            continue;
        break;
    }
L192464:
    return;
L192324:
    func_80191838();
    return;
L192344:
    func_80191838();
    return;
}
