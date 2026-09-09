/* FF4 source-port — interpreted module for func_8013D3B0.
 * Ground truth: src/func_8013D3B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013D3B0(void)
{
    cell_cursor_dec();
    row_sync();
    latch(16);
    battle_rows_twin();
    func_80143D14();
    sep_a();
    cell_poke0(cell_state(61721));
    cell_put(2);
    row_done();
    row_close2();
    func_8013D4C8();
}
