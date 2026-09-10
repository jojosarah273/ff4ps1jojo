/* FF4 source-port — interpreted module for event_v0_gate_on_c3e8_ba38_b838_ro.
 * Ground truth: src/event_v0_gate_on_c3e8_ba38_b838_ro.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gate_on_c3e8_ba38_b838_ro(void)
{
    /* event: v0 gate on 8018C3E8(1); 8018BA38/8018B838(1) rows. */
    if (io_just() != 0)
        goto L189CA8;
    func_8018C3E8(1);
L189CA8:
    event_b9a8_gate_at_l18bab8_wide_a1();
    func_8018B838(1);
    return;
}
