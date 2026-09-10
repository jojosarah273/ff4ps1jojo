/* FF4 source-port — interpreted module for battle_anim_spin_loop_l17e8cc_gate.
 * Ground truth: src/battle_anim_spin_loop_l17e8cc_gate.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_spin_loop_l17e8cc_gate(void)
{
    /* battle anim: 80195120 + 80197208 spin loop (L17E8CC); gates;
       returns at L17E90C. */
    if (io_just() != 0)
        goto L17E7D8;
L17E7D8:
    if (io_just() == 0)
        goto L17E90C;
    if (io_just() != 0)
        goto L17E84C;
    event_rows();
    if (io_just() == 0)
        goto L17E8F8;
L17E8CC:
    do {
        tex_link_packets();
    } while (io_just() != 0);
    return;
L17E84C:
    if (io_just() == 0)
        goto L17E898;
    goto L17E8AC;
L17E898:
    event_rows();
    return;
L17E8AC:
    event_rows();
    if (io_just() == 0)
        goto L17E8F8;
    tex_link_packets();
    goto L17E8CC;
L17E8F8:
    return;
L17E90C:
    return;
}
