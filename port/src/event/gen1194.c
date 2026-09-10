/* FF4 source-port — interpreted module for battle_anim_x_a8_spin_loops_plus_a.
 * Ground truth: src/battle_anim_x_a8_spin_loops_plus_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_x_a8_spin_loops_plus_a(void)
{
    /* battle anim: 3x 801971A8(1)/80197208 spin loops plus a final
       801971A8(1)/80197208 pair. */
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    anim_pack_word(1);
    tex_link_packets();
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    anim_pack_word(1);
    tex_link_packets();
    return;
}
