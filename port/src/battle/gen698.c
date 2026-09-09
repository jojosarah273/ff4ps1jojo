/* FF4 source-port — interpreted module for func_8014046C.
 * Ground truth: src/func_8014046C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014046C(void)
{
    /* battle rows: 80140558 + 5x (71DC/654C(0x26/0x27)/80140350)
       row pairs; loop L140498 on 5A90(0x10). */
    sep();
L140498:
    for (;;) {
        row_sync();
        gpu_driver_run();
        row_done();
        wnd_open(1);
        latch(0x26);
        func_80140350();
        wnd_open(2);
        latch(0x26);
        func_80140350();
        wnd_open(3);
        latch(0x27);
        func_80140350();
        wnd_open(4);
        latch(0x27);
        func_80140350();
        wnd_open(6);
        latch(0x27);
        func_80140350();
        step2();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
