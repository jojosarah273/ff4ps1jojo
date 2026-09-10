/* FF4 source-port — interpreted module for event_s6_gate_f0c8_rows_with_s2_v0.
 * Ground truth: src/event_s6_gate_f0c8_rows_with_s2_v0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_s6_gate_f0c8_rows_with_s2_v0(void)
{
    /* event: s6 gate; 80190004(1) + 8018F0C8/80191638/80190088
       rows with s2/v0 + v0 latches. */
    /* s6/v0 latch -> L18FFD8 */
    if (fn_1x90004(1) != 0)
        goto L18FE04;
    anim_reg_stub();
    goto L18FFDC;
L18FE04:
    if (io_just() != 0)
        goto L18FE2C;
    anim_reg_stub();
L18FE2C:
    if (io_just() == 0)
        goto L18FF88;
    play_time_splitter_x104_magic_mult();
    /* s2 latch -> L18FEC0/L18FEB0 */
    register_only_stub_xc_see_asm_for_1900();
    if (io_just() != 0)
        goto L18FF54;
    anim_reg_stub();
L18FF54:
    if (io_just() == 0)
        goto L18FF88;
    /* loop -> L18FE4C */
L18FF88:
    if (io_just() == 0)
        goto L18FFB0;
L18FFB0:
    if (io_just() != 0)
        goto L18FFDC;
    anim_reg_stub();
    return;
L18FFDC:
    return;
}
