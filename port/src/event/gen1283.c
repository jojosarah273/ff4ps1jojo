/* FF4 source-port — interpreted module for event_gates_cc_spin_rows_l195c68_s.
 * Ground truth: src/event_gates_cc_spin_rows_l195c68_s.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_gates_cc_spin_rows_l195c68_s(void)
{
    /* event: 80196898 gates; 801968CC spin rows (L195C68) + s0
       latches; returns L195D74. */
    func_80196898();
    if (io_just() == 0)
        goto L195BC4;
    goto L195BC4;
L195BC4:
    /* v0 gates -> L195C04 / L195C00 */
    goto L195D74;
L195C38:
    do {
        func_801968CC();
        if (io_just() != 0)
            goto L195D74;
    } while (io_just() != 0);
    /* s0/v0 + s0/a0 latches -> L195D24/L195D08 */
    return;
L195D74:
    return;
}
