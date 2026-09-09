/* FF4 source-port — interpreted module for func_80172998.
 * Ground truth: src/func_80172998.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80172998(void)
{
    cell_cursor_read();
    func_800F54B8();
    cell_poke0(cell_state(cell_bank_sel(45)));
    cell_cursor_read();
}
