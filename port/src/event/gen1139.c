/* FF4 source-port — interpreted module for battle_anim_fsm_v0_t1_v0_gates_rou.
 * Ground truth: src/battle_anim_fsm_v0_t1_v0_gates_rou.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_fsm_v0_t1_v0_gates_rou(void)
{
    /* battle anim FSM: v0 + t1/v0 gates route the 80182E54 spin
       loops (L183354/L183368 or L183504/L183518); L183650 branch
       runs 80183048; tail gates to L183A38. */
    if (io_just() == 0)
        goto L183650;
    /* t1/v0 latch -> L183484 */
L183354:
    for (;;) {
        battle_anim_v0_t0_v0_gates_a8_tail();
        if (io_just() != 0)
            goto L183368;
        if (io_just() != 0)
            goto L183354;
        break;
    }
L183484:
L183504:
    for (;;) {
        battle_anim_v0_t0_v0_gates_a8_tail();
        if (io_just() != 0)
            goto L183518;
        if (io_just() != 0)
            goto L183504;
        break;
    }
    goto L183A5C;
L183650:
    battle_anim_fb8_preps_then_x_ddc_e();
    goto L183A38;
L183A38:
    /* v0 gates -> L183774/L1838A0/80183048 */
    return;
L183A5C:
    return;
L183368:
    goto L183354;
L183518:
    goto L183504;
}
