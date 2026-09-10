/* FF4 source-port — interpreted module for shop_rows_37.
 * Ground truth: src/shop_rows_37.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_37(void)
{
    /* shop rows: 0x37/0x29/0x45 windows, 801222C4 row; loop L123C54
       on 5DA0(0x37)/5B8C(0x202). */
    cell_cursor_dec();
    cell_put(0x37);
    row_open();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_page(0x45);
L123c54:
    for (;;) {
        cell_draw(1);
        poll_pair(0x37);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_close();
    rows_u16_d44_d54_swap_with_c_prep();
    row_close2();
    return;
}
