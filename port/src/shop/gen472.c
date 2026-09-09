/* FF4 source-port — interpreted module for func_8016BAAC.
 * Ground truth: src/func_8016BAAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_800F8E50();




extern int func_800F9868();

void func_8016BAAC(void)

{
  row_open2();
  sep();
  cell_cursor_dec();
  row_pad();
  label(0x2116);
  wnd_open(0xdf3f);
  label(0x4352);
  latch(9);
  txt_draw(0x4350);
  latch(0x18);
  txt_draw(0x4351);
  latch(0x13);
  txt_draw(0x4354);
  func_800F8E50(0x4355);
  func_800F9868(0x50);
  row_pad();
  return;
}



