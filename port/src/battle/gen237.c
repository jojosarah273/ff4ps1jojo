/* FF4 source-port — interpreted module for func_801151BC.
 * Ground truth: src/func_801151BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801151BC(void)
{
    latch(0x20);
    txt_draw(0xACF);
    latch_cur();
    txt_draw(0xAD0);
    txt_draw(0xAD1);
    wnd_open(0x40);
    label(0xAD2);
    latch(1);
    txt_draw(0xACD);
    cell_clear_bank(0xACE);
    latch(0x40);
    txt_draw(0xAD4);
    txt_draw(0xAD5);
    func_80115BCC();
    wnd_open(0xFF);
    tail(0xF3);
    wnd_open_cur();
    tail(0xF5);
L5254:
    for (;;) {
        func_800FE7D8();
        cell_clear_pad();
        page(0xF3);
        cell_set50_from54();
        tail(0xF3);
        poll_t(0xC0);
        if (io_go() != 0)
            goto L52ec;
        wnd_open(0xC0);
        tail(0xF3);
        latch(1);
        cell_put(0xE3);
        func_80115D2C();
        row_page(0x7A);
        row_read(0x3F);
        if (sel(0x202) != 0)
            goto L52ec;
        latch(0x23);
        func_800FD804();
    L52ec:
        wnd_open(0x70);
        tail(0xC);
        tail(0xE);
        draw_pad(0x1C0);
        latch(0x1C);
        cell_put(0x91);
        latch(0x78);
        cell_put(0x8F);
        latch(0x40);
        cell_put(0x92);
        func_8011581C();
        latch(0x80);
        cell_put(0xE);
        draw_pad(0x180);
        func_80115A34();
        latch(0x1C);
        cell_put(0x91);
        latch(0x78);
        cell_put(0x8F);
        latch(0x60);
        cell_put(0x92);
        func_80115488();
        latch_cur();
        sep_b();
        cell_tick_sub(cell_state(0xF3));
        cell_put(0xEF);
        open_row(0xF0);
        open_row(0xF1);
        open_row(0xF2);
        open_row(0x79);
        for (;;) {
            row_page(0x79);
            row_sel_cell_cur();
            func_80115684();
            latch(0x20);
            cell_put(0x92);
            func_8011581C();
            key_page(0x79);
            row_page(0x79);
            io_poll(4);
            if (io_just() != 0)
                break;
        }
        page_open(0xAD2);
        if (cell_flags_pack(2) == 0)
            continue;
        break;
    }
    open_row(0xE3);
    func_8011EA5C();
    return;
}
