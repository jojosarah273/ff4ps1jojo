/* FF4 source-port — interpreted module for battle_anim_d8_spin_loops_l181500.
 * Ground truth: src/battle_anim_d8_spin_loops_l181500.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_d8_spin_loops_l181500(void)
{
    /* battle anim: 801824D8 spin loops (L181500/L181578), 80194640
       closes. */
    do {
        x_byte_bit_gather_rotates_four_inp();
    } while (io_just() != 0);
    for (;;) {
        if (io_just() != 0)
            goto L181578;
        break;
    }
    cb_slot2();
    return;
L181578:
    do {
        x_byte_bit_gather_rotates_four_inp();
    } while (io_just() != 0);
    cb_slot2();
    return;
}
