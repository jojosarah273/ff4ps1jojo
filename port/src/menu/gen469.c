/* FF4 source-port — interpreted module for func_800FF5EC.
 * Ground truth: src/func_800FF5EC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FF5EC(void)
{
    /* shop buy rows: 0x1705/0x1704 texts, 0x79 window,
       80172BA8/80173008 rows; loop LFF614 on 5574(0x30)/53D4. */
    latch(3);
    txt_draw(0x1705);
    latch_cur();
    cell_put(0x79);
Lff614:
    for (;;) {
        func_800FE7D8();
        latch(0x2F);
        sep_b();
        func_800F7F48(cell_state(0x79));
        io_poll(0x10);
        if (io_go() != 0)
            goto LFF65C;
        txt_draw(0x2100);
    LFF65C:
        row_page(0x79);
        func_800F9690();
        txt_set(0x1704);
        io_poll(4);
        if (io_just() == 0)
            goto LFF6A4;
        func_800F6C68();
        cell_put(0xB7);
        goto LFF6B4;
    LFF6A4:
        func_800F6C68();
        cell_put(0xB8);
    LFF6B4:
        func_800FE870();
        func_80172BA8();
        func_80173008();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x30);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
