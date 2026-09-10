/* FF4 source-port — interpreted module for fn_1x04354.
 * Ground truth: src/fn_1x04354.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x04354(void)
{
    txt_set(0x6D0);
    if (gate(0x202) == 0) {
        latch(0x36);
        battle_rows_b744_prep_x3d_x1280_ce();
        io_poll(0);
        if (io_just() == 0) {
            txt_set(0x171F);
            io_press(cell_state(0x171B));
            if (io_just() != 0) {
                page_open(0x1719);
                cell_flags_cmp(cell_state(0x1706));
                if (io_just() != 0) {
                    shop_rows_x1705_x7a_x79_windows_x6();
                    return;
                }
            }
        }
    } else {
        txt_set(0x1723);
        io_press(cell_state(0x1701));
        if (io_just() != 0) {
            page_open(0x1706);
            cell_flags_cmp(cell_state(0x1721));
            if (io_just() != 0)
                return;
        }
        txt_set(0x1727);
        io_press(cell_state(0x1701));
        if (io_just() != 0) {
            page_open(0x1706);
            cell_flags_cmp(cell_state(0x1725));
            if (io_just() != 0)
                return;
        }
        row_page(0xA1);
        row_read(0x10);
        if (sel(2) != 0)
            return;
        shop_buy_rows_x1705_x7a_x79_window();
        return;
    }
    latch(0x30);
    cell_put(0x79);
    open_row(0x7A);
    for (;;) {
        fn_1x02e78();
        row_page(0x79);
        io_poll(0x21);
        if (io_go() != 0) {
            poll_pair(0xB7);
            row_page(0xB7);
            sep_a();
            row_open_w(0x10);
            cell_put(0xAD);
            row_page(0xB7);
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
        txt_set(0x1723);
        io_press(cell_state(0x171F));
        if (io_just() != 0) {
            page_open(0x1721);
            cell_flags_cmp(cell_state(0x1706));
            if (io_just() != 0)
                break;
        }
        txt_set(0x1727);
        io_press(cell_state(0x171F));
        if (io_just() != 0) {
            page_open(0x1725);
            cell_flags_cmp(cell_state(0x1706));
            if (io_just() != 0)
                break;
        }
        row_page(0x79);
        cell_tick_half();
        txt_draw(0x6FD);
        poll_pair(0x79);
        if (poll_go(0x202) == 0) {
            cell_clear_bank(0x1704);
            open_row(0xAC);
            open_row(0x7B);
            latch(2);
            txt_draw(0x1705);
            page_open(0x1706);
            label(0x171D);
            txt_set(0x1701);
            txt_draw(0x171F);
            battle_rows_run();
            page_paint2(0x1A02);
            return;
        }
    }
    shop_rows_x7a_xb7_windows_e78_c_ro();
}
