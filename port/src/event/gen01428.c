/* FF4 source-port — interpreted module for battle_anim_d8_spin_loops_l181e04.
 * Ground truth: src/battle_anim_d8_spin_loops_l181e04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_d8_spin_loops_l181e04(void)
{
    /* battle anim: 801824D8 spin loops L181E04/L181FF4 with
       80194640 rows; returns at L1820CC. */
    for (;;) {
        if (x_byte_bit_gather_rotates_four_inp() != 0)
            continue;
        break;
    }
    if (io_just() == 0)
        goto L181F60;
    cb_slot2();
L181F60:
    if (io_just() == 0)
        goto L1820CC;
    for (;;) {
        if (x_byte_bit_gather_rotates_four_inp() != 0)
            continue;
        break;
    }
    cb_slot2();
L1820CC:
    return;
}
