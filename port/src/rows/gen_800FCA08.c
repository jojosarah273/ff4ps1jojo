/* FF4 source-port — interpreted module for battle_item_xfd8_text_x2115_x4300.
 * Ground truth: src/battle_item_xfd8_text_x2115_x4300.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_xfd8_text_x2115_x4300(void)
{
    /* battle item: 0xFD8 text, 0x2115/0x4300-0x4305 cells; gate
       5574(0xE). */
    txt_set(0xFD8);
    io_poll(0xE);
    if (io_just() == 0)
        return;
    latch(0x80);
    txt_draw(0x2115);
    wnd_fx_tags();
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
    catalog_dispatch_0();
    return;
}
