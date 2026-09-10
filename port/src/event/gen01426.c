/* FF4 source-port — interpreted module for battle_anim_d8_spin_loops_l182450.
 * Ground truth: src/battle_anim_d8_spin_loops_l182450.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_d8_spin_loops_l182450(void)
{
    /* battle anim: 801808D8 spin loops (L182450/L18249C) with
       80194394 rows. */
    do {
        func_801808D8();
    } while (io_just() != 0);
    cb_slot15();
    do {
        func_801808D8();
    } while (io_just() != 0);
    return;
}
