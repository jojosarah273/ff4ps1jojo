/* FF4 source-port — interpreted module for shop_twin_c3c_b04_x2000_d3e0_row_a.
 * Ground truth: src/shop_twin_c3c_b04_x2000_d3e0_row_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_twin_c3c_b04_x2000_d3e0_row_a(void)
{
    /* shop (twin): 3C3C/3B04(0x2000)/9330 + 8016D3E0 row + 95A0. */
    cell_state_of();
    cell_state(0x2000);
    row_open();
    shop_c3c_b9c_gates_d160_row_with_t();
    row_close();
    return;
}
