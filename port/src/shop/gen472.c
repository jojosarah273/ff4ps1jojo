/* FF4 source-port — interpreted module for func_8016BAAC.
 * Ground truth: src/func_8016BAAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

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
  cell_pull60(0x4355);
  catalog_dispatch(0x50);
  row_pad();
  return;
}



