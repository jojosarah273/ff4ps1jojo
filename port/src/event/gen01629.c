/* FF4 source-port — interpreted module for event_v1_v0_gate_e8_acf8_a8_f8.
 * Ground truth: src/event_v1_v0_gate_e8_acf8_a8_f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v1_v0_gate_e8_acf8_a8_f8(void)
{
    /* event: v1/v0 gate; 801976E8/8018ACF8/80197668/801976A8/
       801976F8 rows. */
    if (io_just() != 0)
        goto L18ADAC;
    psy_q_runtime_lock_enter_stub_sysc();
    fn_1x8acf8();
    register_only_stub_xc_see_asm_for_1976();
    register_only_stub_xc_see_asm_for_1976();
    psy_q_runtime_lock_exit_stub_sysca();
    return;
L18ADAC:
    return;
}
