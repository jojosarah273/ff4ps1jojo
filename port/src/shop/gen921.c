/* FF4 source-port — interpreted module for fn_1x606d4.
 * Ground truth: src/fn_1x606d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
extern u16 *D_8019ED54;
void fn_1x606d4(void)
{
    row_page(0xCE);
    *D_8019ED58 = *D_8019ED44;
    row_page(0xCD);
    row_read(0x7F);
    *D_8019ED54 = *D_8019ED44;
    latch(0);
    sep_b();
    do {
        cell_0xf7ee8();
        cell_flags_pack3();
        poll_pair_cur();
    } while (poll_go(0x8080) != 0);
    cell_draw(0x3883);
}
