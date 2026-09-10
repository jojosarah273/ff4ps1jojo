/* FF4 source-port — interpreted module for shop_sell_row_screen_twin_of_e8_wi.
 * Ground truth: src/shop_sell_row_screen_twin_of_e8_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_sell_row_screen_twin_of_e8_wi(void)
{
    /* shop sell-row screen (twin of 801721E8 without the bottom commit):
       0x1701 header, 0xB/0xC/0xE/0xD windows, 80173ED8 stat block,
       801714C4 quantity picker; loop L171FE0 scrolls on 5958(0x10). */
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    txt_set(0x1701);
    io_poll(1);
    if (io_just() == 0)
        goto L1721D0;
    open_row(0xB);
L171fe0:
    for (;;) {
        row_page(0xB);
        txt_cell_cur();
        cell_put(0xC);
        txt_cell_cur();
        cell_put(0xE);
        shop_stat_block_called_by_the_e8_f();
        row_page(0xD7);
        if (gate(2) != 0)
            goto L1721A8;
        wnd_open_cur();
        row_page(0xB);
    L172088:
        for (;;) {
            txt_cell_cur();
            sep_a();
            cell_poke0(cell_state(0xC));
            cell_pull_c8(0x480);
            row_page(0xD);
            row_open_w0();
            row_read(1);
            if (sel(2) != 0)
                goto L1720E8;
            latch(0x60);
            shop_picker_7();
        L1720E8:
            txt_cell_cur();
            sep_a();
            cell_poke0(cell_state(0xE));
            cell_pull_c8(0x481);
            txt_cell_cur();
            sep_a();
            row_open_w(0xA8);
            cell_pull_c8(0x482);
            txt_cell_cur();
            sep_a();
            row_open_w(0x18);
            cell_pull_c8(0x483);
            cell_step();
            cell_step();
            cell_step();
            cell_step();
            step2();
            step2();
            step2();
            step2();
            poll_t(0x10);
            if (io_just() == 0)
                continue;
            break;
        }
    L1721A8:
        key_page(0xB);
        row_page(0xB);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
L1721D0:
    row_pad();
    return;
}
