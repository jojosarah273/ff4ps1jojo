/* FF4 source-port — interpreted module for battle_anim_v0_gates_route_b8_d8_r.
 * Ground truth: src/battle_anim_v0_gates_route_b8_d8_r.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_v0_gates_route_b8_d8_r(void)
{
    /* battle anim: v0 gates route 801973B8/80197398/801972D8 rows
       and the 80197358 spin loop L1938A8. */
    if (io_just() != 0)
        goto L1936C0;
    return;
L1936C0:
    /* gate -> L193704 */
    anim_cmd_header();
    fn_1x97398();
    fn_1x972d8();
    for (;;) {
        fn_1x97358();
        if (io_just() != 0)
            continue;
        break;
    }
    return;
}
