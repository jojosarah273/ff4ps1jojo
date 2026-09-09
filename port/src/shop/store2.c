/* FF4 source-port — interpreted module for func_8016AB14.
 * Ground truth: src/func_8016AB14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016AB14(void)
{
    /* shop store registers: 0x3304 gate title, 0x43/0x42 windows with
       0x4300-0x4330 index rows (8188/8D00 pairs); loop L16AB44 polls
       5958(0x15). */
    sep();
L16ab44:
    for (;;) {
        cell_push_c8();
        cell_draw(0x3304);
        cell_step();
        poll_t(0x15);
        if (io_just() == 0)
            continue;
        break;
    }
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    latch(0x43);
    txt_draw(0x4300);
    txt_draw(0x4310);
    latch(0x42);
    txt_draw(0x4320);
    latch(0x1B);
    txt_draw(0x4301);
    latch(0x1D);
    txt_draw(0x4311);
    latch(0xE);
    txt_draw(0x4321);
    wnd_open(0x3304);
    label(0x4302);
    wnd_open(0x330B);
    label(0x4312);
    wnd_open(0x3312);
    label(0x4322);
    latch(0x7E);
    txt_draw(0x4304);
    txt_draw(0x4307);
    txt_draw(0x430C);
    txt_draw(0x430F);
    txt_draw(0x4324);
    txt_draw(0x4327);
    latch(3);
    txt_draw(0x420C);
    row_pad();
    return;
}
