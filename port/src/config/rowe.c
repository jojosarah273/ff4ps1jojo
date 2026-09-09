/* FF4 source-port — interpreted module for func_801583FC.
 * Ground truth: src/func_801583FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED44[8];
extern u32 D_8019ED58[8];
extern u32 D_8019ED60[8];
void func_801583FC(void)
{
    txt_set(0x3975);
    func_80152CDC();
    sep_a();
    row_page(0xA6);
    row_open_w0();
    cell_put(0x80);
    row_page(0xA7);
    row_open_w(0x20);
    cell_put(0x81);
    row_prep(0x20);
    sep_a();
    func_800F658C(0x3532);
    func_800F4064(0x2780);
    func_800F8274(0x82);
    sep();
    row_prep_close();
    txt_set(0x352C);
    if (gate(2) == 0) {
        sep();
        tail(0xA9);
        row_info();
        row_info(0xAB);
        for (;;) {
            func_800F66D8(0x82);
            if (gate(0x8080) != 0)
                goto sel_a;
            key_page(0xA9);
            goto after_sel;
        sel_a:
            sep_a();
            row_open_w(0xB);
            key_page(0xAB);
            row_page(0xAB);
            io_poll(5);
            if (io_just() == 0)
                continue;
            break;
        }
    after_sel:
        row_page(0xA9);
        if (gate(2) == 0) {
            draw_pad(5);
            latch(0x80);
            func_800F82EC(0x80);
        }
    }
    draw_pad(0x14);
    sep();
    for (;;) {
        func_800F82EC(0x80);
        step2();
        poll_t(0x19);
        if (io_just() != 0)
            break;
    }
    open_row(0xAF);
    draw_pad(7);
    for (;;) {
        func_800F66D8(0x82);
        func_800F9200();
        row_read(0xF8);
        cell_put(0xA9);
        row_close2();
        row_read(7);
        row_sel_cell_cur();
        func_800F6C68();
        cell_put(0xAB);
        cell_step();
        func_800F6C68();
        cell_put(0xAC);
        row_sync();
        draw_pad(0x14);
        for (;;) {
            row_arm2(cell_state(0xA9));
            if (func_800F4FAC(0x101) != 0)
                goto sprite_b;
            sep_a();
            func_800F66D8(0x80);
            cell_poke0(cell_state(0xAB));
            goto sprite_done;
        sprite_b:
            sep_a();
            func_800F66D8(0x80);
            cell_poke0(cell_state(0xAC));
        sprite_done:
            func_800F82EC(0x80);
            step2();
            poll_t(0x19);
            if (io_just() == 0)
                continue;
            break;
        }
        row_done();
        sep_a();
        row_open_w(0xB);
        key_page(0xAF);
        row_page(0xAF);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad(0xF);
    row_info(0xA9);
    draw_pad(0x14);
    row_info(0xAB);
    for (;;) {
        cell_fmt2(0xA9);
        sep_a();
        func_800F66D8(0x80);
        cell_fmt2(0xAB);
        cell_poke0(cell_state(func_800F3A70(0x80)));
        io_poll(0xB6);
        if (io_go() != 0)
            goto wB6;
        io_poll(0x63);
        if (io_go() == 0)
            goto wsel;
        latch(0x63);
        goto wsel;
    wB6:
        latch(1);
    wsel:
        func_800F82EC(0x80);
        key_page(0xA9);
        key_page(0xAB);
        row_page(0xA9);
        io_poll(0x14);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad(2);
    func_800F66D8(0x80);
    txt_draw(0x3965);
    sep();
    draw_pad(0x14);
    for (;;) {
        func_800F66D8(0x80);
        cell_draw(0x3966);
        step2();
        cell_step();
        poll_t(5);
        if (io_just() != 0)
            break;
    }
    func_800F8F74(0x396B);
    func_800F8F74(0x396C);
    func_800F8F74(0x396D);
    func_800F8F74(0x396E);
    func_800F8F74(0x396F);
    func_800F8F74(0x3970);
    func_800F8F74(0x3971);
    func_800F8F74(0x3972);
    func_800F8F74(0x3973);
    func_800F8F74(0x3974);
    draw_pad(0x25);
    func_800F66D8(0x82);
    if (gate(0x8080) == 0) {
        draw_pad(0x21);
        func_8015A0F4();
        txt_set(0x396D);
        txt_draw(0x396E);
    }
    draw_pad(0x30);
    func_800F66D8(0x82);
    if (gate(0x8080) == 0) {
        draw_pad(0x2C);
        func_8015A0F4();
    }
    sep();
    tail(0xA9);
    draw_pad(8);
    for (;;) {
        func_800F66D8(0x82);
        func_800F8674(0xAD);
        sep_a();
        row_open_w(0xB);
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    txt_set(0x396D);
    cell_put(0xB0);
    txt_set(0x396E);
    cell_put(0xB1);
    sep();
    for (;;) {
        func_800F6A78(0xAD);
        if (gate(0x80) != 0)
            goto opt_b;
        func_800F78C4(cell_state(0xA9));
        cell_put(0xA9);
        goto opt_done;
    opt_b:
        func_800F78C4(cell_state(0xAA));
        cell_put(0xAA);
    opt_done:
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad(0x25);
    row_page(0xA9);
    func_800F82EC(0x80);
    step2();
    row_page(0xAA);
    func_800F82EC(0x80);
    draw_pad(5);
    sep();
    open_row(0xA9);
    for (;;) {
        func_800F66D8(0x82);
        func_800F78C4(cell_state(0xA9));
        cell_put(0xA9);
        sep_a();
        row_open_w(0xB);
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    draw_pad(0x27);
    row_page(0xA9);
    func_800F78C4(cell_state(0x3974));
    func_800F82EC(0x80);
    draw_pad(0x28);
    txt_set(0x3965);
    func_80152B38();
    cell_put(0xDF);
    txt_set(0x396B);
    cell_put(0xE1);
    func_8015240C();
    txt_set(0x3967);
    func_80152BC4();
    sep_a();
    cell_poke0(cell_state(0xE3));
    func_800F82EC(0x80);
    draw_pad(2);
    sep();
    for (;;) {
        sep_a();
        func_800F66D8(0x82);
        row_read(0x7F);
        cell_poke0(cell_state(0xAA));
        cell_put(0xAA);
        sep_a();
        row_open_w(0xB);
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    draw_pad(0x29);
    sep_a();
    row_page(0xAA);
    cell_poke0(cell_state(0x396C));
    func_8015A30C();
    func_800F82EC(0x80);
    txt_set(0x3968);
    func_800F7864();
    cell_put(0xA9);
    sep();
    step2();
    for (;;) {
        sep_a();
        func_800F66D8(0x82);
        cell_poke0(cell_state(0xA9));
        cell_put(0xA9);
        sep_a();
        *(u8 *)D_8019ED40[0] = *(u8 *)D_8019ED60[0];
        row_open_w(0xB);
        cell_step();
        *(u16 *)D_8019ED58[0] = *(u16 *)D_8019ED44[0];
        poll_t(3);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad(0x2A);
    sep_a();
    row_page(0xA9);
    cell_poke0(cell_state(0x396F));
    func_8015A344();
    func_800F82EC(0x80);
    sep();
    tail(0xA9);
    draw_pad(9);
    for (;;) {
        func_800F66D8(0x82);
        func_800F78C4(cell_state(0xA9));
        cell_put(0xA9);
        step2();
        func_800F66D8(0x82);
        func_800F78C4(cell_state(0xAA));
        cell_put(0xAA);
        sep_a();
        row_open_w(0xA);
        cell_step();
        poll_t(3);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad(0x2B);
    row_page(0xA9);
    func_800F78C4(cell_state(0x3970));
    func_800F82EC(0x80);
    step2();
    row_page(0xAA);
    func_800F78C4(cell_state(0x3971));
    func_800F82EC(0x80);
    draw_pad(0x25);
    func_800F66D8(0x80);
    cell_put(0xA9);
    func_8015A094();
    draw_pad(0x20);
    func_800F82EC(0x80);
    draw_pad(0x26);
    func_800F66D8(0x80);
    cell_put(0xA9);
    func_8015A094();
    if (io_just() != 0)
        goto done;
    draw_pad(0x21);
    func_800F82EC(0x80);
done:
    func_8015902C();
    return;
}
