/* FF4 source-port — interpreted module for func_80121C4C.
 * Ground truth: src/func_80121C4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80121C4C(void)
{
    /* rows: 0x43/0x29 windows with 3F94(3C3C) reads; linear. */
    stat_sync();
    latch_cur();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x43));
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    return;
}
