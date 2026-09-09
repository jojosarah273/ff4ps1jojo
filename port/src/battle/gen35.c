/* FF4 source-port — interpreted module for func_8014FEC8.
 * Ground truth: src/func_8014FEC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014FEC8(void)
{
    draw_pad(0x80);
    func_800F8E50(0xF469);
    draw_pad(0x1000);
    func_800F8E50(0xF46B);
    func_800F9200();
    io_poll(0x15);
    if (io_go() == 0)
        goto Lffc0;
    sep_b();
    func_800F8058(0x15);
    row_open();
    row_prep(0x20);
    row_arm_s_cur();
    func_800F81B0(0xF469);
    sep();
    row_prep_close();
    row_close();
Lffc0:
    latch(0x7F);
    cell_put(6);
    latch(0xC);
    cell_put(2);
    row_close2();
    row_prep(0x20);
    row_sync2(0xDBE6);
    func_800F8274(8);
    row_sync2(0xF000);
    func_800F8274(4);
    func_800F7534(0xF469);
L004c:
    for (;;) {
        row_sync();
        func_800F6CF4();
        func_800F922C();
        func_800F922C();
        func_800F4264(0x3FFF);
        row_arm_s_cur();
        func_800F68A0(4);
        func_800F8274();
        func_800F9410();
        func_800F4264(0x4000);
        func_800F8274(0xA);
        func_800F9410();
        func_800F4264(0x8000);
        if (func_800F41E8(0x202) != 0)
            goto L01a0;
        draw_pad_cur();
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F8378(8);
            func_800F62F0();
            func_800F62F0(0x10);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F4264(0xFF);
            func_800F8378(8);
            func_800F62F0(0x20);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        goto L0260;
    L01a0:
        draw_pad(0xE);
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F8378(8);
            func_800F62F0();
            func_800F62F0(0xFFFE);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        draw_pad(0x1E);
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F4264(0xFF);
            func_800F8378(8);
            func_800F62F0(0xE);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
    L0260:
        row_read2(8);
        sep_a();
        func_800F4064(0x20);
        func_800F8274(8);
        row_done();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    sep();
    for (;;) {
        cell_draw(0xE9A6);
        cell_draw(0xEBA6);
        cell_step();
        poll_t(0x40);
        if (io_just() != 0)
            break;
    }
    draw_pad(0x1800);
    page_open(0xF46B);
    tail_cur();
    latch(0x7E);
    wnd_open(0xDBE6);
    func_800723F0();
    func_80150400();
    return;
}
