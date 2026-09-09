/* FF4 source-port — interpreted module for func_8016AE94.
 * Ground truth: src/func_8016AE94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016AE94(void)
{
    cell_clear_bank(0x7D25);
    wnd_open(0x80);
    tail(8);
    tail(0xA);
    wnd_open(0x100);
    tail_cur();
    tail(6);
    wnd_open(0x100);
    func_8016ADDC();
    row_prep(0x20);
    sep();
    draw_pad(0x280);
Lf14:
    for (;;) {
        row_read2();
        cell_stamp8_9_b(0x3319);
        row_read2(6);
        cell_stamp8_9_b(0x371B);
        row_read2();
        sep_b();
        func_800F80D0(2);
        cell_put_hi9();
        row_read2(6);
        sep_b();
        func_800F80D0(1);
        cell_put_hi9(6);
        sep_a();
        cell_pos_fwd(4);
        cell_step();
        poll_t(0x400);
        if (io_just() != 0)
            break;
    }
    row_read2(0x64);
    cell_pos_mask(0xFF);
    poll_t(2);
    if (io_just() != 0)
        goto L0d0;
    draw_pad(0x280);
    wnd_open(0x104);
    for (;;) {
        func_800F6DE8(0x3319);
        cell_stamp8_9(0x3319);
        func_800F6DE8(0x371B);
        cell_stamp8_9(0x371B);
        sep_b();
        func_800F80D0(4);
        sep_a();
        cell_pos_fwd(4);
        poll_t(0x400);
        if (io_just() != 0)
            break;
    }
L0d0:
    sep();
    row_prep_close();
    row_page(0x64);
    io_poll(1);
    if (io_just() != 0)
        goto L128;
    wnd_open(0x80);
    label(0x8C);
    label(0x8E);
    wnd_open(0x100);
    goto L168;
L128:
    sep();
    label(0x8C);
    wnd_open(0x20);
    label(0x8E);
    wnd_open(0xA00);
L168:
    label(0x61);
    sep();
    tail(0x40);
    tail(0x5D);
    tail(0x5F);
    cell_put(0x63);
    cell_put(0x4A);
    txt_draw(0x5B);
    wnd_open(0x1000);
    tail(0x92);
    wnd_open(0x8000);
    tail(0x90);
    sep();
    for (;;) {
        row_page(0x64);
        io_poll(2);
        if (io_just() == 0)
            goto L234;
        cell_push_c8();
        goto L23c;
    L234:
        cell_push_c8();
    L23c:
        cell_draw(0x2103);
        cell_draw(0x2203);
        cell_step();
        poll_t(0x100);
        if (io_just() != 0)
            break;
    }
    cell_clear_bank(0x2100);
    wnd_open(0x1000);
    tail_cur();
    wnd_open(0xCC00);
    draw_pad(0x4000);
    latch(0x15);
    func_8016B5B0();
    wnd_open(0x70);
    tail(0x6C);
    wnd_open(0x50);
    tail(0x6E);
    wnd_open(0x70);
    tail(0x70);
    wnd_open(0x50);
    tail(0x72);
    func_8016AACC();
    func_8016BED4();
    wnd_open(0x40);
    label(0x2084);
    wnd_open(0x180);
    label(0x20C4);
    wnd_open(0x40);
    label(0x208A);
    wnd_open(0xC0);
    label(0x20CA);
    wnd_open(0x180);
    label(0x200A);
    wnd_open(0x300);
    label(0x204A);
    wnd_open(0x18);
    label(0x2086);
    wnd_open(0x100);
    label(0x20C6);
    wnd_open(8);
    label(0x2088);
    wnd_open(0xA0);
    label(0x20C8);
    wnd_open_cur();
    draw_pad(0x100);
    func_8016BE1C();
    wnd_open(2);
    draw_pad_cur();
    func_8016BE1C();
    wnd_open(4);
    draw_pad(0x100);
    func_8016BE1C();
    wnd_open(6);
    draw_pad(0x154);
    func_8016BE1C();
    wnd_open(8);
    draw_pad(0x2F4);
    func_8016BE1C();
    func_8016B470();
    sep();
    for (;;) {
        cell_draw(0x3D19);
        cell_step();
        poll_t(0x4000);
        if (io_just() != 0)
            break;
    }
    return;
}
