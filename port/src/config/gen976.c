/* FF4 source-port — interpreted module for fn_1x2b050.
 * Ground truth: src/fn_1x2b050.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x2b050(void)
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
