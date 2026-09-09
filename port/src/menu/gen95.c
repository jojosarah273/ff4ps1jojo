/* FF4 source-port — interpreted module for func_800FA5B8.
 * Ground truth: src/func_800FA5B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FA5B8(void)
{
    /* battle item-use confirm: 0xD5/0x50/2 window gates, 0x1700/0x1704
       headers, 0xA04 name row, 801163E8 executes the use. */
    row_page(0xD5);
    if (gate(0x202) == 0)
        return;
    row_page(0x50);
    if (gate(2) == 0)
        return;
    row_page(2);
    row_read(0x40);
    if (sel(0x202) == 0)
        return;
    latch(1);
    cell_put(0x50);
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        goto LFA66C;
    txt_set(0xFD8);
    row_read(0x30);
    goto LFA69C;
LFA66C:
    txt_set(0x1704);
    if (gate(0x202) != 0)
        goto LFA694;
    latch(0x40);
    goto LFA69C;
LFA694:
    latch_cur();
LFA69C:
    txt_draw(0x1A04);
    func_800FC5A8();
    func_8011EA7C();
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        goto LFA6E4;
    page_open(0x16AA);
    label(0xCDD);
LFA6E4:
    func_800FC5D8();
    txt_set(0x1A03);
    if (gate(2) != 0)
        return;
    latch(1);
    cell_put(0xB1);
    open_row(0xAB);
    txt_set(0x1A03);
    io_poll(3);
    if (io_go() != 0)
        goto LFA75C;
    txt_set(0x1A03);
    sep_a();
    row_open_w(0x76);
    goto LFA80C;
LFA75C:
    io_poll(3);
    if (io_just() == 0)
        goto LFA784;
    latch(0x87);
    goto LFA80C;
LFA784:
    io_poll(4);
    if (io_just() == 0)
        goto LFA7AC;
    latch(0x86);
    goto LFA80C;
LFA7AC:
    io_poll(5);
    if (io_just() == 0)
        goto LFA7D4;
    latch(0xFB);
    goto LFA80C;
LFA7D4:
    io_poll(6);
    if (io_just() == 0)
        goto LFA804;
    latch(1);
    cell_put(0xC0);
    goto LFA814;
LFA804:
    latch(0xDB);
LFA80C:
    func_801163E8();
LFA814:
    open_row(0xB1);
    func_800FD718();
    return;
}
