/* FF4 source-port — interpreted module for config_rows_x1a04_x1a03_x1b19_x93.
 * Ground truth: src/config_rows_x1a04_x1a03_x1b19_x93.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_x1a04_x1a03_x1b19_x93(void)
{
    /* config rows: 0x1A04/0x1A03/0x1B19/0x93/0x1BA5/0x1A65 texts;
       gate 4120(2) picks 8012CC4C. */
    txt_set(0x1A04);
    row_read(0x80);
    if (sel(2) == 0)
        goto L12CDA4;
    fn_1x2cc4c();
    return;
L12CDA4:
    latch(7);
    txt_draw(0x1A03);
    cell_clear_bank(0x1B19);
    page(0x93);
    label(0x1BA5);
    page_open(0x1A65);
    return;
}
