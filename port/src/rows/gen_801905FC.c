/* FF4 source-port — interpreted module for event_e8_gates_f0c8_fd8_rows_c4c_l.
 * Ground truth: src/event_e8_gates_f0c8_fd8_rows_c4c_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_gates_f0c8_fd8_rows_c4c_l(void)
{
    /* event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows,
       80192C4C + 80190098 loops; a2/s3 + v1/a3 regcmp latches. */
    if (event_spin_wait() != 0)
        goto L1906C8;
    goto L190734;
L1906C8:
    register_only_stub_xc_see_asm_for_1916();
    anim_reg_stub();
    psy_q_runtime_lock_enter_stub_vari();
L190734:
    if (func_80192C4C() != 0) {
        event_dispatcher_gate_tree_with_jr();
    }
    /* a2/s3 + a2/v0 + v1/a3 latches -> L190844/L19084C */
    return;
L19084C:
    return;
}
