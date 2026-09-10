/* FF4 source-port — interpreted module for event_s5_v0_latch_a75c_rows_return.
 * Ground truth: src/event_s5_v0_latch_a75c_rows_return.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_s5_v0_latch_a75c_rows_return(void)
{
    /* event: s5/v0 latch; 8018A75C(2/1/3) + 80197678 rows; returns
       at L18C988. */
    /* s5/v0 latch -> L18C8A4 */
    event_drive(2);
    event_drive();
    event_drive(1);
    event_drive(3);
    register_only_stub_xc_see_asm_for_1976();
    if (io_just() == 0)
        goto L18C988;
    return;
L18C988:
    return;
}
