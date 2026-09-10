/* FF4 source-port — interpreted module for fn_1x6501c.
 * Ground truth: src/fn_1x6501c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x6501c(void)
{
    txt_set(0x289C);
    row_read(7);
    cell_put(0xAF);
    row_prep(0x20);
    row_read2(0xA6);
    cell_pos_fwd(0xF);
    sep();
    row_prep_close();
    draw_pad(5);
L5080:
    for (;;) {
        row_arm2(cell_state(0x289C));
        if (cell_flags_zero50(0x101) != 0)
            goto L5148;
        row_page(0xAF);
        io_poll(7);
        if (io_just() == 0)
            goto L5100;
        sep_b();
        txt_cell(0x1000);
        cell_pos_back(1);
        io_poll(1);
        if (io_go() != 0)
            goto L5140;
        latch(1);
        goto L5140;
    L5100:
        sep_a();
        txt_cell(0x1000);
        cell_poke0(cell_state(0xAF));
        io_poll(0x63);
        if (io_go() == 0)
            goto L5140;
        latch(0x63);
    L5140:
        cell_draw(0x1000);
    L5148:
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    txt_set(0x289D);
    cell_put(0xB1);
    wnd_open(0x270F);
    tail(0xB3);
    latch(9);
    options_status_xb5_xb6_windows_xa6();
    txt_set(0x289E);
    row_read(0x1F);
    cell_put(0xB1);
    wnd_open(0x3E7);
    tail(0xB3);
    latch(0xD);
    options_status_xb5_xb6_windows_xa6();
    wnd_open(0x7F);
    latch(0xFF);
    for (;;) {
        cell_draw(0x291C);
        cell_set50_from54();
        if (poll_go(0x8080) != 0)
            continue;
        break;
    }
    page(0xA6);
    txt_cell(0x1002);
    cell_put(0xB5);
    txt_cell(0x1001);
    row_read(0xF);
    cell_put(0xAF);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(0xAF));
    tail(0xB1);
    open_row(0xB3);
    open_row(0x9A);
    open_row(0x9B);
L5288:
    for (;;) {
        page(0xB1);
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L52bc;
        options_sub_screen_x289c_x289d_x29();
    L52bc:
        key_page(0xB1);
        key_page(0xB3);
        row_page(0xB3);
        io_poll(3);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
