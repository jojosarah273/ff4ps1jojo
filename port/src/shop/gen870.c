/* FF4 source-port — interpreted module for shop_rows_x18_x1a_x1c_windows_x421.
 * Ground truth: src/shop_rows_x18_x1a_x1c_windows_x421.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x18_x1a_x1c_windows_x421(void)
{
    /* shop rows: 0x18/0x1A/0x1C windows, 0x4218 text; linear. */
    row_open();
    row_page(0x18);
    row_page(0x1A);
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    page_open(0x4218);
    tail(0x1C);
    row_pad();
    row_close();
    return;
}
