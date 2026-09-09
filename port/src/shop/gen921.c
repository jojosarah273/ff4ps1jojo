/* FF4 source-port — interpreted module for func_801606D4.
 * Ground truth: src/func_801606D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
extern u16 *D_8019ED54;
void func_801606D4(void)
{
    row_page(0xCE);
    *D_8019ED58 = *D_8019ED44;
    row_page(0xCD);
    row_read(0x7F);
    *D_8019ED54 = *D_8019ED44;
    latch(0);
    sep_b();
    do {
        func_800F7EE8();
        cell_flags_pack3();
        poll_pair_cur();
    } while (poll_go(0x8080) != 0);
    cell_draw(0x3883);
}
