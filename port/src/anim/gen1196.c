/* FF4 source-port — interpreted module for battle_anim_x_rows_with_v0_gates_t.
 * Ground truth: src/battle_anim_x_rows_with_v0_gates_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_x_rows_with_v0_gates_t(void)
{
    /* battle anim: 4x 80197208 rows with v0 gates + tail gates. */
    if (io_just() == 0)
        goto L17CD3C;
    goto L17CD48;
L17CD3C:
    tex_link_packets();
    if (io_just() != 0)
        goto L17CD98;
    tex_link_packets();
    tex_link_packets();
    if (io_just() != 0)
        goto L17CE50;
    tex_link_packets();
    return;
L17CD48:
    tex_link_packets();
    goto L17CDA4;
L17CD98:
    tex_link_packets();
    return;
L17CDA4:
    tex_link_packets();
    if (io_just() != 0)
        goto L17CE50;
    tex_link_packets();
    return;
L17CE50:
    tex_link_packets();
    return;
}
