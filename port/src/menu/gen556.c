/* FF4 source-port — interpreted module for func_800FED3C.
 * Ground truth: src/func_800FED3C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FED3C(void)
{
    /* shop banner: 0xD9/0x7A/0x79/0xB1 windows, 0x2100/0x4200 texts,
       80178BB4 row; loop L8FED94 on 5DA0(0x79)/5B8C; closes via
       6434(0x202) gate. */
    latch(1);
    cell_put(0xD9);
    open_row(0x7A);
    latch(0x1F);
    cell_put(0x79);
    latch(0x80);
    txt_draw(0x2100);
    latch(0x81);
    txt_draw(0x4200);
    func_800F5448();
L8fed94:
    for (;;) {
        func_800FE778();
        row_page(0x79);
        /* a0/v1 gate -> L8FEDC4 */
        func_80178BB4();
        poll_pair(0x79);
        poll_pair(0x79);
        if (poll_go_cur() != 0)
            continue;
        break;
    }
    open_row(0xD9);
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto L8FEE14;
    latch(0xF);
    goto L8FEE1C;
L8FEE14:
    row_page(0x80);
L8FEE1C:
    txt_draw(0x2100);
    return;
}
