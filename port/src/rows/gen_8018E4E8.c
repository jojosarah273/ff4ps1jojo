/* FF4 source-port — interpreted module for event_gate_ladders_with_jr_v0_sub.
 * Ground truth: src/event_gate_ladders_with_jr_v0_sub.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_gate_ladders_with_jr_v0_sub(void)
{
    /* event: gate ladders with jr-$v0 sub-dispatches (L18E5D0/
       L18E6CC); 8018EAE8 row; 2x 8018AB08 rows (L18E790/L18E7B0);
       returns at L18E814+. */
    /* gates -> L18E520/L18E564/L18E580/L18E5C0/L18E6A0 */
    func_8018EAE8();
    /* jr $v0 :: L18E658 slots */
    event_cache_quantizes_a1_down_to_t();
    event_cache_quantizes_a1_down_to_t();
    return;
}
