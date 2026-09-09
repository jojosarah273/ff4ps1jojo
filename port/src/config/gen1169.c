/* FF4 source-port — interpreted module for func_80121E0C.
 * Ground truth: src/func_80121E0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void func_80121E0C(void)
{
    do {
        cell_draw(0);
        *D_8019ED54 = (u16)(*D_8019ED54 + 2);
        poll_pair(0x1D);
    } while (poll_go(0x202) != 0);
    latch(0xFB);
    cell_draw(0);
}
