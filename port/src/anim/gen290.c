/* FF4 source-port — interpreted module for func_80174880.
 * Ground truth: src/func_80174880.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80174880(void)
{
    /* battle action-confirm overlay: 4 members; each gets a highlight pass
       (6630/5574(0xA) + 4008(0x38) select-read) and a detail pass
       (6630/4248(0xF) + 4008(0x38)). Skip when 53C0()==0 (no confirm). */
    latch(0x80);
    txt_draw(0x2115);
    wnd_open(0x2882);
    row_page(0x86);
    io_poll(0xA);
    if (io_go() != 0) {
        sep_a();
        row_open_w(0x38);
    }
    latch(0x20);
    row_page(0x86);
    row_read(0xF);
    io_poll(0xA);
    if (io_go() != 0) {
        sep_a();
        row_open_w(0x38);
    }
    latch(0x20);
    row_page(0x87);
    io_poll(0xA);
    if (io_go() != 0) {
        sep_a();
        row_open_w(0x38);
    }
    latch(0x20);
    row_page(0x87);
    row_read(0xF);
    io_poll(0xA);
    if (io_go() != 0) {
        sep_a();
        row_open_w(0x38);
    }
    latch(0x20);
    wnd_open(0x28A2);
    row_page(0x88);
    io_poll(0xA);
    if (io_go() != 0) {
        sep_a();
        row_open_w(0x38);
    }
    latch(0x20);
    row_page(0x88);
    row_read(0xF);
    io_poll(0xA);
    if (io_go() != 0) {
        sep_a();
        row_open_w(0x38);
    }
    latch(0x20);
    return;
}
