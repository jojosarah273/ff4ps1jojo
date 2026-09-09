/* FF4 source-port — interpreted module for func_801062E8.
 * Ground truth: src/func_801062E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






extern int func_800FCCBC();

void func_801062E8(void)

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
  func_800FCCBC();
  return;
}



