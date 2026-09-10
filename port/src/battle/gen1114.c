/* FF4 source-port — interpreted module for fn_1x40a5c.
 * Ground truth: src/fn_1x40a5c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void fn_1x40a5c(void)
{
    sep();
    *D_8019ED54 = *D_8019ED44;
    poll_spin();
    do {
        cell_draw(0xF2B4);
        cell_step();
        poll_t(8);
    } while (io_just() == 0);
}
