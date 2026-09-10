/* FF4 source-port — interpreted module for fn_1x31f98.
 * Ground truth: src/fn_1x31f98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void fn_1x31f98(void)
{
    u8 *p = D_8019ED40;
    cell_put(0x48);
    *p = (u8)~*p;
    cell_put(0x49);
    row_info(0x4B);
    latch(0);
    do {
        ability_header_x1b8b_text_x4e_x50();
        cell_set50_from40();
        io_poll(5);
    } while (io_just() == 0);
}
