/* FF4 source-port — interpreted module for event_f538_d8_a8_rows_spin_l1889b8.
 * Ground truth: src/event_f538_d8_a8_rows_spin_l1889b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_f538_d8_a8_rows_spin_l1889b8(void)
{
    /* event: 8018F538/801917D8/80191838/801928A8/80191858 rows;
       spin L1889B8; 80191878(0xE) closes. */
    if (io_just() == 0)
        goto L188968;
    event_f538_d8_a8_rows_spin_l1889b8();
    return;
L188968:
    event_f5c8_v0_v1_s0_v0_latch_loop();
    fn_1x917d8();
    fn_1x91838();
    fn_1x928a8();
    fn_1x91858();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    event_b44_rows_on_s3_t0_s0_fp(0xE);
    return;
}
