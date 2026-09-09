/* FF4 source-port — interpreted module for func_80120F1C.
 * Ground truth: src/func_80120F1C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








void func_80120F1C(void)

{
  cell_cursor_dec();
  row_open();
  wnd_open(0xc600);
  tail(0x29);
  wnd_open(0x7800);
  tail(0x35);
  latch(2);
  cell_put(0xc3);
  latch(0x20);
  cell_put(0x34);
  row_close();
  row_close2();
  return;
}



