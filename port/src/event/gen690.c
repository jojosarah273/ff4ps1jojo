/* FF4 source-port — interpreted module for func_80185AC8.
 * Ground truth: src/func_80185AC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80185AC8(void)
{
    /* battle cutscene: 3B9C gate rows with spins; 80185764 called
       3x (L185C70/L185D8C/L185EF4); returns at L185F04. */
    /* v1/v0 gate + v0 gate -> L185C80 */
    cell_peek_cur();
    cell_peek_cur();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    if (cell_peek_cur() != 0)
        goto L185C14;
    goto L185C70;
L185C14:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L185C70:
    func_80185764();
    return;
L185C80:
    if (io_just() == 0)
        goto L185D9C;
    cell_peek_cur();
    cell_peek_cur();
    cell_peek_cur();
    if (io_just() == 0)
        goto L185D8C;
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L185D8C:
    func_80185764();
    return;
L185D9C:
    cell_peek_cur();
    cell_peek_cur();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    if (cell_peek_cur() == 0)
        goto L185EF4;
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L185EF4:
    func_80185764();
    return;
}
