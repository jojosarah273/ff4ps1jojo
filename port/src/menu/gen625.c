/* FF4 source-port — interpreted module for func_800FC110.
 * Ground truth: src/func_800FC110.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FC110(void)
{
    /* battle rows: 0x3F/0x212C/0x79 windows, 0x420C texts, 0xAD
       window, 800FC2AC close; loop L8FC140 on 5574(0x28). */
    latch(0x3F);
    func_800FD804();
    latch(1);
    txt_draw(0x212C);
    open_row(0x79);
L8fc140:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        row_page(0x79);
        func_800F9690();
        func_800F6C68();
        cell_put(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        key_page(0x79);
        row_page(0x79);
        io_poll(0x28);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800FC2AC();
    return;
}
