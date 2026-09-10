/* FF4 source-port — interpreted module for fn_1x22ff4.
 * Ground truth: src/fn_1x22ff4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x22ff4(void)
{
L2FFC:
    for (;;) {
        row_page(0xE7);
        battle_put43();
        fn_1x2d1d0();
        if (io_just() == 0)
            goto L3064;
        row_page(0xE7);
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            goto L3054;
        latch_cur();
    L3054:
        cell_put(0xE7);
    }
L3064:
    row_page(0xE7);
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    row_open_w(0x10);
    cell_put(0x46);
    latch(2);
    cell_put(0x45);
    config_pad_300();
    midrow_pad88_run();
    midrow_degen();
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L31A0;
L311C:
    for (;;) {
        row_page(0xE7);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto L3144;
        latch(4);
    L3144:
        cell_put(0xE7);
        battle_put43();
        cell_push_c8();
        cell_cur_save54_b();
        txt_set(0x1BB8);
        if (gate(0x202) != 0)
            goto L31A0;
        txt_cell_cur();
        row_read(0x1F);
        if (sel(2) != 0)
            continue;
        break;
    }
L31A0:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L324C;
L31C0:
    for (;;) {
        row_page(0xE7);
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            goto L31F0;
        sep();
    L31F0:
        cell_put(0xE7);
        battle_put43();
        cell_push_c8();
        cell_cur_save54_b();
        txt_set(0x1BB8);
        if (gate(0x202) != 0)
            goto L324C;
        txt_cell_cur();
        row_read(0x1F);
        if (sel(2) != 0)
            continue;
        break;
    }
L324C:
    txt_set(0x1B27);
    if (gate(2) != 0)
        goto L3294;
    row_page(1);
    row_read(3);
    if (sel(2) != 0)
        goto L3294;
    latch(0x7F);
    goto L32D0;
L3294:
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L32E0;
    row_page(0xE7);
    battle_put43();
    cell_push_c8();
L32D0:
    cell_put(0xE8);
    return;
L32E0:
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto L3064;
    latch(0xFF);
    cell_put(0xE8);
    return;
}
