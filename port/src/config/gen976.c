/* FF4 source-port — interpreted module for func_8012B050.
 * Ground truth: src/func_8012B050.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012B050(void)
{
    txt_set(0x1B1A);
    sep_a();
    cell_poke0(cell_state(0x1B23));
    txt_draw(0x1B25);
    txt_set(0x1B22);
    txt_draw(0x1B24);
    latch(1);
    txt_draw(0x1B19);
}
