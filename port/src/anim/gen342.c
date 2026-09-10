/* FF4 source-port — interpreted module for shop_stat_icons_the_fixed_icon_cel.
 * Ground truth: src/shop_stat_icons_the_fixed_icon_cel.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_stat_icons_the_fixed_icon_cel(void)
{
    /* shop stat icons: the fixed 1-3/5-12 icon-cell row (654C/824C
       pairs), 0x420B/0x420C icons, 0x15/0x16/0x17/0x22-0x2F windows,
       8017EA90 commit. */
    latch(2);
    cell_put(1);
    latch_cur();
    cell_put(2);
    cell_put(3);
    cell_put(5);
    cell_put(6);
    latch(0x62);
    cell_put(7);
    latch(0x6A);
    cell_put(8);
    latch(0x72);
    cell_put(9);
    latch(0x7A);
    cell_put(0xA);
    latch(0x22);
    cell_put(0xB);
    latch(0x22);
    cell_put(0xC);
    latch_cur();
    txt_draw(0x420B);
    txt_draw(0x420C);
    latch(0x80);
    cell_put(0x15);
    sep();
    cell_put(0x16);
    cell_put(0x17);
    latch(0x1F);
    cell_put(0x2C);
    sep();
    cell_put(0x2D);
    cell_put(0x2E);
    cell_put(0x2F);
    cell_put(0x30);
    cell_put(0x31);
    cell_put(0x33);
    latch(0xE0);
    fn_1x7ea90();
    return;
}
