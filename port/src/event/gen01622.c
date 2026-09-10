/* FF4 source-port — interpreted module for event_e2c8_e448_e4b8_gate_abe8_tai.
 * Ground truth: src/event_e2c8_e448_e4b8_gate_abe8_tai.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e2c8_e448_e4b8_gate_abe8_tai(void)
{
    /* event: 8018E2C8/8018E448/8018E4B8 gate; 8018ABE8(1) tail. */
    event_a0_v0_latch_chain_l18e2e0_l1();
    func_8018E448();
    if (func_8018E4B8() == 0)
        goto L18E060;
    func_8018ABE8(1);
L18E060:
    if (io_just() == 0)
        goto L18E0A0;
L18E0A0:
    return;
}
