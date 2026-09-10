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
    clear_a1_u32_cells_countdown_from();
    register_only_stub_xc_see_asm_for_1931();
    if (io_just() == 0)
        goto L192D04;
    event_f0c8_b8_rows_spin_loops_l192();
L192D04:
    register_only_stub_xc_see_asm_for_1976();
    fn_1x931c8();
    fn_1x932e8();
    register_only_stub_xc_see_asm_for_1976();
    psy_q_runtime_lock_exit_stub_sysca();
    return;
}
