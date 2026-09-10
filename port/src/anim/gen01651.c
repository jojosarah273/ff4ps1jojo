/* FF4 source-port — interpreted module for battle_anim_dispatch_twin_a0_v0_v0.
 * Ground truth: src/battle_anim_dispatch_twin_a0_v0_v0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_dispatch_twin_a0_v0_v0(void)
{
    /* battle anim dispatch (twin): a0/v0 + v0 gates route
       8017D7D8 / 8017DD08 / 8017D980 / 8017DF20 rows. */
    if (io_just() != 0)
        goto L17DC8C;
    battle_sprite_blit_copies_width_ro();
    return;
L17DC8C:
    fn_1x7dd08();
    return;
L17DCBC:
    fn_1x7dd08();
    return;
L17DCD4:
    battle_sprite_blit_plane_variant_s();
    return;
L17DCEC:
    battle_tile_blit_x300_pattern_vari();
    return;
}
