/* FF4 source-port — interpreted module for fn_1x21f14.
 * Ground truth: src/fn_1x21f14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void fn_1x21f14(void)
{
    do {
        cell_draw(0);
        *D_8019ED54 = (u16)(*D_8019ED54 + 2);
        poll_pair(0x1D);
    } while (poll_go(0x202) != 0);
}
