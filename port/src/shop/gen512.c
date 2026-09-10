/* FF4 source-port — interpreted module for shop_map_the_fixed_sprite_row_x8a.
 * Ground truth: src/shop_map_the_fixed_sprite_row_x8a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_map_the_fixed_sprite_row_x8a(void)
{
    /* shop map: the fixed 15-sprite row (0x8A-0xA0 windows) then
       9448/93DC close. */
    cell_cursor_dec();
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    row_page(0x8A);
    row_page(0x8B);
    row_page(0x8D);
    row_page(0x8E);
    row_page(0x90);
    row_page(0x91);
    row_page(0x93);
    row_page(0x94);
    row_page(0x96);
    row_page(0x97);
    row_page(0x99);
    row_page(0x9A);
    row_page(0x9C);
    row_page(0x9D);
    row_page(0x9F);
    row_page(0xA0);
    row_pad();
    row_close2();
    return;
}
