/* FF4 source-port — interpreted module for func_800FD404.
 * Ground truth: src/func_800FD404.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FD404(void)
{
    row_page(162);
    row_read(32);
    row_sel_cell_cur();
    cell_put(6);
    txt_set(4059);
    row_read(64);
    func_800F7864();
    func_800F78C4(cell_state(6));
    cell_put(6);
    txt_set(4059);
    row_read(143);
    func_800F78C4(cell_state(6));
    txt_draw(6146);
}
