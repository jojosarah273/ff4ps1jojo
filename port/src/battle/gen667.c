/* FF4 source-port — interpreted module for func_80140350.
 * Ground truth: src/func_80140350.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80140350(void)
{
    /* battle rows: 0x2A window, 3F94(3C3C) reads; linear cell fill. */
    row_sync();
    row_info();
    row_prep(0x20);
    cell_put_hi9(0x2A);
    sep_a();
    cell_peek0(cell_state_of());
    row_read2(0x2A);
    sep_a();
    cell_peek0(cell_state_of());
    sep();
    row_prep_close();
    cell_push_c8();
    cell_pull_c8();
    cell_pull_c8();
    row_done();
    return;
}
