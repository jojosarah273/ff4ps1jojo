/* FF4 source-port — interpreted module for func_8014CFC4.
 * Ground truth: src/func_8014CFC4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014CFC4(void)
{
    /* battle rows: 5574(2/3) gates route the 0xFF window fill; loop
       L14D038 on 5A90(0x10); 8014E424 detail. */
    txt_set_cur();
    io_poll(2);
    if (io_just() != 0)
        goto L14D004;
    io_poll(3);
    if (io_just() == 0)
        return;
L14D004:
    latch(0xFF);
    txt_draw_cur();
    sep();
L14d038:
    for (;;) {
        func_800F8960();
        step2();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set_cur();
    func_8014E424();
    return;
}
