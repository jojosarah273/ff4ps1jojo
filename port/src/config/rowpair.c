/* FF4 source-port — interpreted module for rows_u16_d44_d54_swap_chain_with_c.
 * Ground truth: src/rows_u16_d44_d54_swap_chain_with_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void rows_u16_d44_d54_swap_chain_with_c(void)
{
    /* rows: u16 D44<->D54 swap chain with 5410/971C. */
    row_prep(0x20);
    D_8019ED44[0] = D_8019ED54[0];
    sep_a();
    cell_pos_fwd(0x80);
    D_8019ED54[0] = D_8019ED44[0];
    sep();
    row_prep_close();
}
