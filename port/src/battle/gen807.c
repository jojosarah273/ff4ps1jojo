/* FF4 source-port — interpreted module for func_8010F254.
 * Ground truth: src/func_8010F254.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010F254(void)
{
    wnd_open(0xE828);
    label(0x1708);
    page_open(0x1725);
    label(0x1706);
    txt_set(0x1727);
    func_8011AB18();
    latch(1);
    cell_put(0xC3);
    func_801035B0();
    latch(0xFF);
    cell_put(0xA2);
    func_80102494();
    latch(1);
    txt_draw(0x6C8);
    wnd_open(0xE828);
    label(0x1725);
    battle_wndfx_run();
}
