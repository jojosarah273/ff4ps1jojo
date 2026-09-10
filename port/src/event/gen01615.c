/* FF4 source-port — interpreted module for battle_anim_gate_a.
 * Ground truth: src/battle_anim_gate_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_gate_a(void)
{
    /* battle anim: 801943FC gates -> L1947A0 / L194758. */
    if (func_801943FC() == 0)
        goto L1947A0;
    if (io_just() != 0)
        goto L194758;
    return;
L194758:
    return;
L1947A0:
    return;
}
