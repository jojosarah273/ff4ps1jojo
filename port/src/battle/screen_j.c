/* FF4 source-port — interpreted module for func_801569EC.
 * Ground truth: src/func_801569EC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801569EC(void)
{
    txt_set(0x35A0);
    cell_put(0xDF);
    latch(0x14);
    cell_put(0xE1);
    options_row_run();
    txt_set(0x35A1);
    cell_put(0xE5);
    draw_pad(0xE030);
    latch(0xE);
    func_80152640();
    cell_fmt2(0xE3);
    row_info(0x98);
    row_info(0x9C);
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x397F);
        cell_step();
        step2();
        io_poll(0xFF);
        if (io_just() != 0)
            break;
    }
    txt_set(0x35A0);
    cell_put(0xDF);
    latch(0x28);
    cell_put(0xE1);
    options_row_run();
    cell_fmt2(0xE3);
    row_info(0x9A);
    row_info(0x9E);
Laf0:
    for (;;) {
        page(0x98);
        txt_cell(0x397F);
        io_poll(0xFF);
        if (io_just() != 0)
            goto Lc0c;
        cell_put(0xE5);
        draw_pad(0xE600);
        latch(0xE);
        func_80152640();
        cell_fmt2(0x9A);
        latch(4);
        cell_put(0xA9);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x3A1F);
            io_poll(0xFF);
            if (io_just() != 0)
                goto Lb9c;
            cell_step();
        Lb9c:
            step2();
            poll_pair(0xA9);
            row_page(0xA9);
            if (gate(0x202) != 0)
                continue;
            break;
        }
        row_info(0x9A);
        sep_a();
        row_page(0x98);
        row_open_w(2);
        cell_put(0x98);
        row_page(0x99);
        row_open_w0();
        cell_put(0x99);
    }
Lc0c:
    txt_set(0x35A0);
    cell_put(0xDF);
    latch(0xA0);
    cell_put(0xE1);
    options_row_run();
    cell_fmt2(0xE3);
    row_info(0x9A);
    latch(0xA);
    cell_put(0xAB);
Lc54:
    latch(4);
    cell_put(0xA9);
Lc64:
    for (;;) {
        page(0x9E);
        txt_cell(0x3A1F);
        io_poll(0xFF);
        if (io_just() != 0)
            goto Ld10;
        cell_put(0xDF);
        latch(4);
        cell_put(0xE1);
        options_row_run();
        page(0xE3);
        cell_fmt2(0x9A);
        latch(4);
        cell_put(0xAA);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x3B5F);
            cell_step();
            step2();
            poll_pair(0xAA);
            row_page(0xAA);
            if (gate(0x202) != 0)
                continue;
            break;
        }
    Ld10:
        sep_a();
        row_page(0x9A);
        row_open_w(4);
        cell_put(0x9A);
        row_page(0x9B);
        row_open_w0();
        cell_put(0x9B);
        sep_a();
        row_page(0x9E);
        row_open_w(1);
        cell_put(0x9E);
        row_page(0x9F);
        row_open_w0();
        cell_put(0x9F);
        poll_pair(0xA9);
        row_page(0xA9);
        if (gate(0x202) != 0)
            continue;
        poll_pair(0xAB);
        row_page(0xAB);
        if (gate(0x202) != 0)
            goto Lc54;
        break;
    }
    txt_set(0x35A0);
    label(0x393D);
    wnd_open(0x258);
    label(0x393F);
    func_8015236C();
    cell_push60(0x3941);
    row_info(0x9A);
    cell_pull60(0x2896);
Le18:
    for (;;) {
        page(0x9C);
        txt_cell(0x397F);
        io_poll(0xFF);
        if (io_just() != 0)
            goto Lfc8;
        cell_step();
        txt_cell(0x397F);
        cell_put(0xE5);
        draw_pad(0xE900);
        txt_set(0x38EF);
        if (gate(2) != 0)
            goto Le80;
        draw_pad(0xB6C0);
    Le80:
        latch(0xE);
        func_80152640();
        txt_set(0x38EF);
        if (gate(0x202) != 0)
            goto Lf0c;
        cell_fmt2(0x9A);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x405F);
            cell_step();
            step2();
            io_poll(0xFF);
            if (io_just() != 0)
                break;
        }
        goto Lf68;
    Lf0c:
        cell_fmt2(0x9A);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x405F);
            cell_step();
            step2();
            io_poll(0xFF);
            if (io_just() != 0)
                break;
        }
    Lf68:
        row_prep(0x20);
        sep_a();
        row_read2(0x9A);
        cell_pos_fwd(0x3C);
        cell_put_hi9(0x9A);
        sep_a();
        row_read2(0x9C);
        cell_pos_fwd(2);
        cell_put_hi9(0x9C);
        sep();
        row_prep_close();
    }
Lfc8:
    txt_set(0x35A0);
    cell_put(0xDF);
    latch(0x14);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    sep();
    row_info(0xA9);
    for (;;) {
        txt_cell(0x397F);
        if (gate(2) != 0)
            break;
        cell_step();
        cell_step();
        key_page(0xA9);
        key_page(0xA9);
    }
    row_page(0xA9);
    cell_tick_half();
    cell_flags_repack();
    cell_cursor_dec();
    txt_set(0x35A0);
    row_close2();
    cell_draw(0x3604);
    cell_put(0xDF);
    latch(0x3C);
    cell_put(0xE1);
    options_row_run();
    txt_set(0x35A0);
    row_sel_cell_cur();
    sep_a();
    txt_set(0x2896);
    cell_poke0(cell_state(0xE3));
    cell_draw(0x360C);
    txt_set(0x2897);
    cell_poke0(cell_state(0xE4));
    cell_draw(0x360D);
    return;
}
