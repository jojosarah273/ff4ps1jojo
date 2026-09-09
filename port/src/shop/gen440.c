/* FF4 source-port — interpreted module for func_8016B5B0.
 * Ground truth: src/func_8016B5B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_800F8E50();





extern int func_800F9868();

void func_8016B5B0(void)

{
  row_open2();
  cell_cursor_dec();
  sep();
  cell_cursor_dec();
  row_pad();
  row_close2();
  func_800F8E50(0x2116);
  label(0x4352);
  txt_draw(0x4354);
  latch(1);
  txt_draw(0x4350);
  latch(0x18);
  txt_draw(0x4351);
  page(0);
  label(0x4355);
  func_800F9868(0x50);
  row_pad();
  return;
}



