/* FF4 source-port — interpreted module for battle_anim_x_b8_rows_v0_gate_x.
 * Ground truth: src/battle_anim_x_b8_rows_v0_gate_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_x_b8_rows_v0_gate_x(void)
{
    /* battle anim: 6x 801973B8 rows, v0 gate, 8x 801973B8 tail. */
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    if (io_just() == 0)
        goto L17F78C;
    anim_cmd_header();
    goto L17F7A8;
L17F78C:
    anim_cmd_header();
L17F7A8:
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    return;
}
