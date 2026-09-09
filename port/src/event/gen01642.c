/* FF4 source-port — interpreted module for battle_anim_rows_b.
 * Ground truth: src/battle_anim_rows_b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_rows_b(void)
{
    /* battle anim: s4 gates; 801808D8/80180504/80180414/80180314
       row loop L1816CC; closes 801971A8/8017F9FC. */
    /* s4/v0 latch -> L1816AC */
    func_801808D8();
    func_80180504();
    func_80180414();
    func_80180314();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    anim_pack_word();
    /* s4/s6 latch -> L181780 */
    goto L1817B8;
L18179C:
    anim_pack_word();
L1817B8:
    anim_cmd_tail();
    return;
}
