/* FF4 source-port — interpreted module for func_80118938.
 * Ground truth: src/func_80118938.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118938(void)
{
    /* battle rows: 0x79/0x83/0x82/0x81 windows, 0x212D/0xFE4/0x2130/
       0x2131 texts, 8017EA90 icon; loops L118948 on 4120(0x202)/
       5B8C. */
    open_row(0x79);
L118948:
    for (;;) {
        func_800FE7D8();
        row_page(0x83);
        row_read(0xE0);
        func_800F78C4(cell_state(0x81));
        func_8017EA90();
        key_page(0x79);
        row_page(0x79);
        func_800F4370(0x82);
        if (sel(0x202) != 0)
            continue;
        poll_pair(0x81);
        if (poll_go_cur() != 0)
            continue;
        break;
    }
    open_row(0x81);
    latch(0x11);
    txt_draw(0x212D);
    txt_set(0xFE4);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto L118A28;
    latch(2);
    txt_draw(0x2130);
    latch(0x43);
    txt_draw(0x2131);
    return;
L118A28:
    func_800F8F74(0x2131);
    return;
}
