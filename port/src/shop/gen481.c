/* FF4 source-port — interpreted module for func_801622F0.
 * Ground truth: src/func_801622F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801622F0(void)
{
    /* options timer (alt): 0x1D/0x34C8/0x34C7/0x357A/0x2006/0x3534/
       0x3303 texts/windows, 80152CDC + 80150C38; loop L162360 on
       5574(0x1D). */
    latch(0x1D);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    txt_set(0x357A);
    func_80152CDC();
    page(0xA6);
    txt_cell(0x2006);
    row_read(0xFD);
    cell_draw(0x2006);
    row_page(0xCD);
    func_80152CDC();
    page_open(0x3534);
L162360:
    for (;;) {
        txt_cell(0x3303);
        io_poll(0x1D);
        if (io_just() != 0)
            goto L1623A8;
        cell_step();
        cell_step();
        cell_step();
        cell_step();
    }
L1623A8:
    latch(0x13);
    cell_draw(0x3303);
    latch(0x18);
    cell_draw(0x3302);
    row_page(0xCD);
    cell_put_cur();
    latch(9);
    func_80150C38();
    return;
}
