/* FF4 source-port — interpreted module for func_800FC1CC.
 * Ground truth: src/func_800FC1CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FC1CC(void)
{
    /* battle rows: 0x3F/0x212C/0x79 windows, 0x2106/0xC6 texts,
       800FD37C/800FC2AC rows; loop L8FC200 on 5574(0x2A). */
    latch(0x3F);
    func_800FD804();
    latch(3);
    txt_draw(0x212C);
    open_row(0x79);
L8fc200:
    for (;;) {
        func_800FE7B0();
        row_page(0x79);
        func_800F7864();
        func_800F9690();
        txt_draw(0x2106);
        key_page(0x79);
        key_page(0x79);
        row_page(0x79);
        io_poll(0x2A);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0xC6);
    if (gate(0x202) != 0)
        goto L8FC294;
    func_800FD37C();
L8FC294:
    func_800FC2AC();
    return;
}
