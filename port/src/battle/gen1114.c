/* FF4 source-port — interpreted module for func_80140A5C.
 * Ground truth: src/func_80140A5C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80140A5C(void)
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
