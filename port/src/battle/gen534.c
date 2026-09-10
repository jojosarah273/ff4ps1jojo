/* FF4 source-port — interpreted module for shop_own_row_x172c_text_x1700_x170.
 * Ground truth: src/shop_own_row_x172c_text_x1700_x170.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_own_row_x172c_text_x1700_x170(void)
{
    /* shop own-row: 0x172C text, 0x1700-0x1705 texts with 0x172E/
       0x172F cells; branch on 5574(3), closes with 0xC0 reads. */
    row_open();
    page_open(0x172C);
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        goto L1012BC;
    txt_set(0x1702);
    cell_draw(0x172E);
    txt_set(0x1705);
    sep_a();
    cell_poke0(cell_state(0x1706));
    cell_draw(0x172F);
    goto L1012EC;
L1012BC:
    txt_set(0x1700);
    sep_a();
    row_open_w(0xFB);
    cell_draw(0x172E);
    txt_set(0x1706);
    cell_draw(0x172F);
L1012EC:
    txt_set(0x1707);
    cell_draw(0x1730);
    poll_t(0xC0);
    if (io_go() == 0)
        goto L101330;
    wnd_open_cur();
    return;
L101330:
    return;
}
