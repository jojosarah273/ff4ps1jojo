/* FF4 source-port — interpreted module for shop_rows_x1704_xac_x1701_x171b_x1.
 * Ground truth: src/shop_rows_x1704_xac_x1701_x171b_x1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x1704_xac_x1701_x171b_x1(void)
{
    /* shop rows: 0x1704/0xAC/0x1701/0x171B/0x1705 texts/windows,
       801030F8/800FD718/80102ED8 rows; loop L1030B0 on 5574(4). */
    latch(3);
    txt_draw(0x1704);
    latch(1);
    cell_put(0xAC);
    txt_set(0x1701);
    txt_draw(0x171B);
    latch(3);
    txt_draw(0x1705);
    row_page(0xB1);
    if (gate(2) != 0)
        goto L103098;
    fn_1x030f8();
L103098:
    battle_rows_run();
    open_row(0x79);
    open_row(0xB6);
L1030b0:
    for (;;) {
        fn_1x02ed8();
        key_page(0xB6);
        key_page(0x79);
        row_page(0x79);
        io_poll(4);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
