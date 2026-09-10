/* FF4 source-port — interpreted module for event_v0_gate_a9dc_ab08_rows.
 * Ground truth: src/event_v0_gate_a9dc_ab08_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gate_a9dc_ab08_rows(void)
{
    /* event: v0 gate; 8018A9DC/8018AB08 rows. */
    if (io_just() == 0)
        goto L18CA74;
    event_v0_gate_picks_a75c_vs_a438_r();
    event_cache_quantizes_a1_down_to_t();
    return;
L18CA74:
    event_v0_gate_picks_a75c_vs_a438_r();
    event_cache_quantizes_a1_down_to_t();
    return;
}
