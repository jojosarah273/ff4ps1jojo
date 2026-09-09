/* FF4 source-port — interpreted module for func_80167DD4.
 * Ground truth: src/func_80167DD4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_80167B48();

void func_80167DD4(void)

{
  func_80167B48();
  row_read(0x7f);
  sep_a();
  cell_draw(0xf398);
  cell_step();
  func_80167B48();
  row_read(0x3f);
  sep_a();
  row_open_w(0x20);
  cell_draw(0xf398);
  cell_step();
  return;
}



