/* FF4 source-port — interpreted module for func_800FCA08.
 * Ground truth: src/func_800FCA08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FCA08(void)
{
    /* battle item: 0xFD8 text, 0x2115/0x4300-0x4305 cells; gate
       5574(0xE). */
    txt_set(0xFD8);
    io_poll(0xE);
    if (io_just() == 0)
        return;
    latch(0x80);
    txt_draw(0x2115);
    func_800FCC84();
    wnd_open(0x430);
    label(0x2116);
    latch(1);
    txt_draw(0x4300);
    wnd_open(0x5800);
    label(0x4302);
    latch(0x7F);
    txt_draw(0x4304);
    wnd_open(0x100);
    label(0x4305);
    func_800FCCBC();
    return;
}
