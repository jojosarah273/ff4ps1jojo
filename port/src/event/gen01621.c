/* FF4 source-port — interpreted module for func_8018F374.
 * Ground truth: src/func_8018F374.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018F374(void)
{
    /* event: 801976E8 prep; t2/t1 latch loop; 80197608 tail. */
    psy_q_runtime_lock_enter_stub_sysc();
    for (;;) {
        /* t2/t1 latch */
        if (io_just() == 0)
            break;
    }
    register_only_stub_xc_see_asm_for_1976();
    return;
}
