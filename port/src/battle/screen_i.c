/* FF4 source-port — interpreted module for func_8014DA2C.
 * Ground truth: src/func_8014DA2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_801CFD68[8];
void func_8014DA2C(void)
{
    u32 s0 = 1;
    if (*(u16 *)(D_801CFD68[0] + 0x8000 + 0x726A) == 0x2040)
        s0 = 1;
    row_sel_cell(0xF44E);
    cell_clear_bank();
    latch(1);
    txt_draw(0xF261);
    row_page(2);
    txt_draw(0xF24C);
    cell_put(6);
    cell_push_c8();
    cell_put(2);
    cell_push_c8();
    cell_put(3);
    latch(0xF);
    cell_put(4);
    txt_draw(0xF280);
    row_page(1);
    cell_tick_or(cell_state(0xF24C));
    if (ticker_reblend2(0x202) != 0)
        goto Ldb30;
    func_8014E38C();
    return;
Ldb30:
    row_page_cur();
    txt_draw(0xF485);
    func_8014D680();
    page_cur();
    label(0xF279);
    row_page(1);
    txt_draw(0xF281);
    txt_draw(0xF284);
    txt_set(0xF2D0);
    io_poll(2);
    if (io_just() != 0)
        goto Ldba8;
    io_poll(3);
    if (io_just() == 0)
        goto Ldbb8;
Ldba8:
    latch(0xFF);
    txt_draw(0xF27A);
Ldbb8:
    page(2);
    label(0xF27C);
    cell_push_c8_b4(2);
    row_read(0xF0);
    cell_push_c8();
    txt_draw(0xF24D);
    cell_push_c8();
    txt_draw(0xF24E);
    cell_push_c8_b4(2);
    row_read(0xF);
    cell_set50_from40();
    txt_draw(0xF27B);
    func_8014CA24();
    draw_pad_cur();
    for (;;) {
        cell_push_c8_sel(8);
        sep_a();
        cell_poke0(cell_state(0x2C));
        cell_pull_c8(0xF251);
        step2();
        cell_push_c8_sel(8);
        sep_a();
        cell_poke0(cell_state(0x2D));
        cell_pull_c8(0xF251);
        step2();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
    for (;;) {
        page_paint(0xF268);
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    func_8014CFC4();
    draw_pad(1);
    cell_push_c8_b4o(2);
    row_read(0x18);
    cell_push_c8();
    txt_draw(0xF29F);
    draw_pad(1);
    cell_push_c8_b4o(2);
    if (gate(0x8080) != 0)
        goto Lddac;
    cell_clear_bank(0xF261);
Lddac:
    cell_push_c8_b4o(2);
    row_read(7);
    txt_draw(0xF249);
    latch(0x10);
    txt_draw(0xF24F);
    txt_draw(0xF250);
    func_80148CAC();
    cell_clear_bank(0xF27E);
    cell_clear_bank(0xF27F);
    cell_clear_bank(0xF24A);
    cell_clear_bank(0xF24B);
    func_8014D080();
    wnd_open_cur();
    label(0xF281);
    if (s0 == 0) {
        s0 = 2;
        func_8007259C();
    } else if (s0 == 2) {
        func_8007259C();
    }
    func_8014D98C();
    txt_set(0xF27E);
    func_800F4280(0xF29F);
    if (sel(0x202) == 0) {
        txt_set(0xF2A0);
        io_poll(3);
        if (io_just() != 0)
            func_8013E73C();
    }
Ldeb8:
    txt_set(0xF2A0);
    io_poll(4);
    if (io_just() != 0)
        func_8014588C();
Ldee0:
    txt_set(0xF281);
    if (gate(2) != 0)
        goto Ldf80;
    io_poll(3);
    if (io_just() != 0)
        goto Ldf80;
    io_poll(1);
    if (io_just() != 0)
        goto Ldf38;
    latch(4);
    goto Ldf40;
Ldf38:
    latch(2);
Ldf40:
    cell_put_cur();
    txt_set(0x1813);
    cell_tick_and();
    if (sel(2) != 0)
        goto Ldf78;
    func_8014D394();
    goto Ldf80;
Ldf78:
    func_8014D31C();
Ldf80:
    txt_set(0xF2D0);
    if (gate(2) != 0)
        goto Le04c;
    io_poll(1);
    if (io_just() == 0)
        goto Le02c;
    txt_set(0xF27E);
    row_read(7);
    txt_set(0xF279);
    if (gate(0x202) != 0)
        goto Le01c;
    cell_push_c8();
    txt_draw(0xF268);
    func_8014CF14();
    func_8014EA0C();
    goto Le04c;
Le01c:
    func_8014D4D4();
    goto Le04c;
Le02c:
    io_poll(5);
    if (io_just() == 0)
        goto Le04c;
    func_80141DA0();
Le04c:
    page_paint2(0xF27E);
Le054:
    for (;;) {
        func_800F7534(0xF27C);
        row_info(2);
        txt_set(0xF280);
        cell_put(4);
        txt_set(0xF27F);
        cell_push_c8_b4o(2);
        io_poll(0xFF);
        if (io_just() != 0)
            goto Le2ec;
        cell_push_c8_b4o(2);
        if (gate(0x80) == 0)
            goto Le28c;
        cell_put(6);
        io_poll(0x88);
        if (io_just() == 0)
            goto Le11c;
        page_paint2(0xF27F);
        step2();
        cell_push_c8_b4o(2);
        page_paint2(0xF44E);
        func_8014D780();
        goto Le27c;
    Le11c:
        row_read(8);
        if (sel(2) != 0)
            goto Le1bc;
        row_read(4);
        if (sel(2) != 0)
            goto Le15c;
        func_8014D31C();
        goto Le27c;
    Le15c:
        row_page(6);
        cell_cursor_dec();
        row_read(7);
        func_8014D14C();
        row_close2();
        row_read(3);
        txt_draw(0xF281);
        func_8014D394();
        goto Le27c;
    Le1bc:
        row_page(6);
        row_read(7);
        row_sel_cell(6);
        row_page_cur();
        row_read(7);
        cell_set50_from40();
        cell_put(8);
        func_8014EAE4();
        txt_set(0xF24A);
        sep_a();
        cell_poke0(cell_state(6));
        txt_draw(0xF24A);
        txt_set(0xF24B);
        sep_a();
        cell_poke0(cell_state(7));
        txt_draw(0xF24B);
    Le27c:
        page_paint2(0xF27F);
        goto Le054;
    Le28c:
        row_read(0x7F);
        txt_draw(0xF248);
        txt_set(0xF27A);
        txt_draw(0xF262);
        latch(1);
        txt_draw(0xF247);
        txt_set(0xF27E);
        func_800F4280(0xF29F);
        if (sel(0x202) != 0)
            goto Lde20;
        page_paint2(0xF27F);
        goto Lde20;
    Le2ec:
        cell_clear_bank(0xF27F);
        txt_set(0xF2A0);
        if (gate(2) == 0)
            func_8014E424();
        cell_dec_bank(0xF27B);
        if (poll_go(2) == 0)
            goto Lde20;
        txt_set(0xF285);
        if (gate(0x202) != 0)
            goto Le34c;
        func_8014D31C();
    Le34c:
        func_8014E38C();
        txt_set(0xF284);
        txt_draw(0xF467);
        func_8009B8E4();
        sep();
        func_8014D500();
        return;
    }
Lde20:
    if (s0 == 0) {
        s0 = 2;
        func_8007259C();
    } else if (s0 == 2) {
        func_8007259C();
    }
    goto Ldeb8;
}
