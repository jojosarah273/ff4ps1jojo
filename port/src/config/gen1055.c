/* FF4 source-port — interpreted module for func_8013F124.
 * Ground truth: src/func_8013F124.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013F124(void)
{
    /* event: 3C3C/3B04/3A70 rows with a2/s0 + a2/a0 spin latches;
       closes 8013EFD8. */
    cell_state_of();
    cell_state_of();
    sep_a();
L13f1bc:
    for (;;) {
        func_800F3A70();
        cell_state_of();
        func_800F3A70();
        cell_state_of();
        /* a2/s0 + a2/v0 + a2/a0 latch loops */
    }
    func_8013EFD8();
    return;
}
