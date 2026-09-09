/* FF4 source-port — interpreted module for func_80104804.
 * Ground truth: src/func_80104804.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80104804(void)
{
    /* shop rows: 0x1705/0x7A/0x79 windows, 0x6F8 texts, 800FF024
       row; loop L104834 on 5574(0x40). */
    latch(3);
    txt_draw(0x1705);
    open_row(0x7A);
    open_row(0x79);
L104834:
    for (;;) {
        cell_clear_pad();
        func_800FF024();
        row_page(0x79);
        func_800F9690();
        txt_draw(0x6F8);
        func_800FE7D8();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x20);
        if (io_just() == 0)
            goto L1048C4;
        page_paint2(0x6D0);
    L1048C4:
        io_poll(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
