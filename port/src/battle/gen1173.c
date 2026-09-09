/* FF4 source-port — interpreted module for rows_swap44_54.
 * Ground truth: src/rows_swap44_54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void rows_swap44_54(void)
{
    /* rows: u16 D44<->D54 swap chain with 5410/6558(0). */
    row_prep(0x20);
    D_8019ED44[0] = D_8019ED54[0];
    sep_a();
    cell_pos_fwd(0x40);
    D_8019ED54[0] = D_8019ED44[0];
    row_sync2(0);
    row_prep_close();
}
