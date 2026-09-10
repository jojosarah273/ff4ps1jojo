/* FF4 source-port — interpreted module for fn_1x69228.
 * Ground truth: src/fn_1x69228.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x69228(void)
{
    open_row(0x9A);
    for (;;) {
        shop_row_41();
        key_page(0x9A);
        row_page(0x9A);
        row_read(0xF);
        if (sel(0x202) != 0)
            continue;
        cell_dec_bank(0x3303);
        if (poll_go(0x202) == 0)
            break;
    }
}
