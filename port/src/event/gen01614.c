/* FF4 source-port — interpreted module for event_e8_prep_loop_l197ea8_on_f8.
 * Ground truth: src/event_e8_prep_loop_l197ea8_on_f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_prep_loop_l197ea8_on_f8(void)
{
    /* event: 801976E8 prep; loop L197EA8 on 80197608/801976F8. */
    psy_q_runtime_lock_enter_stub_sysc();
    do {
        register_only_stub_xc_see_asm_for_1976();
        psy_q_runtime_lock_exit_stub_sysca();
    } while (io_just() != 0);
    return;
}
