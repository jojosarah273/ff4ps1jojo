/* FF4 source-port — interpreted module for func_800FF1C0.
 * Ground truth: src/func_800FF1C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FF1C0(void)
{
    latch(3);
    txt_draw(0x1705);
    latch(0x1F);
    cell_put(0x79);
L1e8:
    for (;;) {
        func_800FE7D8();
        row_page(0x79);
        cell_put(0xAD);
        txt_set(0x1704);
        io_poll(4);
        if (io_just() == 0)
            goto L238;
        poll_pair(0xB7);
        row_page(0xB7);
        goto L248;
    L238:
        poll_pair(0xB8);
        row_page(0xB8);
    L248:
        func_8017559C();
        func_800FE870();
        func_80172BA8();
        func_80173008();
        poll_pair(0x79);
        row_page(0x79);
        io_poll(0x10);
        if (io_go() != 0)
            continue;
        break;
    }
    latch(0x1F);
    cell_put(0x79);
L2a8:
    for (;;) {
        latch(0x1F);
        sep_b();
        func_800F7F48(cell_state(0x79));
        func_800F9690();
        func_800F6C68();
        txt_draw(0x6FB);
        row_page(0x79);
        cell_put(0xAD);
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800FE5D4();
        func_800FE6E4();
        func_80103F00();
        func_80172BA8();
        func_80173008();
        poll_pair(0x79);
        row_page(0x79);
        if (gate(0x8080) != 0)
            continue;
        break;
    }
    latch(0x71);
    txt_draw(0x1706);
    latch(0x10);
    txt_draw(0x1707);
    latch(1);
    txt_draw(0x1700);
    txt_draw(0x1701);
    txt_set(0x1704);
    io_poll(4);
    if (io_just() == 0)
        goto L3ec;
    latch(1);
    txt_draw(0x171F);
    txt_set(0x6D0);
    if (gate(2) != 0)
        goto L3fc;
    latch(1);
    txt_draw(0x171B);
    goto L3fc;
L3ec:
    latch(1);
    txt_draw(0x1723);
L3fc:
    func_800FB160();
    latch(0x10);
    func_8017559C();
    latch(3);
    txt_draw(0x1705);
    latch(0x81);
    txt_draw(0x4200);
    latch_cur();
    txt_draw(0x2100);
    latch(0x20);
    cell_put(0xAD);
    latch(0x2F);
    cell_put(0x79);
L464:
    for (;;) {
        func_800FE7D8();
        latch(0x2F);
        sep_b();
        func_800F7F48(cell_state(0x79));
        io_poll(0x10);
        if (io_go() == 0)
            txt_draw(0x2100);
        row_page(0x79);
        func_800F9690();
        txt_set(0x1704);
        io_poll(4);
        if (io_just() == 0)
            goto L4f4;
        func_800F6C68();
        cell_put(0xB7);
        goto L504;
    L4f4:
        func_800F6C68();
        cell_put(0xB8);
    L504:
        func_80172BA8();
        func_80173008();
        poll_pair(0x79);
        row_page(0x79);
        io_poll(0xFF);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
