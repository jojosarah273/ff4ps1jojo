/* FF4 source-port — interpreted module for func_80147AA8.
 * Ground truth: src/func_80147AA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80147AA8(void)
{
    /* battle rows: 3C3C/3B04(0x2000)x2/3B9C(0xF0) gates; spins
       L147B14/L147B38; 9330 + 80146A44 row; 3B9C/95A0 then the
       80147FA0/801466E0 gated block. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    cell_peek_cur();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    /* v0 gate -> L147F78 */
    row_open();
    if (func_80146A44() == 0)
        goto L147BD4;
L147BD4:
    /* gate tree L147BE8..L147E94 -> 3B9C */
    cell_peek_cur();
L147EA8:
    row_close();
    /* gates -> L147F54/L147F68 */
    if (func_80147FA0() == 0)
        goto L147F68;
    if (io_just() == 0)
        goto L147F68;
L147F54:
    func_801466E0();
    return;
L147F68:
    return;
}
