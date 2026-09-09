/* FF4 source-port — interpreted module for func_8014FA4C.
 * Ground truth: src/func_8014FA4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014FA4C(void)
{
    txt_set(0xF2D0);
    io_poll(7);
    if (io_just() != 0)
        goto Lfab4;
    io_poll(1);
    if (io_just() != 0)
        goto Lfab4;
    io_poll(4);
    if (io_just() != 0)
        goto Lfab4;
    latch(0x30);
    goto Lfabc;
Lfab4:
    latch(0x20);
Lfabc:
    cell_put(0x1A);
    txt_set(0xF24D);
    cell_put(0x12);
    txt_set(0xF24E);
    cell_put(0x13);
    txt_set(0xF24A);
    sep_b();
    func_800F7F48(cell_state(0x12));
    cell_put(0x12);
    txt_set(0xF24B);
    sep_b();
    func_800F7F48(cell_state(0x13));
    cell_put(0x13);
    txt_set(0xF248);
    tail(0x1C);
    txt_set(0xF249);
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x1C));
    row_arm_s_cur();
    sep();
    row_prep_close();
    func_800F6C68();
    cell_put(0x1C);
    func_800F6C68();
    cell_put(0x1D);
    latch(0xF);
    cell_put(0x1E);
    page_open(0xF24D);
    tail(0x10);
    page(0x12);
    tail(0x14);
    draw_pad_cur();
Lfc58:
    for (;;) {
        func_800F6EA8(0x1C);
        if (gate(0x80) != 0)
            goto Lfca8;
        page(0x1C);
        cell_step();
        tail(0x1C);
        func_801665C0();
        if (io_go() == 0)
            goto Lfd48;
        continue;
    }
Lfca8:
    io_poll(0xFF);
    if (io_just() != 0)
        goto Lfd48;
    cell_put(0x16);
    page(0x1C);
    cell_step();
    tail(0x1C);
    func_800F6EA8(0x1C);
    cell_put(0x17);
    page(0x1C);
    cell_step();
    tail(0x1C);
Lfd08:
    for (;;) {
        row_page(0x16);
        func_801665C0();
        if (io_go() == 0)
            goto Lfd48;
        poll_pair(0x17);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    goto Lfc58;
Lfd48:
    func_800F8E50(0xF2B2);
    txt_set(0xF2A0);
    io_poll(4);
    if (io_just() != 0)
        goto Lfda0;
    io_poll(3);
    if (io_just() != 0)
        goto Lfda0;
    io_poll(2);
    if (io_just() == 0)
        return;
Lfda0:
    wnd_open_cur();
    draw_pad_cur();
Lfdb0:
    for (;;) {
        func_800F6D70(0xEBE6);
        sep_a();
        cell_poke0(cell_state(0xF3B0));
        func_800F8960(0xEBE6);
        func_800F6D70(0xEBE7);
        sep_a();
        cell_poke0(cell_state(0xF3B1));
        func_800F8960(0xEBE7);
        poll_t(0x24);
        if (io_just() != 0)
            break;
    }
    return;
}
