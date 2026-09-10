/* FF4 source-port — interpreted module for battle_anim_gates_v0_spin_l1853ac.
 * Ground truth: src/battle_anim_gates_v0_spin_l1853ac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_gates_v0_spin_l1853ac(void)
{
    /* battle anim: 80197248 gates (v0 spin L1853AC); v1/a0 latch
       rows; returns at L18548C. */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    func_80197248();
    /* v1/a0 latch -> L18547C; v1/v0 gate -> L185480 */
    func_80197248();
    return;
L18547C:
    func_80197248();
    return;
L185480:
    func_80197248();
    return;
}
