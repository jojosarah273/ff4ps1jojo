/* FF4 source-port — interpreted module for fn_1x5ec70.
 * Ground truth: src/fn_1x5ec70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x5ec70(void)
{
    options_banner_x2726_x2725_x28a2_x();
    txt_set(0x38FE);
    if (gate(0x8080) != 0)
        goto LECB8;
    row_read(0x7F);
    txt_draw(0x38FE);
    func_8006508C();
    return;
LECB8:
    fn_1x60b8c();
    func_80061860();
    txt_set(0x3906);
    if (io_press(cell_state(0x354D)) == 0)
        return;
    page_paint2(0x3553);
    page(0xA4);
    row_open();
    sep();
    tail(0xA9);
    tail(0xAB);
    label(0x291C);
    label(0x291E);
    label(0x2920);
LED50:
    for (;;) {
        page(0xA9);
        txt_set(0x3540);
        if (gate(0x202) != 0)
            goto LEE28;
        row_page(0xA9);
        cell_put(0xDF);
        latch(0x80);
        cell_put(0xE1);
        options_row_run();
        page(0xE3);
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto LEE28;
        txt_cell(0x2005);
        row_read(2);
        if (sel(0x202) != 0)
            goto LEE28;
        txt_cell(0x2006);
        if (gate(0x80) != 0)
            goto LEE28;
        key_page(0xAB);
        page(0xA9);
        cell_dispatch(cell_state_of());
    LEE28:
        key_page(0xA9);
        row_page(0xA9);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    page(0xA4);
    label(0x3945);
    page(0xAB);
    label(0x3947);
    options_b04_x2000_gates_v0_run_l15();
    page_open(0x3949);
    tail(0xA4);
    sep();
    tail(0xA9);
LEEB0:
    for (;;) {
        page(0xA9);
        txt_cell(0x291C);
        if (gate(2) != 0)
            goto LEFE0;
        row_page(0xA9);
        cell_put(0xDF);
        latch(0x80);
        cell_put(0xE1);
        options_row_run();
        row_prep(0x20);
        page(0xE3);
        sep_a();
        cell_sink8_9(0x2007);
        cell_peek0(cell_state(0xA4));
        cell_flags_cmp_pos(cell_state_of());
        if (io_go() == 0)
            goto LEF60;
        cell_sink8_9(0x2009);
    LEF60:
        cell_stamp8_9(0x2007);
        sep();
        row_prep_close();
        fn_1x60a4c();
        row_page(0xA9);
        row_sel_cell(0xA4);
        row_page_cur();
        cell_draw(0x34D4);
        row_page(0xA5);
        cell_draw(0x34D5);
    LEFE0:
        key_page(0xA9);
        row_page(0xA9);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    tail(0xA4);
    return;
}
