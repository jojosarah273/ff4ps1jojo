/* FF4 source-port — interpreted module for battle_anim_e8_fc_preps_v1_v0_gate.
 * Ground truth: src/battle_anim_e8_fc_preps_v1_v0_gate.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_e8_fc_preps_v1_v0_gate(void)
{
    /* battle anim: 80194394/801928E8/801942FC preps; v1/v0 gate picks
       8008CB5C/800888C0 rows; 801792D0 closes. */
    cb_slot15();
    event_spin_wait();
    func_801942FC();
    /* v1/v0 latch -> L179438 */
    if (func_801792D0() != 0)
        func_8008CB5C();
    else
        func_800888C0();
    if (io_press(1) != 0)
        func_801942FC();
    cb_slot15();
    func_801792D0();
    return;
}
