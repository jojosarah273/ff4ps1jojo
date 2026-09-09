/* FF4 source-port — interpreted module for func_80166BF8.
 * Ground truth: src/func_80166BF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166BF8(void)
{
    row_open();
    func_80166CA8();
    txt_cell(61381);
    sep_b();
    cell_tick_sub(cell_state(0));
    cell_draw(61381);
    row_close();
}
