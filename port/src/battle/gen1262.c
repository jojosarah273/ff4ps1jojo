/* FF4 source-port — interpreted module for fn_1x1770c.
 * Ground truth: src/fn_1x1770c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1770c(void) { battle_tick_text(); txt_draw(0x1E01); latch(0x4); txt_draw(0x1E00); battle_cb_86120(); wnd_fx_7d(); }
