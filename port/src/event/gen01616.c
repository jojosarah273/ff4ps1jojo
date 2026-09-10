/* FF4 source-port — interpreted module for battle_anim_v1_v0_gate_tree_b8_row.
 * Ground truth: src/battle_anim_v1_v0_gate_tree_b8_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v1_v0_gate_tree_b8_row(void)
{
    /* battle anim: v1/v0 gate tree; 801972B8/80197208 rows;
       returns at L193C10. */
    if (io_just() != 0)
        goto L1939B8;
    goto L193C10;
L1939B8:
    fn_1x972b8();
    /* gate tree -> L193A50/L193AB8/L193B44/L193B5C */
    tex_link_packets();
    fn_1x972b8();
    return;
L193C10:
    return;
}
