/* FF4 source-port — interpreted module for battle_anim_v1_v0_v0_gates_rows.
 * Ground truth: src/battle_anim_v1_v0_v0_gates_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v1_v0_v0_gates_rows(void)
{
    /* battle anim: v1/v0 + v0 gates; 80197208 rows. */
    if (io_just() != 0)
        goto L182D50;
    if (io_just() != 0)
        goto L182D50;
    /* v0/v1 latch -> L182D50 */
    tex_link_packets();
    goto L182DCC;
L182D50:
    if (io_just() != 0)
        goto L182DCC;
    tex_link_packets();
    return;
L182DCC:
    return;
}
