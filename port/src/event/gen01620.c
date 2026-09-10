/* FF4 source-port — interpreted module for event_e8_prep_t2_t1_latch_loop_tai.
 * Ground truth: src/event_e8_prep_t2_t1_latch_loop_tai.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_prep_t2_t1_latch_loop_tai(void)
{
    /* event: 801976E8 prep; t2/t1 latch loop; 80197608 tail. */
    func_801976E8();
    for (;;) {
        /* t2/t1 latch */
        if (io_just() == 0)
            break;
    }
    func_80197608();
    return;
}
