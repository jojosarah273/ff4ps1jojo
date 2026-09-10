/* FF4 source-port — interpreted module for battle_anim_d8_spin_row.
 * Ground truth: src/battle_anim_d8_spin_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_d8_spin_row(void)
{
    /* battle anim: 801824D8 spin; 80194640 row. */
    do {
        x_byte_bit_gather_rotates_four_inp();
    } while (io_just() != 0);
    cb_slot2();
    return;
}
