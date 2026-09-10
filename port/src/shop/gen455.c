/* FF4 source-port — interpreted module for shop_icon_row_x_b04_a40_a68_icon.
 * Ground truth: src/shop_icon_row_x_b04_a40_a68_icon.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_icon_row_x_b04_a40_a68_icon(void)
{
    /* shop icon row: 9x (3B04/7A40/7A68) icon triplets. */
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    return;
}
