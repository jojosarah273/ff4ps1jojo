/* FF4 source-port — interpreted module for battle_anim_wide_v0_gate_ladder_l1.
 * Ground truth: src/battle_anim_wide_v0_gate_ladder_l1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_wide_v0_gate_ladder_l1(void)
{
    /* battle anim: wide v0 gate ladder (L17EB3C..L17EF48) then
       the 2x 80194640 + spin + 80194640 close (L17F01C). */
    /* v0 gates -> L17EB88/L17EB3C/L17EC04/L17ED50/L17EEFC */
    cb_slot2();
    cb_slot2();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    return;
}
