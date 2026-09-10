/* FF4 source-port — interpreted module for psy_q_runtime_lock_enter_stub_sysc.
 * Ground truth: src/psy_q_runtime_lock_enter_stub_sysc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void psy_q_runtime_lock_enter_stub_sysc(void)
{
    /* PSY-Q runtime lock-enter stub: syscall 0 with a0 = 1
       (handwritten instruction). Callers read the return and run the
       paired 801976F8 (lock-exit) when it comes back 1. PS1-only;
       no SNES counterpart. */
    return 0;
}
