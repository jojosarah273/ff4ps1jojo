/* FF4 source-port — interpreted module for func_8013FA08.
 * Ground truth: src/func_8013FA08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013FA08(void)
{
    sep();
    for (;;) {
        func_800F6C68();
        cell_draw(0x75FD);
        cell_step();
        poll_t(0x15);
        if (io_just() != 0)
            break;
    }
    sep();
    for (;;) {
        cell_draw(0x7612);
        cell_step();
        poll_t(0x1620);
        if (io_just() != 0)
            break;
    }
    sep();
    latch(0xFE);
    for (;;) {
        cell_draw(0x7D14);
        poll_spin();
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x380);
        if (io_just() != 0)
            break;
    }
    wnd_open(0x230);
    for (;;) {
        txt_cell(0x7D14);
        poll_spin();
        cell_draw(0x7994);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x280);
        if (io_just() != 0)
            break;
    }
    row_prep(0x20);
    sep();
    row_sync2(0x173);
    draw_pad(8);
Lbb4:
    for (;;) {
        func_800F87DC(0x8094);
        func_800F922C();
        sep_a();
        func_800F4064(0x68);
        func_800F87DC(0x8314);
        sep_a();
        func_800F4064(0xF0);
        func_800F87DC(0x8AF4);
        func_800F9410();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto Lc2c;
        sep_a();
        func_800F4064(4);
        draw_pad(0xC);
    Lc2c:
        poll_t(0x110);
        if (io_just() == 0)
            goto Lc54;
        sep_a();
        func_800F4064(4);
    Lc54:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x130);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_sync2(0x16F);
    draw_pad(8);
Lcbc:
    for (;;) {
        func_800F6104(cell_state(0x81D3));
        func_800F87DC(0x81D4);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto Ld18;
        sep_a();
        func_800F4064(4);
        draw_pad(0xC);
    Ld18:
        poll_t(0x110);
        if (io_just() == 0)
            goto Ld40;
        sep_a();
        func_800F4064(0x134);
    Ld40:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x130);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_sync2(0x6B);
    draw_pad(8);
Lda8:
    for (;;) {
        func_800F87DC(0x8454);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto Lde0;
        sep_a();
        func_800F4064(4);
        draw_pad(0xC);
    Lde0:
        poll_t(0x88);
        if (io_just() == 0)
            goto Le08;
        sep_a();
        func_800F4064(4);
    Le08:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0xA0);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    for (;;) {
        func_800F6BE0(0x8072);
        func_800F87DC(0x81C2);
        func_800F87DC(0x8442);
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    sep();
    for (;;) {
        row_sync2(0x101);
        func_800F87DC(0x84F2);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x100);
        if (io_just() != 0)
            break;
    }
    sep();
    row_sync2(0x53);
    draw_pad(8);
Lf40:
    for (;;) {
        func_800F87DC(0x85F4);
        func_800F87DC(0x8874);
        func_800F922C();
        sep_b();
        func_800F80D0(0xC);
        func_800F87DC(0x8674);
        func_800F87DC(0x88F4);
        sep_b();
        func_800F80D0(0xC);
        func_800F87DC(0x86F4);
        func_800F87DC(0x8974);
        sep_b();
        func_800F80D0(0xC);
        func_800F87DC(0x8774);
        func_800F87DC(0x89F4);
        sep_b();
        func_800F80D0(0xC);
        func_800F87DC(0x87F4);
        func_800F87DC(0x8A74);
        func_800F9410();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto L008;
        sep_a();
        func_800F4064(4);
    L008:
        func_800F922C();
        row_sync2(0xAC);
        func_800F87DC(0x8872);
        func_800F87DC(0x88F2);
        func_800F87DC(0x8972);
        func_800F87DC(0x89F2);
        func_800F87DC(0x8A72);
        row_sync2(0x1BC);
        func_800F87DC(0x85F2);
        func_800F87DC(0x8672);
        func_800F87DC(0x86F2);
        func_800F87DC(0x8772);
        func_800F87DC(0x87F2);
        func_800F9410();
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x70);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open(0x1C);
    draw_pad(4);
    row_sync2(0x134);
    for (;;) {
        func_800F87DC(0x7D14);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto L0f8;
        sep_a();
        func_800F4064(4);
    L0f8:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    for (;;) {
        row_sync2(0x100);
        func_800F87DC(0x8C32);
        row_sync2(0x160);
        func_800F87DC(0x8C34);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x80);
        if (io_just() != 0)
            break;
    }
    sep();
    row_prep_close();
    return;
}
