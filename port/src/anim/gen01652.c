/* FF4 source-port — interpreted module for battle_anim_dispatch_a0_v0_v0_gate.
 * Ground truth: src/battle_anim_dispatch_a0_v0_v0_gate.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_dispatch_a0_v0_v0_gate(void)
{
    /* battle anim dispatch: a0/v0 + v0 gate tree routes
       8017D7D8 / 8017D898 / 8017D980 / 8017DA64 rows. */
    /* a0/v0 latch -> L17DBDC */
    if (io_just() != 0)
        goto L17DBAC;
    battle_sprite_blit_copies_width_ro();
    return;
L17DBAC:
    battle_sprite_blit_plane_variant_m();
    return;
L17DBDC:
    battle_sprite_blit_plane_variant_m();
    return;
L17DBF4:
    battle_sprite_blit_plane_variant_s();
    return;
L17DC0C:
    battle_sprite_blit_stagger_variant();
    return;
}
