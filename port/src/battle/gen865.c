/* FF4 source-port — interpreted module for shop_buy_rows_x1715_x1706_x1716_x1.
 * Ground truth: src/shop_buy_rows_x1715_x1706_x1716_x1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_buy_rows_x1715_x1706_x1716_x1(void)
{
    /* shop buy rows: 0x1715/0x1706/0x1716/0x1707/0x1704 texts +
       0xAC window, 800FD718/80102414 rows; gate 5574(1). */
    page_paint2(0x1715);
    txt_set(0x1715);
    io_poll(1);
    if (io_just() == 0)
        goto L102FC0;
    txt_set(0x1706);
    txt_draw(0x1716);
    txt_set(0x1707);
    txt_draw(0x1717);
L102FC0:
    latch(2);
    txt_draw(0x1704);
    cell_put(0xAC);
    battle_rows_run();
    fn_1x02414();
    return;
}
