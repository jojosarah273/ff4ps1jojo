/* FF4 source-port — interpreted module for options_stat_screen_x2041_x203d_x3.
 * Ground truth: src/options_stat_screen_x2041_x203d_x3.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_stat_screen_x2041_x203d_x3(void)
{
    /* options stat screen: 0x2041/0x203D/0x38BF/0x2003/0x2004/0x2006
       texts, 8015330C row; loops L165764 (5A90(0xF)), L165838
       (scroll), L16593C (0x321B/0x1440 gate), ending with the 0x16A8/
       0x2001/0x2081/0x2101/0x2181 row-pair fill. */
    sep();
L165764:
    for (;;) {
        txt_cell(0x2041);
        cell_draw(0x203D);
        txt_cell(0x2042);
        cell_draw(0x203E);
        cell_push_c8_d58(0x38BF);
        cell_draw(0x2003);
        cell_push_c8_d58(0x38C0);
        cell_draw(0x2004);
        cell_push_c8_d58(0x38C1);
        cell_draw(0x2006);
        rows_u16_d44_d54_swap_chain_with_c();
        step2();
        step2();
        step2();
        poll_t(0xF);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    open_row(0xA9);
L165830:
    open_row(0xAB);
    goto L165838;
L165838:
    for (;;) {
        txt_cell(0x2000);
        cell_pull_c8(0x1000);
        cell_step();
        step2();
        key_page(0xAB);
        row_page(0xAB);
        io_poll(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    row_prep(0x20);
    sep_a();
    cell_pos_fwd(0x40);
    sep();
    row_prep_close();
    key_page(0xA9);
    row_page(0xA9);
    io_poll(5);
    sep();
    tail(0xA9);
L16593c:
    for (;;) {
        txt_cell(0x321B);
        cell_pull_c8(0x1440);
        if (gate(2) != 0)
            goto L165974;
        io_poll(0x60);
        if (io_just() == 0)
            goto L165994;
    L165974:
        sep();
        cell_0xf64a8();
        cell_pull_c8(0x1440);
        goto L1659A4;
    L165994:
        txt_cell(0x321C);
        cell_flags_scr();
    L1659A4:
        cell_pull_c8(0x1441);
        if (io_just() != 0)
            goto L1659CC;
        sep();
        cell_pull_c8(0x1440);
    L1659CC:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        step2();
        step2();
        key_page(0xA9);
        row_page(0xA9);
        io_poll(0x30);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x16A8);
    if (gate(0x202) != 0)
        goto L165ADC;
    txt_set(0x2001);
    row_read(0x7F);
    txt_draw(0x2001);
    txt_set(0x2081);
    row_read(0x7F);
    txt_draw(0x2081);
    txt_set(0x2101);
    row_read(0x7F);
    txt_draw(0x2101);
    txt_set(0x2181);
    txt_draw(0x2181);
    txt_set(0x2201);
    txt_draw(0x2201);
    return;
L165ADC:
    txt_set(0x2001);
    txt_draw(0x2001);
    txt_set(0x2081);
    txt_draw(0x2081);
    txt_set(0x2101);
    txt_draw(0x2101);
    txt_set(0x2181);
    row_read(0x7F);
    txt_draw(0x2181);
    txt_set(0x2201);
    row_read(0x7F);
    txt_draw(0x2201);
    return;
}
