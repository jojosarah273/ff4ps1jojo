/* FF4 source-port — interpreted module for func_800FF704.
 * Ground truth: src/func_800FF704.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FF704(void)
{
    /* shop buy-flow: 0x1706/0x1707 headers, 0x1700-0x1704 name rows,
       64/6D/6E/79/B7/B8 windows; 800FB09C + 80172BA8/80173008 render the
       buy list; loops at LFF804/LFF8C8. */
    latch(0x6A);
    txt_draw(0x1706);
    latch(0xD4);
    txt_draw(0x1707);
    latch_cur();
    txt_draw(0x1700);
    txt_draw(0x1701);
    txt_set(0x1704);
    io_poll(4);
    if (io_just() == 0)
        goto LFF794;
    func_800F8F74(0x171F);
    txt_set(0x6D0);
    if (gate(2) != 0)
        goto LFF79C;
    func_800F8F74(0x171B);
    goto LFF79C;
LFF794:
    func_800F8F74(0x1723);
LFF79C:
    func_800FB09C();
    latch(3);
    txt_draw(0x1705);
    latch(0x81);
    txt_draw(0x4200);
    open_row(0x79);
    txt_set(0x1704);
    io_poll(4);
    if (io_just() == 0)
        goto LFF7FC;
    open_row(0xB7);
    goto LFF804;
LFF7FC:
    open_row(0xB8);
LFF804:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        latch(0x20);
        sep_b();
        func_800F7F48(cell_state(0x79));
        func_800F9690();
        func_800F6C68();
        txt_draw(0x6FB);
        row_page(0x79);
        cell_put(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        func_80103F00();
        func_80172BA8();
        func_80173008();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x20);
        if (io_just() != 0)
            break;
    }
    latch(0x11);
    cell_put(0x79);
    cell_put(0xAD);
LFF8C8:
    for (;;) {
        func_800FE7D8();
        row_page(0x79);
        cell_put(0xAD);
        txt_set(0x1704);
        io_poll(4);
        if (io_just() == 0)
            goto LFF918;
        key_page(0xB7);
        row_page(0xB7);
        goto LFF928;
    LFF918:
        key_page(0xB8);
        row_page(0xB8);
    LFF928:
        func_8017559C();
        func_80172BA8();
        func_80173008();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x21);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
