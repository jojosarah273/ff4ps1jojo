/* FF4 source-port — interpreted module for event_cmd_flow_v0_v1_gates_through.
 * Ground truth: src/event_cmd_flow_v0_v1_gates_through.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_cmd_flow_v0_v1_gates_through(void)
{
    /* event-cmd flow: v0/v1 gates through 8018F0C8/801905FC checks,
       801928E8/80191620/80190FD8/80192C4C/80190098 rows with spin
       loops; returns at L190F28. */
    if (anim_reg_stub() != 0)
        goto L190BA8;
    /* v0 gate -> L190BA8 */
    anim_reg_stub();
    return;
L190BA8:
    if (event_e8_gates_f0c8_fd8_rows_c4c_l() == 0)
        goto L190C04;
    goto L190F28;
L190C04:
    /* v1/v0 gates + spin loops L190C24/L190CBC */
    event_spin_wait();
L190D58:
    if (event_spin_wait() == 0) {
        register_only_stub_xc_see_asm_for_1916();
        anim_reg_stub();
        psy_q_runtime_lock_enter_stub_vari();
    }
    if (func_80192C4C() != 0) {
        /* L190E40: 80190098 loop */
        event_dispatcher_gate_tree_with_jr();
    }
    goto L190D58;
    return;
L190F28:
    return;
}
