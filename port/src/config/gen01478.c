/* FF4 source-port — interpreted module for config_rows_x1a02_text_x202_cell_g.
 * Ground truth: src/config_rows_x1a02_text_x202_cell_g.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_x1a02_text_x202_cell_g(void)
{
    /* config rows: 0x1A02 text, 0x202 cell gate; 8012C250 vs
       8012CEA8 rows. */
    txt_set(0x1A02);
    if (gate(0x202) != 0)
        goto L12CCA4;
    config_rows_x1b3c_x1b3b_x1440_text();
    return;
L12CCA4:
    /* a0/v1 + a0/v0 latch tree -> L12CCD4/L12CCF0/L12CCF8 */
    fn_1x2cea8();
    return;
L12CD5C:
    return;
}
