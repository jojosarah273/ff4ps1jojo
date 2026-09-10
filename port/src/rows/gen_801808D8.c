/* FF4 source-port — interpreted module for battle_anim_fp_regcmp_spin_loops_d.
 * Ground truth: src/battle_anim_fp_regcmp_spin_loops_d.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_fp_regcmp_spin_loops_d(void)
{
    /* battle anim: fp regcmp spin loops; 801824D8 gates route
       801805F8; 80194640 closes via L180A60. */
    /* L180958/L1809F8 fp latches, spin loops L1809D4/L180A30 */
    if (x_byte_bit_gather_rotates_four_inp() != 0)
        goto L180AA4;
    func_801805F8();
L180B5C:
    cb_slot2();
    return;
L180AA4:
    /* gates -> L180ACC / L180B04 */
    goto L180B04;
L180ACC:
    goto L180B04;
L180B04:
    if (x_byte_bit_gather_rotates_four_inp() != 0)
        goto L180AA4;
    func_801805F8();
    goto L180B5C;
}
