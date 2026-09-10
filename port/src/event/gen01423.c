/* FF4 source-port — interpreted module for battle_v0_gates_c_row_at_l187590.
 * Ground truth: src/battle_v0_gates_c_row_at_l187590.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_v0_gates_c_row_at_l187590(void)
{
    /* battle: v0 gates; 8018767C row at L187590. */
    if (io_just() != 0)
        goto L187590;
    goto L187560;
    func_8018767C();
    return;
L187590:
    func_8018767C();
    return;
L187560:
    if (io_just() != 0)
        goto L187590;
    func_8018767C();
    return;
}
