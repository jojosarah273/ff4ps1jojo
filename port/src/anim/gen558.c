/* FF4 source-port — interpreted module for shop_picker_7.
 * Ground truth: src/shop_picker_7.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_picker_7(void)
{
    /* shop picker: 0x7/0x500 windows; 3F38(3C3C(7)) + 78C4(3C3C(7))
       rows with the 0x500 count cell. */
    row_open();
    row_sync();
    cell_cursor_dec();
    row_prep(0x20);
    row_prep_close();
    cell_put(7);
    row_close2();
    sep_a();
    cell_poke0(cell_state(7));
    cell_cursor_dec();
    row_read(3);
    cell_push_c8();
    cell_put(7);
    row_close2();
    cell_push_c8_d58(0x500);
    cell_tick_or(cell_state(7));
    cell_pull_c8(0x500);
    row_done();
    row_close();
    return;
}
