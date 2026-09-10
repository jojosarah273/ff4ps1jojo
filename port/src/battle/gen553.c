/* FF4 source-port — interpreted module for fn_1x05d2c.
 * Ground truth: src/fn_1x05d2c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x05d2c(void)

{
  wnd_fx_7d();
  latch(0x80);
  txt_draw(0x2115);
  wnd_fx_tags();
  latch(9);
  txt_draw(0x4300);
  cell_clear_bank(0x676);
  wnd_open(0x676);
  label(0x4302);
  wnd_open(0x2880);
  label(0x2116);
  wnd_open(0x100);
  label(0x4305);
  catalog_dispatch_0();
  return;
}



