/* FF4 source-port — interpreted module for battle_cutscene_b9c_gate_rows_with.
 * Ground truth: src/battle_cutscene_b9c_gate_rows_with.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cutscene_b9c_gate_rows_with(void)
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
    battle_cutscene_driver_s2_v0_latch();
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
    battle_cutscene_driver_s2_v0_latch();
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
    battle_cutscene_driver_s2_v0_latch();
    return;
}
