/* FF4 source-port — interpreted module for shop_rows_x1700_x1288_texts_x7a_xc.
 * Ground truth: src/shop_rows_x1700_x1288_texts_x7a_xc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x1700_x1288_texts_x7a_xc(void)
{
    /* shop rows: 0x1700/0x1288 texts, 0x7A/0xCDB/0xCDC windows; 5574
       gates pick the 0x1E/0x7E rows and 0xCDB/0xCDC fills. */
    txt_set(0x1700);
    io_poll(2);
    if (io_go() != 0)
        goto L1750CC;
    io_poll_cur();
    if (io_just() == 0)
        goto L175054;
    wnd_open(0x1E);
    goto L17505C;
L175054:
    wnd_open(0x7E);
L17505C:
    txt_set(0x1288);
    row_read(4);
    if (sel(2) != 0)
        goto L1750BC;
    row_page(0x7A);
    row_sel_cell_cur();
    cell_draw(0xCDB);
    cell_draw(0xCDC);
    return;
L1750BC:
    page_paint(0xCDB);
    page_paint(0xCDC);
    return;
L1750CC:
    return;
}
