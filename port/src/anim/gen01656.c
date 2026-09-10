/* FF4 source-port — interpreted module for battle_anim_d8_preps_loop_l17815c.
 * Ground truth: src/battle_anim_d8_preps_loop_l17815c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_d8_preps_loop_l17815c(void)
{
    /* battle anim: 80197378/801972D8/80197308 preps; loop L17815C
       with 80197338 + s2/s7 regcmp branch to 801972D8; 80197398
       closes. */
    fn_1x97378();
    fn_1x972d8();
    fn_1x97308();
L17815c:
    for (;;) {
        fn_1x97338();
        /* s2/s7 latch -> L178188 */
        fn_1x972d8();
        if (io_just() != 0)
            continue;
        break;
    }
    fn_1x97398();
    return;
}
