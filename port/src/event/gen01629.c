/* FF4 source-port — interpreted module for event_v1_v0_gate_e8_acf8_a8_f8.
 * Ground truth: src/event_v1_v0_gate_e8_acf8_a8_f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v1_v0_gate_e8_acf8_a8_f8(void)
{
    /* event: v1/v0 gate; 801976E8/8018ACF8/80197668/801976A8/
       801976F8 rows. */
    if (io_just() != 0)
        goto L18ADAC;
    func_801976E8();
    func_8018ACF8();
    func_80197668();
    func_801976A8();
    func_801976F8();
    return;
L18ADAC:
    return;
}
