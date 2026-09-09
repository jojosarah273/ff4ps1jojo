/* FF4 source-port — interpreted module for func_801652FC.
 * Ground truth: src/func_801652FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801652FC(void)
{
    /* options status: 0xB5/0xB6 windows, 0xA6 row, 0xB1/0xAF/0xB0/0xB3
       cells, 80152BC4/80152224 rows; 53C0 gate (0x1000 text). */
    cell_put(0xB5);
    open_row(0xB6);
    row_prep(0x20);
    sep_a();
    row_read2(0xA6);
    cell_peek0(cell_state(0xB5));
    func_800F8274(0xB5);
    sep();
    row_prep_close();
    sep();
    row_page(0xB1);
    func_80152BC4();
    func_80152224();
    sep_a();
    cell_poke0(cell_state(0xB1));
    cell_put(0xAF);
    latch_cur();
    row_open_w0();
    cell_put(0xB0);
    row_prep(0x20);
    page(0xB5);
    func_800F6BE0(0x1000);
    cell_peek0(cell_state(0xAF));
    func_800F5520(cell_state(0xB3));
    if (io_go() == 0)
        goto L165414;
    row_read2(0xB3);
L165414:
    func_800F87DC(0x1000);
    sep();
    row_prep_close();
    return;
}
