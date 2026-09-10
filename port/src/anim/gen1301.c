/* FF4 source-port — interpreted module for battle_anim_v0_v1_gate_tree_row_at.
 * Ground truth: src/battle_anim_v0_v1_gate_tree_row_at.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_v1_gate_tree_row_at(void)
{
    /* battle anim: v0/v1 gate tree; 80197208 row at L17A17C. */
    if (io_just() != 0)
        goto L17A0A0;
    goto L17A1D8;
L17A0A0:
    if (io_just() == 0)
        goto L17A1D8;
    /* v0/v1 latch -> L17A198; v0 gates -> L17A148/L17A17C */
L17A148:
    if (io_just() == 0)
        goto L17A174;
    tex_link_packets();
    return;
L17A174:
    tex_link_packets();
L17A198:
    /* v0/v1 latch loop -> L17A0D4 */
    return;
L17A1D8:
    return;
}
