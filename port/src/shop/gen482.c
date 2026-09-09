/* FF4 source-port — interpreted module for func_801621D0.
 * Ground truth: src/func_801621D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801621D0(void)
{
    /* options timer: 0xCE/0x357A/0x2006/0x3534/0x3303 windows/texts,
       80152CDC + 80150C38 rows; loop L162238 on 5574(0x13). */
    row_page(0xCE);
    txt_draw(0x357A);
    func_80152CDC();
    page(0xA6);
    txt_cell(0x2006);
    cell_draw(0x2006);
    row_page(0xCD);
    func_80152CDC();
    page_open(0x3534);
L162238:
    for (;;) {
        txt_cell(0x3303);
        io_poll(0x13);
        if (io_just() != 0)
            goto L162280;
        cell_step();
        cell_step();
        cell_step();
        cell_step();
    }
L162280:
    latch(0x1D);
    cell_draw(0x3303);
    sep();
    cell_draw(0x3302);
    row_page(0xCD);
    cell_put_cur();
    latch(9);
    func_80150C38();
    latch(0x13);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    return;
}
