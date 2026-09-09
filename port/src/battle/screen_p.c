/* FF4 source-port — interpreted module for func_80156480.
 * Ground truth: src/func_80156480.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80156480(void)
{
L48c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x531F);
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
    func_8015240C();
    cell_fmt2(0xE3);
    row_info(0x9A);
    row_info(0x9E);
L504:
    for (;;) {
        page(0x98);
        txt_cell(0x531F);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L620;
        cell_put(0xE5);
        draw_pad(0xE600);
        latch(0xE);
        func_80152640();
        cell_fmt2(0x9A);
        latch(4);
        cell_put(0xA9);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x53BF);
            io_poll(0xFF);
            if (io_just() != 0)
                goto L5b0;
            cell_step();
        L5b0:
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
L620:
    txt_set(0x35A0);
    cell_put(0xDF);
    latch(0xA0);
    cell_put(0xE1);
    func_8015240C();
    cell_fmt2(0xE3);
    row_info(0x9A);
    latch(0xA);
    cell_put(0xAB);
L668:
    latch(4);
    cell_put(0xA9);
L678:
    for (;;) {
        page(0x9E);
        txt_cell(0x53BF);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L724;
        cell_put(0xDF);
        latch(4);
        cell_put(0xE1);
        func_8015240C();
        page(0xE3);
        cell_fmt2(0x9A);
        latch(4);
        cell_put(0xAA);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x54FF);
            cell_step();
            step2();
            poll_pair(0xAA);
            row_page(0xAA);
            if (gate(0x202) != 0)
                continue;
            break;
        }
    L724:
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
            goto L668;
        break;
    }
    txt_set(0x35A0);
    label(0x393D);
    wnd_open(0x258);
    label(0x393F);
    func_8015236C();
    cell_push60(0x3941);
    row_info(0x9A);
L824:
    for (;;) {
        page(0x9C);
        txt_cell(0x531F);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
        txt_cell(0x531F);
        cell_put(0xE5);
        draw_pad(0xE900);
        txt_set(0x38EF);
        if (gate(2) != 0)
            goto L88c;
        draw_pad(0xB6C0);
    L88c:
        latch(0xE);
        func_80152640();
        txt_set(0x38EF);
        if (gate(0x202) != 0)
            goto L918;
        cell_fmt2(0x9A);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x59FF);
            cell_step();
            step2();
            io_poll(0xFF);
            if (io_just() != 0)
                break;
        }
        goto L974;
    L918:
        cell_fmt2(0x9A);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x59FF);
            cell_step();
            step2();
            io_poll(0xFF);
            if (io_just() != 0)
                break;
        }
    L974:
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
    func_801569EC();
    return;
}
