/* FF4 source-port — interpreted module for battle_anim_v0_gates_spin_loop_clo.
 * Ground truth: src/battle_anim_v0_gates_spin_loop_clo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_gates_spin_loop_clo(void)
{
    /* battle anim: v0 gates; 80195120 + 80197208 spin loop; closes
       with 801971A8/801973B8/80197208. */
    if (io_just() != 0)
        goto L17CEE0;
L17CEE0:
    /* v0 gates -> L17D054 / L17CF54 */
    func_80195120();
    if (io_just() != 0)
        goto L17D000;
L17cfd4:
    for (;;) {
        tex_link_packets();
        if (io_just() != 0)
            continue;
        break;
    }
L17D000:
    anim_pack_word();
    anim_cmd_header();
    tex_link_packets();
    return;
L17D054:
    return;
}
