/* FF4 source-port — interpreted module for func_8010EB14.
 * Ground truth: src/func_8010EB14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010EB14(void)
{
    func_80176060();
    latch(9);
    txt_draw(0x2105);
    wnd_open(0x2000);
    tail(0x47);
    wnd_open(0x1000);
    tail(0x45);
    latch(0xA);
    cell_put(0x3C);
    wnd_open(0xF000);
    tail(0x3D);
    func_801766B0();
    latch(0x80);
    txt_draw(0x2115);
    for (;;) {
        /* spin on s1 (register) */
    }
Leba4:
    latch(0x6A);
    cell_put(0xB2);
    func_80108330();
    open_row(0xBA);
    func_80108458();
    key_page(0xED);
    func_80109B08();
    func_80108458();
    key_page(0xED);
    func_80109B08();
    open_row(0xDD);
    open_row(0xED);
    latch(0x80);
    txt_draw(0x2115);
    wnd_open_cur();
    for (;;) {
        row_prep(0x20);
        cell_pos_mask(0x1C0);
        cell_pos_mask(0x20);
        row_prep_close();
        cell_step();
        poll_t(0x200);
        if (io_just() != 0)
            break;
    }
    latch_cur();
    stat_sync();
    func_8017F8F8();
    for (;;) {
        func_80194700();
        func_80194394();
        /* spin on s1 (register) */
    }
    wnd_open_cur();
    for (;;) {
        latch_cur();
        cell_draw(0xCDD);
        cell_draw(0xCE1);
        latch(0x40);
        cell_draw(0xCDE);
        cell_draw(0xCE2);
        sep_a();
        row_open_w(8);
        io_poll(0x40);
        if (io_just() != 0)
            break;
    }
    latch(0x81);
    txt_draw(0x4200);
    latch(3);
    func_800FD85C();
    open_row(0x2E);
    open_row(0x2F);
Lee34:
    for (;;) {
        open_row(0x20);
        open_row(0x21);
    Lee44:
        for (;;) {
            wnd_fx_7d_b();
            row_page(0x2E);
            row_sel_cell(0x20);
            row_prep(0x20);
            row_read2(0x20);
            cell_put_hi9(0x22);
            cell_state_of();
            func_800F7968();
            cell_peek_cur();
            func_800F7968();
            cell_put_hi9(0x22);
            row_read2(0x22);
            cell_stamp8_9(0xCE1);
            row_sync2_cur();
            row_prep_close();
            key_page(0x20);
            if (func_800F60A8(0x202) != 0)
                continue;
            break;
        }
        key_page(0x2E);
        row_page(0x2E);
        io_poll(8);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(3);
    func_800FD914();
    func_80174710();
    func_801745F4();
    latch(0x81);
    txt_draw(0x4200);
    func_8011EA5C();
    func_8017F8F8();
    for (;;) {
        func_80194700();
        func_80194394();
        /* spin on s1 (register) */
    }
    return;
}
