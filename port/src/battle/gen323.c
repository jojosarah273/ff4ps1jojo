/* FF4 source-port — interpreted module for fn_1x1a204.
 * Ground truth: src/fn_1x1a204.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1a204(void) {
    row_page(0x3D);
    cell_put(0xC);
    row_page(0x3E);
    cell_put(0xE);
    shop_detail_cells_xe_x19_x18_xc_wi();
    label(0xA17);
    label(0xA1B);
    txt_set(0xA17);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA1B);
    key_page(0xC);
    shop_detail_cells_xe_x19_x18_xc_wi();
    label(0xA19);
    label(0xA1D);
    txt_set(0xA19);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA1D);
    key_page(0xE);
    shop_detail_cells_xe_x19_x18_xc_wi();
    label(0xA21);
    label(0xA25);
    txt_set(0xA21);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA25);
    poll_pair(0xC);
    shop_detail_cells_xe_x19_x18_xc_wi();
    label(0xA1F);
    label(0xA23);
    txt_set(0xA1F);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA23);;
}
