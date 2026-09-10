/* FF4 source-port — interpreted module for event_b8_gates_d64_d8_c8_e8_f8.
 * Ground truth: src/event_b8_gates_d64_d8_c8_e8_f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_b8_gates_d64_d8_c8_e8_f8(void)
{
    /* event: 80193194/801931B8 gates; 80192D64/801976D8/801931C8/
       801932E8/80197630/801976F8 rows; returns at L192D54. */
    if (io_just() != 0)
        return;
    func_80193194();
    func_801931B8();
    if (io_just() == 0)
        goto L192D04;
    event_f0c8_b8_rows_spin_loops_l192();
L192D04:
    func_801976D8();
    func_801931C8();
    func_801932E8();
    func_80197630();
    func_801976F8();
    return;
}
