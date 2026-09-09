/* FF4 source-port — interpreted module for func_80148D58.
 * Ground truth: src/func_80148D58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80148D58(void)
{
    /* battle rows (twin): two 3F38(3B04) pair reads; linear. */
    func_800F9200();
    sep_a();
    cell_poke0(cell_state_of());
    cell_draw_cur();
    row_close2();
    sep_a();
    cell_poke0(cell_state_of());
    cell_draw_cur();
    return;
}
