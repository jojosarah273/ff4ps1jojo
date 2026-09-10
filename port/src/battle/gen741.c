/* FF4 source-port — interpreted module for fn_1x009e8.
 * Ground truth: src/fn_1x009e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x009e8(void)
{
    shop_rows_x8fc_x1701_texts_gate_pi();
    latch(1);
    do {
        poll_pair_cur();
        if (poll_go(2) != 0)
            break;
        row_sel_cell_cur();
    } while (1);
    cell_put(6);
    txt_cell(0x12A0);
    cell_tick_and(6);
    cell_put(7);
    if (sel(0x202) == 0) {
        txt_cell(0x12A0);
        sep_a();
        cell_poke0(cell_state(6));
        cell_draw(0x12A0);
    }
    row_page(7);
}
