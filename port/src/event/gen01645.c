/* FF4 source-port — interpreted module for battle_anim_twin_v0_spin_l180dbc_t.
 * Ground truth: src/battle_anim_twin_v0_spin_l180dbc_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_twin_v0_spin_l180dbc_t(void)
{
    /* battle anim (twin): v0 spin (L180DBC) then 80194640. */
L180D9C:
L180DBC:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    cb_slot2();
    return;
}
