/* FF4 source-port — interpreted module for fn_1x062e8.
 * Ground truth: src/fn_1x062e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x062e8(void)

{
  latch(0x80);
  txt_draw(0x2115);
  wnd_fx_tags();
  latch(1);
  txt_draw(0x4300);
  page(0x3d);
  label(0x2116);
  wnd_open(0xf6c6);
  label(0x4302);
  latch(0x14);
  txt_draw(0x4304);
  wnd_open(0x10);
  label(0x4305);
  catalog_dispatch_0();
  return;
}



