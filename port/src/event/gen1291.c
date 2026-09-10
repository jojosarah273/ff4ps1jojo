/* FF4 source-port — interpreted module for battle_anim_spin_loops_l1827a8_l18.
 * Ground truth: src/battle_anim_spin_loops_l1827a8_l18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_spin_loops_l1827a8_l18(void)
{
    /* battle anim: 80197208 spin loops (L1827A8/L1828F4/L182A20)
       gated by v1/v0 + a0/v0 latches; returns at L182AC0. */
    /* v0 gate -> L1827A8 loop / L182844 */
    for (;;) {
        tex_link_packets();
        if (io_just() != 0)
            continue;
        break;
    }
    /* v1/v0 gate -> L1829CC / L182ABC */
    for (;;) {
        tex_link_packets();
        if (io_just() != 0)
            continue;
        break;
    }
    /* L1829F8 branch -> L182A20 loop */
    for (;;) {
        tex_link_packets();
        if (io_just() != 0)
            continue;
        break;
    }
    return;
}
