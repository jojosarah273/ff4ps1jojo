/* FF4 source-port — interpreted module for func_80166C50.
 * Ground truth: src/func_80166C50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166C50(void)
{
    row_open();
    func_80166CA8();
    txt_cell(61381);
    sep_a();
    cell_poke0(cell_state(0));
    cell_draw(61381);
    row_close();
}
