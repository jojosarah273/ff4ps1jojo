/* FF4 source-port — interpreted module for battle_anim_jr_a0_dispatch_gate_tr.
 * Ground truth: src/battle_anim_jr_a0_dispatch_gate_tr.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_jr_a0_dispatch_gate_tr(void)
{
    /* battle anim: jr-$a0 dispatch; gate tree with 80179FBC row
       (L17A540), 80197208 + 8017CCB0 rows (L17A6D8/L17A8A4);
       returns L17A908. */
    if (io_just() == 0)
        goto L17A2BC;
    goto L17A2BC;
L17A2BC:
    /* jr-$a0 dispatch at L17A2C0 -> L17A380/L17A390/L17A3D0 */
    /* t0/v0 + v1/v0 latches -> L17A43C/L17A480/L17A4EC */
    battle_anim_v0_v1_gate_tree_row_at();
    goto L17A908;
L17A540:
    /* v0 gate -> L17A5D4 / L17A908 */
    tex_link_packets();
    /* v0/v1 latch -> L17A714 */
    tex_link_packets();
    /* a3/v0 latch -> L17A8A4 */
    battle_anim_x_rows_with_v0_gates_t();
    return;
L17A908:
    return;
}
