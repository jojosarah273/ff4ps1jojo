/* FF4 source-port — interpreted module for battle_dispatch_v0_v1_v0_gates_pic.
 * Ground truth: src/battle_dispatch_v0_v1_v0_gates_pic.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_dispatch_v0_v1_v0_gates_pic(void)
{
    /* battle dispatch: v0 + v1/v0 gates pick 80106D6C / 80071D4C /
       8016CA94 rows. */
    if (io_just() == 0)
        goto L106D5C;
    /* v1/v0 gate -> L106D44 / L106D20 */
    fn_1x06d6c();
    return;
L106D20:
    fn_1x06d6c();
    return;
L106D44:
    func_80071D4C();
    return;
L106D54:
    fn_1x6ca94();
    return;
L106D5C:
    return;
}
