/* FF4 source-port — interpreted module for event_e8_x2_f0_rows_gate_tail_retu.
 * Ground truth: src/event_e8_x2_f0_rows_gate_tail_retu.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_x2_f0_rows_gate_tail_retu(void)
{
    /* event: 801928E8 x2 + 801920F0(1) rows; 80191818 gate tail;
       returns at L1926F8. */
    event_spin_wait();
    event_spin_wait();
    battle_command_maps_preps_with_beq(1);
    if (io_just() != 0)
        goto L1926AC;
    fn_1x91818();
    return;
L1926AC:
    if (io_just() == 0)
        goto L1926CC;
    fn_1x91818();
    return;
L1926CC:
    return;
L1926F8:
    return;
}
