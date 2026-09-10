/* FF4 source-port — interpreted module for event_f0c8_b8_rows_spin_loops_l192.
 * Ground truth: src/event_f0c8_b8_rows_spin_loops_l192.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_f0c8_b8_rows_spin_loops_l192(void)
{
    /* event: 8018F0C8/801976B8 rows; spin loops L192E04/L192DF8 on
       v0 gates; closes 8018F0C8/801976B8. */
    if (io_just() != 0)
        goto L192DBC;
    anim_reg_stub();
    func_801976B8();
L192DBC:
    /* gate loops L192E04 / L192DF8 */
    if (io_just() == 0)
        goto L192E84;
    anim_reg_stub();
    goto L192F08;
L192E84:
    func_801976B8();
    return;
L192F08:
    func_801976B8();
    return;
}
