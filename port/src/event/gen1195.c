/* FF4 source-port — interpreted module for battle_anim_bb4_e28_d64_c90_row_lo.
 * Ground truth: src/battle_anim_bb4_e28_d64_c90_row_lo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_bb4_e28_d64_c90_row_lo(void)
{
    /* battle anim: 80180BB4/80180E28/80180D64/80180C90 row loop
       L181180 on v0 gates; returns at L1811D0. */
    if (io_just() != 0)
        goto L18110C;
    goto L18110C;
L18110C:
    if (io_just() == 0)
        goto L1811D0;
    do {
        battle_anim_d8_spin_row();
        battle_anim_twin_v0_spin_l180e74_t();
        battle_anim_twin_v0_spin_l180dbc_t();
        battle_anim_twin_v0_spin_l180ce8_t();
        if (io_just() == 0)
            goto L1811D0;
    } while (io_just() != 0);
L1811D0:
    return;
}
