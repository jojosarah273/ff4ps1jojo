/* FF4 source-port — interpreted module for func_8013FA08.
 * Ground truth: src/func_8013FA08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013FA08(void)
{
    sep();
    for (;;) {
        cell_push_c8();
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
        cell_stamp8_9(0x8094);
        cell_cursor_ret2();
        sep_a();
        cell_pos_fwd(0x68);
        cell_stamp8_9(0x8314);
        sep_a();
        cell_pos_fwd(0xF0);
        cell_stamp8_9(0x8AF4);
        cell_cursor_adv2();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto Lc2c;
        sep_a();
        cell_pos_fwd(4);
        draw_pad(0xC);
    Lc2c:
        poll_t(0x110);
        if (io_just() == 0)
            goto Lc54;
        sep_a();
        cell_pos_fwd(4);
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
        cell_stamp8_9(0x81D4);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto Ld18;
        sep_a();
        cell_pos_fwd(4);
        draw_pad(0xC);
    Ld18:
        poll_t(0x110);
        if (io_just() == 0)
            goto Ld40;
        sep_a();
        cell_pos_fwd(0x134);
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
        cell_stamp8_9(0x8454);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto Lde0;
        sep_a();
        cell_pos_fwd(4);
        draw_pad(0xC);
    Lde0:
        poll_t(0x88);
        if (io_just() == 0)
            goto Le08;
        sep_a();
        cell_pos_fwd(4);
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
        cell_sink8_9(0x8072);
        cell_stamp8_9(0x81C2);
        cell_stamp8_9(0x8442);
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    sep();
    for (;;) {
        row_sync2(0x101);
        cell_stamp8_9(0x84F2);
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
        cell_stamp8_9(0x85F4);
        cell_stamp8_9(0x8874);
        cell_cursor_ret2();
        sep_b();
        cell_pos_back2(0xC);
        cell_stamp8_9(0x8674);
        cell_stamp8_9(0x88F4);
        sep_b();
        cell_pos_back2(0xC);
        cell_stamp8_9(0x86F4);
        cell_stamp8_9(0x8974);
        sep_b();
        cell_pos_back2(0xC);
        cell_stamp8_9(0x8774);
        cell_stamp8_9(0x89F4);
        sep_b();
        cell_pos_back2(0xC);
        cell_stamp8_9(0x87F4);
        cell_stamp8_9(0x8A74);
        cell_cursor_adv2();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto L008;
        sep_a();
        cell_pos_fwd(4);
    L008:
        cell_cursor_ret2();
        row_sync2(0xAC);
        cell_stamp8_9(0x8872);
        cell_stamp8_9(0x88F2);
        cell_stamp8_9(0x8972);
        cell_stamp8_9(0x89F2);
        cell_stamp8_9(0x8A72);
        row_sync2(0x1BC);
        cell_stamp8_9(0x85F2);
        cell_stamp8_9(0x8672);
        cell_stamp8_9(0x86F2);
        cell_stamp8_9(0x8772);
        cell_stamp8_9(0x87F2);
        cell_cursor_adv2();
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
        cell_stamp8_9(0x7D14);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            goto L0f8;
        sep_a();
        cell_pos_fwd(4);
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
        cell_stamp8_9(0x8C32);
        row_sync2(0x160);
        cell_stamp8_9(0x8C34);
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
