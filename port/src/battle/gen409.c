/* FF4 source-port — interpreted module for func_801136D4.
 * Ground truth: src/func_801136D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801136D4(void)
{
    /* battle status row: 0x79/0x23/0x20 windows, 0xACF-0xAD8 texts,
       80119AC8/80115D2C/80115BCC/8011EA5C rows; loops L1136E4 and
       L11379C. */
    open_row(0x79);
L1136e4:
    for (;;) {
        latch(0x23);
        func_800FD804();
        latch(0x20);
        txt_draw(0xACF);
        latch(2);
        txt_draw(0xAD0);
        txt_draw(0xAD1);
        wnd_open(8);
        label(0xAD2);
        latch(6);
        txt_draw(0xACD);
        func_800F8F74(0xACE);
        row_page(0x79);
        row_sel_cell_cur();
        func_800F6C68();
        txt_draw(0xAD4);
        func_800F6C68();
        txt_draw(0xAD5);
        func_80115BCC();
    L11379c:
        for (;;) {
            func_800FE7D8();
            func_80119AC8();
            func_80115D2C();
            page_open(0xAD2);
            poll_t(4);
            if (io_just() == 0)
                goto L1137E4;
            latch(1);
            cell_put(0xE5);
        L1137E4:
            poll_t_cur();
            if (io_just() == 0)
                continue;
            break;
        }
        key_page(0x79);
        row_page(0x79);
        io_poll(8);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
