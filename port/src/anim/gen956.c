/* FF4 source-port — interpreted module for shop_stat_block_called_by_the_e8_f.
 * Ground truth: src/shop_stat_block_called_by_the_e8_f.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_stat_block_called_by_the_e8_f(void)
{
    /* shop stat block (called by the 801721E8/80171F90 family): 0x15
       window + 3B04 statue reads; the a3/t1 register gates choose
       among the stat display modes (all routes end at L174324 with
       9448). The heavy content lives in the register-selected blocks
       (80174F0C row + 3C3C/3B04/3B9C reads); the C below documents
       the guaranteed tail. */
    cell_state_of();
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    /* a3/t1 + v0 gates -> L173F64 / L174030 / L1740DC / L17417C
       mode branches */
    fn_1x74f0c();
    /* v0 gates -> L17420C / L174284 modes */
    row_pad();
    return;
}
