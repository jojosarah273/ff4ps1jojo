/* FF4 source-port — interpreted module for func_80102494.
 * Ground truth: src/func_80102494.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80102494(void)
{
    latch(0x2F);
    cell_put(0x79);
    open_row(0x7A);
    for (;;) {
        func_80102E78();
        row_page(0x79);
        io_poll(0x20);
        if (io_go() != 0) {
            poll_pair(0xB9);
            poll_pair(0xB9);
            row_page(0xB9);
            sep_a();
            row_open_w(0x10);
            cell_put(0xAD);
            row_page(0xB9);
            cell_tick_half();
            shop_buy_list();
            poll_pair(0x79);
            continue;
        }
        row_page(0xA2);
        row_read(0x10);
        if (sel(0x202) == 0)
            break;
        page_open(0x1719);
        cell_flags_cmp(cell_state(0x1706));
        if (io_just() != 0)
            break;
        txt_set(0x171F);
        io_press(cell_state(0x1727));
        if (io_just() != 0) {
            page_open(0x171D);
            cell_flags_cmp(cell_state(0x1706));
            if (io_just() != 0)
                break;
        }
        txt_set(0x1723);
        io_press(cell_state(0x1727));
        if (io_just() != 0) {
            page_open(0x1721);
            cell_flags_cmp(cell_state(0x1706));
            if (io_just() != 0)
                break;
        }
        row_page(0x79);
        cell_tick_half();
        txt_draw(0x6FD);
        poll_pair(0x79);
        if (poll_go(0x202) != 0)
            continue;
        cell_clear_bank(0x1704);
        open_row(0xAC);
        open_row(0x7B);
        latch(2);
        txt_draw(0x1705);
        txt_set(0x1700);
        txt_draw(0x1727);
        page_open(0x1706);
        label(0x1725);
        row_page(0xB1);
        if (gate(0x202) == 0) {
            latch(0x52);
            func_8011AEAC();
        }
        page_paint2(0x1A02);
        break;
    }
    func_80103660();
}
