/* FF4 source-port — interpreted module for battle_v0_gates_cd0_row_when_nonze.
 * Ground truth: src/battle_v0_gates_cd0_row_when_nonze.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_v0_gates_cd0_row_when_nonze(void)
{
    /* battle: v0 gates; 80187CD0 row when nonzero. */
    if (io_just() != 0)
        goto L187D50;
    func_80187CD0();
    return;
L187D50:
    if (io_just() != 0)
        goto L187D68;
    func_80187CD0();
    return;
L187D68:
    return;
}
