/* FF4 source-port — interpreted module for func_801009E8.
 * Ground truth: src/func_801009E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801009E8(void)
{
    func_80100A98();
    latch(1);
    do {
        poll_pair_cur();
        if (poll_go(2) != 0)
            break;
        row_sel_cell_cur();
    } while (1);
    cell_put(6);
    txt_cell(0x12A0);
    func_800F4370(6);
    cell_put(7);
    if (sel(0x202) == 0) {
        txt_cell(0x12A0);
        sep_a();
        cell_poke0(cell_state(6));
        cell_draw(0x12A0);
    }
    row_page(7);
}
