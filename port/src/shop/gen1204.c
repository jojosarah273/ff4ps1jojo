/* FF4 source-port — interpreted module for shop_c3c_x20_rows_a0_close.
 * Ground truth: src/shop_c3c_x20_rows_a0_close.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_c3c_x20_rows_a0_close(void)
{
    /* shop: 3C3C/9330/9644(0x20) rows; 95A0 close. */
    cell_state_of();
    row_open();
    row_prep(0x20);
    row_close();
    return;
}
