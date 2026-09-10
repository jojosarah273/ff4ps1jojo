/* FF4 source-port — interpreted module for battle_anim_s5_v0_s5_s6_latches_d8.
 * Ground truth: src/battle_anim_s5_v0_s5_s6_latches_d8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_s5_v0_s5_s6_latches_d8(void)
{
    /* battle anim: s5/v0 + s5/s6 latches; 801808D8 row loop;
       801817EC then 801971A8/8017F9FC closes. */
    /* s5/v0 latch -> L181CBC */
    do {
        battle_anim_fp_regcmp_spin_loops_d();
    } while (io_just() != 0);
    battle_anim_t2_v0_regcmp_spin_loop();
    anim_pack_word(1);
    /* s5/s6 latch -> L181D40 */
    goto L181D74;
L181D58:
    anim_pack_word(1);
    goto L181D74;
L181D74:
    anim_cmd_tail();
    return;
}
