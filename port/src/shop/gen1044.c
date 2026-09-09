/* FF4 source-port — interpreted module for func_80169228.
 * Ground truth: src/func_80169228.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80169228(void)
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
